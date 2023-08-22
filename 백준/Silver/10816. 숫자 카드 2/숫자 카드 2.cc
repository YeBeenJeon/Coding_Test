#include <iostream>
#include <map>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, M, tmp;
    map<int, int> cards;
    string a;

    cin >> N;
    getline(cin, a);

    for(int i=0; i<N; i++){
        cin >> tmp;
        if(cards.find(tmp) != cards.end())
            cards[tmp]++;
        else
            cards[tmp] = 1;
    }

    getline(cin, a);
    cin >> M;
    getline(cin, a);
    int* arr = new int[M];

    for(int i=0; i<M; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<M; i++) {
        cout << cards[arr[i]] << " ";
    }

    return 0;

}