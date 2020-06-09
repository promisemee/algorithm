//전화번호 목록
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    unordered_map<string, int> nlist;
    sort(phone_book.begin(), phone_book.end());
    for(string number:phone_book){
        nlist[number] = number.size();
    }
    
    for(int i=0;i<phone_book.size();i++){
        for(int j=i+1;j<phone_book.size();j++){
            string first_v = phone_book.at(i);
            string second_v = phone_book.at(j);
            if ((nlist[first_v]<nlist[second_v])&&(second_v.compare(0, first_v.size(), first_v)==0)){
                return false;
            }
        }
    }
    
    
    
    return answer;
}