#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, num, sum=0;

    cin >> N;

    vector<int> A;
    vector<int> B;

    for(int i=0; i<N; i++) {
        cin >> num;
        A.push_back(num);
    }
    for(int i=0; i<N; i++) {
        cin >> num;
        B.push_back(num);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    reverse(B.begin(), B.end());

    for(int i=0; i<N; i++) {
        sum += (A[i]*B[i]);
    }

    cout << sum << "\n";

    return 0;

}