#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N;
    vector<int> nums;

    cin >> N;

    while(N!=0) {
        nums.push_back(N%10);
        N /= 10;
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    for(int i: nums)
        cout << i;
    
    return 0;
}