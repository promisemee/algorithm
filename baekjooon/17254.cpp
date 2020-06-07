// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Keyboard{
// 	public:
// 		int key;
// 		int time;
// 		char alp;
// 		Keyboard(int key, int time, char alp) : key(key), time(time), alp(alp){}
// };

// bool compare(Keyboard a, Keyboard b){
// 	if (a.time == b.time) return a.key<b.key;
// 	else return a.time<b.time;
// }

// int main(){
// 	int N, M;
// 	cin >> N >> M;
// 	vector<Keyboard> v;
// 	for(int i=0;i<M;i++){
// 		int a, b;
// 		char c;
// 		cin >> a >> b >> c;
// 		v.push_back(Keyboard(a, b, c));
// 	}
// 	sort(v.begin(), v.end(), compare);
// 	for(int i=0;i<M;i++){
// 		cout << v.at(i).alp;
// 	}
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<pair<int, int>, char> a, pair<pair<int, int>, char> b){
	if (a.first.second == b.first.second) return a.first.first < b.first.first;
	else return a.first.second < b.first.second;
}

int main(){
	int N, M;
	cin >> N >> M;
	vector<pair<pair<int, int>, char>> v;
	int a, b;
	char c;
	for(int i=0;i<M;i++){
		cin >> a >> b >> c;
		v.push_back(make_pair(make_pair(a,b),c));
	}
	sort(v.begin(), v.end(), compare);
	for(int i=0;i<M;i++){
		cout << v[i].second;
	}
}