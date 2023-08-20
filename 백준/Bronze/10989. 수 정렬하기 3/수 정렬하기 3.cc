#include <iostream>
#include <memory.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, i, input;

    cin >> N;

    int* tmp = new int[10001];

    memset(tmp, 0, 10001 * sizeof(int));

    for(i=1; i<=N; i++) {
        cin >> input;
        tmp[input]++;
    }

    for(i=0; i<10001; i++) {
        if(tmp[i]!=0){
            for(int j=0; j<tmp[i]; j++)
                cout << i << "\n";
        }
    }

    return 0;
}