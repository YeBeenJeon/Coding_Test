#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int T, i, j, cnt, max=0;
    
    cin >> T;
    int* nums = new int[T];
    set<int> primes;

    // 입력받기, 최대값 찾기
    for(i=0; i<T; i++) {
        cin >> nums[i];
        if(nums[i] > max) max = nums[i];
    }
    // 최대값까지의 소수 구하기
    for(i=2; i<=max; i++) {
        bool res = true;
        int root = sqrt(i);
        for(int j=2; j<=root; j++) {
            if(i%j == 0) {
                res = false;
                break;
            }
        }
        if(res) primes.insert(i);
    }
    // 구한 소수들로 합 구하기
    for(i=0; i<T; i++){
        cnt = 0;
        for(auto it=primes.begin(); *it<=nums[i]/2; ++it){
            if(primes.find(nums[i]-*it) != primes.end()) cnt++;
        }
        cout << cnt << "\n";
    }

}