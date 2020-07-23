#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    for(int i=0;i<T;i++){
        int N, answer = 0, maxRecord = 0;
        cin >> N;
        vector<int> v(N);
        for(int i=0;i<N;i++){
            cin >> v[i];
        }
        for(int i=0;i<N;i++){
        	bool greaterThanPreviousDays = i == 0 ||  v[i] > maxRecord;
        	bool greaterThanFollowingDay = i == N-1 || v[i] > v[i+1];
        	if(greaterThanPreviousDays && greaterThanFollowingDay){
        		answer++;
        	}
        	maxRecord = max(maxRecord, v[i]);
        }
        printf("Case #%d: %d\n", i+1, answer);
    }
}