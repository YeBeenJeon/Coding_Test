#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int sum=0, avg, mid;

    vector<int> nums(5);

    for(int i=0; i<5; i++) {
        cin >> nums[i];
        sum += nums[i];
    }

    avg = sum/5;
    sort(nums.begin(), nums.end());
    mid = nums.at(2);

    cout << avg << endl;
    cout << mid << endl;
    
    return 0;
}