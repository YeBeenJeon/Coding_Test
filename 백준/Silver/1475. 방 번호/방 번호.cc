#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    string room_num;
    int c;
    float max = 0.0;
    float numCnt[9] = {0, };

    cin >> room_num;

    for(int i=0; i<room_num.size(); i++) {
        c = room_num[i] - '0';
        if(c == 6 || c == 9) {
            numCnt[6] += 0.5;
        }
        else {
            numCnt[c]++;
        }
    }
    for(int i=0; i<9; i++) {
        if(numCnt[i] > max) max = (float)numCnt[i];
    }

    if(max > (int)max) max += 0.5;

    cout << max << "\n";

    return 0;

}