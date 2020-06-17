//카펫
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int area = brown+yellow;
    for(int i=1;i<brown/2;i++){
        for(int j=1;j<brown/2;j++){
            if(((i+j)*2-4==brown) && i*j == area){
                answer.push_back(j); answer.push_back(i); return answer;}
        }
    }
    return answer;
}