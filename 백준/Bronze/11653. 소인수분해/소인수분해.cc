#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, i;

    cin >> N;

    if(N == 1) return 0;

    for(i=2; N!=1; i++) {
        if(N % i == 0) {
            cout << i << endl;
            N = N/i;
            i=1;
        }
    }

    return 0;
}