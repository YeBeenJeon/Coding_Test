#include <string>
#include <vector>

#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

bool f(const pair<int, float> a, const pair<int, float> b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    int* arrival_cnt = new int[N+2];
    int* clear_cnt = new int[N+1];
    
    vector<pair<int, float>> fail;
    
    for(int i=1; i<N+2; i++) {
        arrival_cnt[i] = 0;
    }
    for(int i=1; i<N+1; i++) {
        clear_cnt[i] = 0;
    }
    
    for(int i=0; i<stages.size(); i++) {
        arrival_cnt[stages[i]]++;
    }
    
    for(int i=0; i<stages.size(); i++) {
        for(int j=1; j<=stages[i]; j++) {
            clear_cnt[j]++;
        }
    }
    
    for(int i=1; i<=N; i++) {
        float failure;
        failure = (arrival_cnt[i] == 0) ? 0 : (float)arrival_cnt[i]/(float)clear_cnt[i];
        fail.push_back(pair<int, float>(i, failure));
    }
    
    sort(fail.begin(), fail.end(), f);
        
    for(auto it = fail.begin(); it != fail.end(); ++it){
        answer.push_back(it->first);
    }
    
    return answer;
}