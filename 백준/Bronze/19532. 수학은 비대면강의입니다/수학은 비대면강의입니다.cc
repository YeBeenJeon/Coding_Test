#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int a,b,c,d,e,f,x,y,A,B,C;

    cin >> a >> b >> c >> d >> e >> f;

    for(int i = -999; i <= 999; i++) {
        for(int j = -999; j <= 999; j++) {
            if((a*i+b*j) == c) {
                if((d*i+e*j) == f) {
                    cout << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }

}