#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, n, min, Y=0, M=0;
    vector<int> m;
    vector<int> t;

    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> n;
        t.push_back(n);
    }

    for(int i=0; i<N; i++) {
        Y += ((t[i]/30)+1) * 10;
        M += ((t[i]/60)+1) * 15;
    }
    
    if(Y < M)
        cout << "Y" << " " << Y << "\n";
    else if (Y == M)
        cout << "Y" << " " << "M" << " " << Y << "\n";
    else
        cout << "M" << " " << M << "\n";

    return 0;
}