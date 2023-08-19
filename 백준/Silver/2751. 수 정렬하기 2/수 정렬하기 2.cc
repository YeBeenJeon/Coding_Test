#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, t;
    string a;
    vector<int> nums;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> t;
        nums.push_back(t);
    }
        
    sort(nums.begin(), nums.end());

    for(int i: nums)
        cout << i << "\n";

    return 0;

}