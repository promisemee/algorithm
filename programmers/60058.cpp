//괄호 변환
#include <string>
#include <vector>

using namespace std;

bool check_balanced(string u){
    int check=0;
    for(int i=0;i<u.size();i++){
        if(u[i]=='(') check++;
        else check--;
    }
    if(check==0) return true;
    return false;
}

bool check_right(string u){
    if(!check_balanced(u)) return false;
    int check = 0;
    for(int i=0;i<u.size();i++){
        if(u[i]=='(') check++;
        else check--;
        if(check<0) return false;
    }
    return true;
}

string check_string(string w){
    string u, v = "", answer = "";
    if (w.size()<=0) return "";
    int check = 0, i;
    for(i=0;i<w.size();i++){
        if(w[i]=='(') check++;
        else check--;
        if(check==0) break;
    }
    u = w.substr(0, i+1);
    v = w.substr(i+1);
    
    if(check_right(u)){
        return answer + u + check_string(v);
    }else{
        answer += "(";
        answer += check_string(v);
        answer += ")";
        for(int j=1;j<u.size()-1;j++){
            if(u[j]==')') answer+="(";
            else answer+=")";
        }
    }
    return answer;
}

string solution(string p) {
    if (p.size() == 0) return "";
    if(check_right(p)) return p; 
    return check_string(p);
}