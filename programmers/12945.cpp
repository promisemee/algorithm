//피보나치 수
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0; int fib[n+1];
    fib[0] = 0; fib[1] = 1;
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1] % 1234567 + fib[i-2] % 1234567;
    }
    return fib[n] % 1234567;
}