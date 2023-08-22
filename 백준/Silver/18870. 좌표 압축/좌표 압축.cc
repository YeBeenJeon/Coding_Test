#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, i, k;

    cin >> N;
    
    vector<int> v;
    vector<int> v1;
    
    for(i=0; i<N; i++){
        cin >> k;
        v.push_back(k);
        v1.push_back(k);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(i=0; i<N; i++)
        cout << lower_bound(v.begin(), v.end(), v1[i]) - v.begin() << " ";

    return 0;
}