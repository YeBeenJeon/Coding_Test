#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, M, sum, max=0;
    int* nums = new int[N];

    cin >> N >> M;

    for(int i=0; i<N; i++) {
        cin >> nums[i];
    }

    for(int i=0; i<N-2; i++) {
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++) {
                sum = nums[i]+nums[j]+nums[k];
                if(sum > max && sum <= M)
                    max = sum;
            }
        }
    }

    cout << max << endl;

    return 0;
}