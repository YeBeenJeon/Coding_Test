#include <iostream>
#include <cmath>

#define Good 0
#define Bad 1


using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, e;
    float g, b, g_tmp;
    float g_g, g_b, b_g, b_b;

    cin >> N >> e;
    cin >> g_g >> g_b >> b_g >> b_b;

    if(e == Good) {
        g = g_g;
        b = g_b;
    } else {
        g = b_g;
        b = b_b;
    }

    for(int i=2; i<=N; i++) {
        g_tmp = g;
        g = (g*g_g)+(b*b_g);
        b = (g_tmp*g_b)+(b*b_b);
    }

    cout << round(g*1000) << "\n";
    cout << round(b*1000) << "\n";

    return 0;
}