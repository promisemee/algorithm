#include <iostream>
#define MAXSIZE 101

using namespace std;

struct Shark{
	int x, y, speed, direction, size, alive = 1;
}shark[MAXSIZE*MAXSIZE];

int main(){
	int R, C, M, total = 0;
	int dx[] = {0,0,0,1,-1}, dy[] = {0,-1,1,0,0};
	scanf("%d %d %d", &R, &C, &M);
	int fishing[MAXSIZE][MAXSIZE] = {0};
	for(int i=1;i<=M;i++){
		int r,c;
		scanf("%d %d %d %d %d", &shark[i].y, &shark[i].x, &shark[i].speed, &shark[i].direction, &shark[i].size);
		shark[i].x-=1;
		shark[i].y-=1;
		fishing[shark[i].y][shark[i].x] = i;
	}
	for(int x = 0; x<C; x++){
		//get_shark
		for(int y=0;y<R;y++){
			if(fishing[y][x]>0){
				total+= shark[fishing[y][x]].size;
				shark[fishing[y][x]].alive = 0;
				fishing[y][x] = 0;
				break;
			}
		}

		//move_shark
		int tmp_fishing[MAXSIZE][MAXSIZE]={0};
		for(int i=1;i<=M;i++){
			if(shark[i].alive==0) continue;
			int current_x = shark[i].x, current_y = shark[i].y, current_dir = shark[i].direction, s = shark[i].speed;
			int new_x, new_y;
			while (1) {
                new_x = current_x + s * dx[current_dir]; new_y = current_y + s * dy[current_dir];
                if (new_x < C && new_y < R && new_y >= 0 && new_x >= 0)
                    break;
                if (current_dir == 1 && new_y < 0) { s -= current_y; current_y = 0; current_dir = 2;  }
                else if (current_dir == 2 && new_y >= R) { s -= R - 1 - current_y; current_y = R - 1; current_dir = 1;   }
                else if (current_dir == 3 && new_x >= C) { s -= C - 1 - current_x; current_x = C - 1; current_dir = 4; }
                else if (current_dir == 4 && new_x < 0) { s -= current_x; current_x = 0; current_dir = 3;  }
            }

			//kill smaller shark
			if (tmp_fishing[new_y][new_x]) {
                if (shark[tmp_fishing[new_y][new_x]].size > shark[i].size) 
                	shark[i].alive = 0;
                else { 
                	shark[tmp_fishing[new_y][new_x]].alive = 0; 
                	tmp_fishing[new_y][new_x] = i; 
                }
            }
            else tmp_fishing[new_y][new_x] = i;
            
            shark[i].x = new_x; 
            shark[i].y = new_y; 
            shark[i].direction = current_dir;
		}
		
		for (int y = 0; y < R; y++)
            for (int x = 0; x < C; x++)
                fishing[y][x] = tmp_fishing[y][x];
	}

	printf("%d\n", total);
}