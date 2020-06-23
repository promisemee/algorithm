#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	cin.ignore();
	for(int i=0;i<N;i++){
		string sentence;
		getline(cin, sentence);
		sentence[0] = toupper(sentence[0]);
		cout << sentence << "\n";
	}
}