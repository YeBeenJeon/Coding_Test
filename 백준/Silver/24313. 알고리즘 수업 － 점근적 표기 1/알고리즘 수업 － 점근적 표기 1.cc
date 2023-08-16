#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int a1, a0, c, n0;
    bool satisfy = true;

    cin >> a1 >> a0 >> c >> n0;

    for(int i=n0; i<=100; i++) {
        if(a0 == 0) {
            if(a1>c) {
                satisfy = false;
                break;
            }
        }
        else if(c > a1) {
            if(i < ((a0)/(c-a1))) {
                satisfy = false;
                break;
            }
        }
        else if(c==a1) {
            if(a0>0) {
                satisfy = false;
                break;
            } 
        }
        else {
            if(i >= ((a0)/(c-a1))) {
                satisfy = false;
                break;
            }
        } 

    }
    
    cout << (satisfy==true) ? 1 : 0;
}