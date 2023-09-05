#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

    int N = 5;
    int num;
    int sum = 0;

    for(int i=0; i<5; i++) {
        cin >> num;
        sum += (int)pow(num, 2);
    }

    cout << sum%10 << "\n";
    
}