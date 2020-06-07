#include <iostream>
#include <vector>
#define MAXSIZE 10
#define MAXN 13

using namespace std;

struct GamePiece{
	int x, y, dir, pos;
}piece[MAXSIZE];

struct GameMap{
	int colour;
	vector<int> pvec;
}map[MAXN][MAXN];

int main(){ 
	int N, K, solution = -1;	//N: map size K: piece
	int dx[] = {0,1,-1,0,0}, dy[] = {0,0,0,-1,1};
	scanf("%d %d", &N, &K);

	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			scanf("%d", &map[i][j].colour);
		}
	}
	for(int i=0;i<K;i++){
		int x, y;
		scanf("%d %d %d", &y, &x, &piece[i].dir);
		piece[i].y = y; piece[i].x = x; piece[i].pos = 0;
		map[y][x].pvec.push_back(i);
	}

	for(int i=1;i<=1000;i++){
		for(int j=0;j<K;j++){
			int dir = piece[j].dir;	int x = piece[j].x; int y = piece[j].y; int next_x = x + dx[dir];	int next_y = y + dy[dir];
			
			//end of map or blue
			if (((next_x > N || next_x <= 0) || (next_y > N || next_y <= 0)) || (map[next_y][next_x].colour == 2)){		
				if (dir == 1)	dir = 2;
				else if(dir==2) dir = 1;
				else if(dir==3) dir = 4;
				else if(dir==4) dir = 3;
				piece[j].dir = dir; next_x = x + dx[dir]; next_y = y + dy[dir];
				if (((next_x > N || next_x <= 0) || (next_y > N || next_y <= 0)) || (map[next_y][next_x].colour == 2)) continue;
			}

			//white map
			if(map[next_y][next_x].colour == 0){
				int cur_pos = piece[j].pos;
				int temp_size = map[y][x].pvec.size();
				for(int k=cur_pos;k<map[y][x].pvec.size();k++){
					int tmp = map[y][x].pvec[k];
					piece[tmp].x = next_x; piece[tmp].y = next_y;
					map[next_y][next_x].pvec.push_back(tmp);
					piece[tmp].pos = map[next_y][next_x].pvec.size() -1;
				}
				for(int k=cur_pos;k<temp_size;k++){
					map[y][x].pvec.pop_back();
				}
			}

			//red map
			if(map[next_y][next_x].colour == 1){
				int cur_pos = piece[j].pos;
				int temp_size = map[y][x].pvec.size();
				for(int k=cur_pos;k<temp_size;k++){
					int tmp = map[y][x].pvec.back();
					piece[tmp].x = next_x; piece[tmp].y = next_y;
					map[next_y][next_x].pvec.push_back(tmp);
					piece[tmp].pos = map[next_y][next_x].pvec.size() -1;
					map[y][x].pvec.pop_back();
				}
			}

			if(map[next_y][next_x].pvec.size()>=4){
				solution = i;
				break;
			}
		}

		if(solution!=-1) break;
	}
	printf("%d\n", solution);
}