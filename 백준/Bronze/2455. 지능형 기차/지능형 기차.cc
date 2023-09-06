#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int in, out, total=0, max=0;
    int station[4] = {0, };

    for(int i=0; i<4; i++) {
        cin >> out >> in;
        total -= out;
        total += in;
        station[i] = total;
    }

    for(int i=0; i<4; i++) {
        if(station[i] > max) max = station[i];
    }

    cout << max << "\n";

    return 0;

}