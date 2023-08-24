#include <iostream>
#include <cmath>

using namespace std;

#define ll long long int

bool isPrime(ll num) {
    bool res = true;
    ll root = sqrt(num);

    if(num==2) return res;
    if(num==0 || num==1) return false;

    for(ll i=2; i<=root; i++){
        if(num%i==0) {
            res=false;
            break;
        }
    }

    return res;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    ll N;

    cin >> N;
    ll* nums = new ll[N];

    for(ll i=0; i<N; i++) {
        cin >> nums[i];
    }
    for(ll i=0; i<N; i++) {
        while(true) {
            if(isPrime(nums[i])){
                cout << nums[i] << "\n";
                break;
            }
            else nums[i]++;
        }
    }
    return 0;
}