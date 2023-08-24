#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    int root = sqrt(n);
    bool res = true;

    if(n==0 || n==1) return false;
    if(n==2) return true;

    for(int i=2; i<=root; i++) {
        if(n%i == 0) {
            res = false;
            break;
        }
    }

    return res;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int M, N;

    cin >> M >> N;

    for(int i=M; i<=N; i++) {
        if(isPrime(i)==true){
            cout << i << "\n";
        }
    }

    return 0;
}