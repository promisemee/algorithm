//JadenCase
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool flag = true;
    for(int i=0;i<s.size();i++){
        if(s[i] == ' ') {flag = true; continue;}
        if(flag == true){
            flag=false;
            if(isalpha(s[i]))
                s[i] = toupper(s[i]);
            continue;
        }
        s[i] = tolower(s[i]);
    }
    return s;
}