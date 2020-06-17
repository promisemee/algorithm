//문자열 내 마음대로 정렬하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;

bool sort_algorithm(string a, string b){
    if (a[n]!=b[n]) return a[n] < b[n];
    else return a<b;
}



vector<string> solution(vector<string> strings, int nn) {
    n = nn;
    sort(strings.begin(), strings.end(), sort_algorithm);
    return strings;
}