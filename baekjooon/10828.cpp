#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
	int N;
	cin >> N;
	stack<int> s;
	for(int i = 0; i < N; i++){
		string function;
		cin >> function;
		if (function == "push"){
			int num;
			cin >> num;
			s.push(num);
		}
		else if (function == "pop"){
			if (s.empty()) cout << -1 << endl;
			else{
				cout << s.top() <<endl;
				s.pop();
			}
		}
		else if (function == "size"){
			cout << s.size() << endl;
		}
		else if (function == "empty"){
			if (s.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (function == "top")
			if (s.empty()) cout << -1 << endl;
			else{
				cout << s.top() << endl;
			}
	}
	return 0;
}