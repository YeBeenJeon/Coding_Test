#include <iostream>

using namespace std;

#define ll long long int

ll gcd(ll A, ll B) {

    ll R;

    if(A%B != 0) {
        R = gcd(B, A%B);
    }
    else 
        return B;

    return R;

}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    long long int A, B, R;

    cin >> A >> B;

    R = (A,B) ? gcd(A,B) : gcd(B,A);

    cout << (A*B)/R << "\n";
}