#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int p_cnt=0, y_cnt=0;    
    for(size_t i=0; i<s.size(); ++i){
        s[i] = toupper(s[i]);
    }
    
    for(auto c : s) {
        if(c == 'P') p_cnt++;
        else if(c == 'Y') y_cnt++;
    }
        
    if(p_cnt!=y_cnt) answer = false; 

    return answer;
}