#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int A, B, C;
    string result;
    map<int, int> m;

    cin >> A >> B >> C;
    
    result = to_string(A*B*C);

    for(int i=0; i<result.size(); i++) {
        m[result[i]-'0']++;
    }

    for(int i=0; i<10; i++) {
        cout << m[i] << "\n";
    }

    return 0;
}