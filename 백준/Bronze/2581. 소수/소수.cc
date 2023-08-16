#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int M, N, i, j, sum=0, min=0;
    vector<int> prime;
    bool isPrime = true;

    cin >> M >> N;

    for(i=M; i<=N; i++) {
        isPrime = true;
        if(i==1) continue;
        for(j=1; j<=i; j++) {
            if(i%j == 0)
                if(j!=1 && j!=i) {
                    isPrime = false;
                    break;
                }
        }
        if(isPrime) {
            if(min==0) min = i;
            sum += i;
        }
    }

    if(sum==0) cout << -1 << endl;
    else cout << sum << endl << min << endl;

}