#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N,M, cnt=0;
    string str;
    set<string> str_set;

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> str;
        str_set.insert(str);
    }

    for(int i=0; i<M; i++) {
        cin >> str;
        if(str_set.find(str) != str_set.end())
            cnt++;
    }

    cout << cnt << "\n";

    return 0;

}