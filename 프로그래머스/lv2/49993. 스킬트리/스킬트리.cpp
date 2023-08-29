#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    int* isUsed = new int[skill.size()];
    bool correct = true;
    size_t found;
    
    // check each skill_tress
    for(auto st: skill_trees) {
        // initiallize to 0
        for(int i=0; i<skill.size(); i++)
            isUsed[i] = 0;
        // check each character in st
        correct = true;
        for(int i=0; i<st.size(); i++) {
            found = skill.find(st[i]);
            if(found != string::npos) {
                if(found == 0) isUsed[0]=1;
                else{
                    if(isUsed[found-1] != 1) {
                        correct = false;
                        break;
                    }
                    else {
                        isUsed[found] = 1;
                    }
                }
            }
            else continue;
        }
        if (correct) answer++;
    }
    
    return answer;
}