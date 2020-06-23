#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int max = 0, index;
	vector<int> alphabet(26);
	for(auto c:s){
		if(isupper(c)) alphabet[c-'A']++;
		else alphabet[c-'a']++;
	}
	for(int i=0;i<26;i++){
		if(max < alphabet[i]){
			max = alphabet[i];
			index = i;
		}
	}
	sort(alphabet.begin(), alphabet.end(), greater<int>());
	if(alphabet[0]==alphabet[1]) cout << "?" << "\n";
	else printf("%c\n", index+'A');
}