#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main(){
	string S;
	int size, T;
	scanf("%d", &T);
	for (int i=0;i<T;i++){
		cin >> S;
		stack<string> parentheses;
		string answer = "";
		for(auto c : S){
			int digit = stoi(&c);
			if (parentheses.empty()){
				for(int k=0;i<digit;k++){
					parentheses.push(")");
					answer += "(";
				}

			}else if(!parentheses.empty() && parentheses.size() <= digit){
				size = parentheses.size();
				for(int k=0;i<digit-size;k++){
					parentheses.push(")");
					answer += "(";
				}
			}else if(!parentheses.empty() && parentheses.size() > digit){
				size = parentheses.size();
				for(int k=0;k<size-digit;k++){
					parentheses.pop();
					answer += ")";
				}
			}
			answer += c;
		}

		while(!parentheses.empty()){
			parentheses.pop();
			answer+=")";
		}

		cout << answer << "\n";
	}
	

	
}