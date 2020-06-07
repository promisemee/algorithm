#include <iostream>
#include <string>

using namespace std;

int main(){
	int array[2001][2001];
	int current_x, current_y, t;
	//array[1000][1000] = 1;// current_position = (1000,1000)
	scanf("%d", &t);
	// for(int i=0;i<t;i++){
	// 	int pathtime = 0;
	// 	current_x = 1000;
	// 	current_y = 1000;
	// 	string route;
	// 	cin >> route;
	// 	for(auto c: route){
	// 		if (c=='N'){
	// 			current_y++;
	// 		}
	// 		else if (c=='S'){
	// 			current_y--;
	// 		}
	// 		else if (c=='E'){
	// 			current_x++;
	// 		}
	// 		else if (c=='W'){
	// 			current_x--;
	// 		}
	// 		if (array[current_x][current_y] != 1){
	// 			pathtime += 5;
	// 		}else{
	// 			pathtime += 1;
	// 		}
	// 		array[current_x][current_y] = 1;
	// 	}
	// 	printf("%d\n", pathtime);
	// }
}