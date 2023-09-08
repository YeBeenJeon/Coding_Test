#include <string>
#include <vector>

using namespace std;

/*
어떻게 하면 가장 큰 숫자를 구할까?
우선 size-k 자리 숫자를 구성할 수 있는 수 중, 앞자리가 제일 큰 수를 구하자
이거를 substr로 그 뒤 자리 수들로 반복하자.
*/

string solution(string number, int k) {
    string answer = "";
    
    int idx=0, max=0;
    int tmp = number.size()-k;
    
    while(tmp > 0) {
        max = 0;
        for(int i=idx; i<=number.size()-tmp; i++) {
            if(number[i] > max){
                max = number[i];
                idx = i;
            }
        }
        answer += number[idx];
        tmp--;
        idx++;
    }
        
    return answer;
}