/*
최소공배수를 구할 때 단순히 Broute Force로 일일이 확인하면 시간 초과가 난다.!
해결법 -> 유클리드 호제법

유클리드 호제법이란?
2개의 자연수 a, b(a>b)에 대해서 a를 b로 나눈 나머지가 r일 때,
a와 b의 최대공약수는 b와 r의 최대공약수와 같다.

LCM = a*b / GCD
*/
#include <iostream>

using namespace std;

int gcd(int a, int b){

    int r;

    if(a%b != 0)
        r = gcd(b, a%b);
    else
        return b;
        
    return r;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int T, A, B, r, lcm;
    string a;

    cin >> T;
    getline(cin, a);

    for(int i=0; i<T; i++){
        cin >> A >> B;
        getline(cin, a);

        r = (A>B) ? gcd(A,B) : gcd(A,B);
        lcm = (A*B)/r;

        cout << lcm << "\n";

    }

    return 0;
}