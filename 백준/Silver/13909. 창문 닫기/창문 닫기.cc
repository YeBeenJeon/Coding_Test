/*
창문이 열려있으려면 홀수번 닫았다가 열려야한다.
그러면 약수의 개수가 홀수 이어야 한다.
약수의 개수가 홀수인 것은 자기자신을 곱하는 수가 추가되는
제곱수인 것을 의미한다.
그래서 이 문제는 제곱수의 개수를 찾으면 되는 것이다...
*/
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int n, cnt;

    cin >> n;
    
    for(int i=1; i*i<=n; i++) {
        cnt++;
    }

    cout << cnt;
}