#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, res=0, cnt_five=0, cnt_th=0, tmp;

    cin >> N;

    tmp = N;

    while(true) {

        if(tmp%5 == 0){
            cnt_five = tmp/5;
            res = cnt_five + cnt_th;
            break;
        }
        if(tmp==0) {
            res = cnt_th;
            break;
        }
        else if(tmp < 0) {
            res = -1;
            break;
        }
        
        tmp -= 3;
        cnt_th++;

    }

    cout << res << endl;

    return 0;

}