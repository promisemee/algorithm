//예산
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> budgets, int M) {
    int answer = 0, total = 0; vector<int> left, right = budgets;
    int temp = M / budgets.size();
    while(1){
        int max = 0;
        for(int i=0;i<right.size();i++){
            if(right[i]<=temp){
                total += right[i];
                if(right[i]>=max) max = right[i];
            }else{
                left.push_back(right[i]);
            }
        }
        if(left.empty()) {
            temp = (max>temp)? temp: max; 
            break;
        }
        right = left;
        left.clear();
        if(temp>=(M - total) / right.size()) break; 
        else temp = (M - total) / right.size();
    }
    answer = temp;
    return answer;
}

// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> budgets, int M) {
//     sort(budgets.begin(), budgets.end());
//     int size = budgets.size();
    
//     for(int i=0;i<budgets.size();i++){
//         if(budgets[i]>(M/size)) return M/size;
//         M-=budgets[i];
//         size--;
//     }
    
//     return budgets.back();
// }