#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int r;

    if(a%b != 0)
        r = gcd(b, a%b);
    else
        return b;
    
    return r;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int s1, s2, m1, m2, r1, r2, r;
    string a;

    cin >> s1 >> m1;
    getline(cin, a);
    cin >> s2 >> m2;
    getline(cin, a);

    r1 = (s1*m2)+(s2*m1);
    r2 = m1*m2;

    r = (r1<r2) ? gcd(r2, r1) : gcd(r1, r2);

    if(r!=1) {
        r1 /= r;
        r2 /= r;
    }

    cout << r1 << " " << r2 << "\n";

    return 0;

}