//모의고사
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int math_a[5] = {1,2,3,4,5};   //5
    int math_b[8] = {2,1,2,3,2,4,2,5}; //8
    int math_c[10] = {3,3,1,1,2,2,4,4,5,5}; //10
    int answer_a = 0, answer_b=0,answer_c=0;
    
    
    for(int i=0;i<answers.size();i++){
        int current_answer = answers[i];
        if (math_a[(i)%5]==current_answer) answer_a++;
        if (math_b[(i)%8]==current_answer) answer_b++;
        if (math_c[(i)%10]==current_answer) answer_c++;
    }
    
    int max = (answer_a>=answer_b)? answer_a : answer_b;
    max = (max >= answer_c)? max:answer_c;
    
    if(answer_a==max) answer.push_back(1);
    if(answer_b==max) answer.push_back(2);
    if(answer_c==max) answer.push_back(3);

    return answer;
}