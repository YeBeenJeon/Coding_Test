#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, i, j, res=0;
    bool isPrime = true;

    cin >> N;

    int* nums = new int[N];

    for(i=0; i<N; i++) cin >> nums[i];

    for(i=0; i<N; i++) {
        if(nums[i] == 1) continue;
        isPrime = true;
        for(j=1; j<=nums[i]; j++){
            if(nums[i]%j == 0) {
                if(j!=1 && j!=nums[i]){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime==true) res++;
    }

    cout << res << endl;

}