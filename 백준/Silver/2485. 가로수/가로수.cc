#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(a%b==0) return b;
    else return gcd(b, a%b);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, g, cnt=0;
    cin >> N;
    int* dis = new int[N];
    int* trees = new int [N];

    for(int i=0; i<N; i++) {
        cin >>  trees[i];
    }
    for(int i=1; i<N; i++) {
        dis[i] = trees[i]-trees[i-1];
    }
    g = dis[1];
    for(int i=2; i<N; i++){
        g = gcd(dis[i], g);
    }
    for(int i=1; i<N; i++){
        cnt += (dis[i]/g)-1;
    }

    cout << cnt << "\n";

    return 0;
    
}