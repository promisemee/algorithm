//베스트앨범
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool sort_songs(const pair<string,int> &a, const pair<string,int> &b){ 
    return (a.second > b.second); 
} 

int find_id(vector<int> plays, int play, int k){
    for(int i=0;i<plays.size();i++){
        if((plays[i] == play)&&(i!=k)){
            return i;}
    }
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    map<string, int> rankings;    //play per genre
    map<string, int>::iterator it;
    
    vector<pair<string, int>> rankings2;
    vector<pair<string, int>> genre_plays;
    vector<pair<string, int>>::iterator it2;
        
    for(int i=0;i<genres.size();i++){
        rankings[genres[i]] += plays[i];
        genre_plays.push_back(make_pair(genres[i], plays[i]));
    }
    
    for(it = rankings.begin();it!=rankings.end();it++){
        rankings2.push_back(make_pair(it->first, it->second));
    }
    
    sort(genre_plays.begin(), genre_plays.end(), sort_songs);
    sort(rankings2.begin(), rankings2.end(), sort_songs);
    
    for(int i=0;i<rankings2.size();i++){        //rankings2.size == 장르 수
        int tmp = -1; int j = 0;
        string genre = rankings2[i].first;    
        it2 = genre_plays.begin();
        
        for(int j = 0; j<2; j++){
            if (j!=0) it2++;
            for(;it2!=genre_plays.end();it2++){
               if (it2->first.compare(genre) == 0){
                    tmp = find_id(plays, it2->second, tmp);
                    answer.push_back(tmp);
                    break;
                }
            }
        }
    }
    
    return answer;
}