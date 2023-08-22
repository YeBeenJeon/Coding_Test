#include <iostream>
#include <set>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, M, i, k, res;

    cin >> N;

    set<int> s;

    for(i=0; i<N; i++){
        cin >> k;
        s.insert(k);
    }

    cin >> M;
    int* cards = new int[M];

    for(i=0; i<M; i++){
        cin >> cards[i];
    }

    for(i=0; i<M; i++){
        res = (s.find(cards[i]) != s.end()) ? 1 : 0;
        cout << res << " ";
    }
}