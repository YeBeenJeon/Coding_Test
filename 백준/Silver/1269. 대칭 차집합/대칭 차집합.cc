#include <iostream>
#include <set>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, M, tmp;
    string a;
    set<int> A, B;

    cin >> N >> M;
    getline(cin, a);

    for(int i=0; i<N; i++){
        cin >> tmp;
        A.insert(tmp);
    }

    getline(cin, a);

    for(int i=0; i<M; i++) {
        cin >> tmp;
        B.insert(tmp);
    }

    set<int> dup(A);

    for(auto it = dup.begin(); it != dup.end(); ++it){
        if(B.find(*it) != B.end()) {
            A.erase(*it);
            B.erase(*it);
        }
    }

    cout << A.size()+B.size() << "\n";

    return 0;

}