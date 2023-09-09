#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, tech;

    cin >> N;
    cin >> tech;

    if(N>5) {
        cout << "Love is open door" << "\n";
        return 0;
    }
    else {
        for(int i=1; i<N; i++) {
            tech = !tech;
            cout << tech << "\n";
        }
        return 0;
    }
}