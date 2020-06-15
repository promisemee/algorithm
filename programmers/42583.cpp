//다리를 지나는 트럭
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, total_weights = 0;
    queue<int> bridge;
    for(int time=0;;time++){
        if(truck_weights.empty())
            return time+bridge_length;
        if(bridge.size()==bridge_length){
            total_weights -= bridge.front();
            bridge.pop();
        }
        if(total_weights+truck_weights.front() <= weight){
            bridge.push(truck_weights.front());
            total_weights += truck_weights.front();
            truck_weights.erase(truck_weights.begin());
        }
        else{
            bridge.push(0);
        }
        
    }
    return answer;
}