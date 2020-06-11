//올바른 괄호
#include <string>
#include <iostream>

using namespace std;

bool solution(string s){
    int check=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') check++;
        else check--;
        if(check<0) return false;
    }
    if (check!=0) return false;
    return true;
}