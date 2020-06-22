//타일 장식물
#include <string>
#include <vector>

using namespace std;

long long solution(int N) {
    vector<long long int> arr(N+1);
    arr[0] = 1; arr[1] = 1;
    for(int i=2;i<=N;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return (arr[N]+arr[N-1])*2;
}