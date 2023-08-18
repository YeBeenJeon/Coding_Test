#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, i=665, cnt=0;
    string tmp;

    cin >> N;

    while(cnt != N) {
        i++;
        tmp = to_string(i);
        if(tmp.find("666") != string::npos) cnt++;
    }

    cout << i << endl;
}