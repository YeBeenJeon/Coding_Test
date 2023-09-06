#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, cnt, sum=0;
    vector<int> plugs;
    
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> cnt;
        plugs.push_back(cnt);
    }

    sort(plugs.begin(), plugs.end());
    reverse(plugs.begin(), plugs.end());

    for(int i=0; i<N; i++) {
        if(i!=N-1) sum += plugs[i]-1;
        else sum += plugs[i];
    }

    cout << sum << "\n";

    return 0;
    
}