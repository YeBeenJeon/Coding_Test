#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if(n==0 || n==1) return false;
    if(n==2) return true;

    bool res=true;
    int root = sqrt(n);

    for(int i=2; i<=root; i++) {
        if(n%i==0) {
            res = false;
            break;
        }
    }
    return res;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int t, cnt, i;
    vector<int> nums;

    while(true) {
        cin >> t;
        if(t==0) break;
        nums.push_back(t);
    }

    for(auto j: nums) {

        cnt = 0;

        for(i=j+1; i<=2*j; i++){
            if(isPrime(i)==true) cnt++;
        }

        cout << cnt << "\n";
    }

    
}