#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	while(1){
		string sentence = "";
		getline(cin, sentence);
		if(sentence == "END") break;
		reverse(sentence.begin(), sentence.end());
		cout << sentence << "\n";
	}
}