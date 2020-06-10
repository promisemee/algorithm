//가장 큰 수
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 344 34
// 34434 34344
    
// 343 34
// 34334 34343

bool compare(int a, int b){
    string temp1 = to_string(a) + to_string(b);
    string temp2 = to_string(b) + to_string(a);
    return temp1>temp2;
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), compare);
    for(int i=0; i<numbers.size(); i++){
        answer += to_string(numbers[i]);
    }
    if (answer[0]=='0') answer = "0";
    return answer;
}