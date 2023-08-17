#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, sum=0, res=0, tmp;

    cin >> N;

    for(int i=1; i<N; i++) {

        sum = 0;
        tmp = i;

        do {
            sum+=tmp%10;
            tmp /= 10;
        }while(tmp!=0);

        sum += i;
        if(sum == N) {
            res = i;
            break;
        }
    }

    cout << res << endl;
}