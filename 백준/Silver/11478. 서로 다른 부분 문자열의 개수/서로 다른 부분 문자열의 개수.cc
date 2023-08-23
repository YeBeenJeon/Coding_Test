#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    string str;
    int size;
    set<string> strings;

    cin >> str;
    
    size = str.size();

    for(int i=1; i<=size; i++){
        for(int j=0; j<=size-i; j++){
            strings.insert(str.substr(j,i));
        }
    }

    cout << strings.size() << "\n";

    return 0;
}