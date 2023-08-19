#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, k;

    cin >> N >> k;

    vector<int> scores(N);

    for(int i=0; i<N; i++) {
        cin >> scores[i];
    }

    sort(scores.begin(), scores.end());
    
    cout << scores[N-k] << endl;

    return 0;
}