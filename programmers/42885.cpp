//구명보트
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int low = 0, high = people.size()-1;
    while(low <= high){
        if (low==high){
            answer++;
            break;
        }
        if (people[low]+people[high]<=limit){
            low++;
            high--;
            answer++;
        }else{
            answer++;
            high--;
        }
    }
    return answer;
}