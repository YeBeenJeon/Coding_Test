#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, M, cnt=0;
    string a, str;

    cin >> N >> M;
    getline(cin, a);

    set<string> d;
    set<string> b;
    set<string> res;

    for(int i=0; i<N; i++){
        cin >> str;
        getline(cin, a);
        d.insert(str);
    }
    for(int i=0; i<M; i++){
        cin >> str;
        getline(cin, a);
        b.insert(str);
    }
    for(auto it=d.begin(); it!=d.end(); ++it) {
        if(b.find(*it) != b.end())
            res.insert(*it);
    }
    cout << res.size() << "\n";
    for(auto it=res.begin(); it!=res.end(); ++it){
        cout << *it << "\n";
    }

    return 0;
}