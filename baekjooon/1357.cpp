#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Rev(int x){
	string y = to_string(x);
	reverse(y.begin(), y.end());
	return atoi(y.c_str());
}

int main(){
	int a, b;
	cin >> a >> b;
	printf("%d\n", Rev(Rev(a)+Rev(b)));
}