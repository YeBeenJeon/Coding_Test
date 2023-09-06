#include <string>
#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end());
    reverse(people.begin(), people.end());
    
    auto i = people.begin();
    auto j = people.end();
    j--;
    
    while(true) {
        if(i==j) {
            answer++;
            break;
        }
        else if(i>j) break;
        if(*i+*j > limit) {
            answer++;
            ++i;
        }
        else {
            ++i;
            --j;
            answer++;
        }
    }
    
    return answer;
}