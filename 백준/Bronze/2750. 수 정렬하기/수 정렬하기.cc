#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

    int n,t,i;
    string a;
    vector<int> v;

    cin >> n;
    getline(cin, a);

    for(i=0; i<n; i++){
        cin >> t;
        getline(cin, a);
        v.push_back(t);
    }
    sort(v.begin(), v.end());

    for(int i : v)
        cout << i << endl;

    return 0;
}