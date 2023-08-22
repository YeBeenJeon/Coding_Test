#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int n;
    string str, a;
    string t1, t2;
    set<string> s;

    cin >> n;
    getline(cin, a);

    for(int i=0; i<n; i++){
        getline(cin, str);
        t1 = str.substr(0, str.find(' '));
        t2 = str.substr(str.find(' ')+1, str.size()-1);
        if(t2 == "enter")
            s.insert(t1);
        else if(t2 == "leave")
            s.erase(t1);
    }

    for(auto iter = s.rbegin(); iter != s.rend(); iter++){
        cout << *iter << "\n";
    }
    return 0;

}