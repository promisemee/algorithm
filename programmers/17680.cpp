//[1차] 캐시
#include <string>
#include <vector>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;
    vector<string>::iterator it;
    
    if(cacheSize == 0) return cities.size()*5;
    
    for(int i=0;i<cities.size();i++){
        string new_string = cities[i];
        for(int i=0;i<new_string.size();i++) 
            new_string[i] = toupper(new_string[i]);
        for(it = cache.begin(); it<cache.end(); it++){
            if(*it==new_string) break;
        }
        if(cache.size() < cacheSize){
            if(it==cache.end()){
                answer += 5;
            }else{
                cache.erase(it);
                answer += 1;
            }
        }else{
            if(it==cache.end()){
                cache.erase(cache.begin());
                answer += 5;
            }else{
                cache.erase(it);
                answer += 1;
            }
        }
        cache.push_back(new_string);
    }
    
    return answer;
}