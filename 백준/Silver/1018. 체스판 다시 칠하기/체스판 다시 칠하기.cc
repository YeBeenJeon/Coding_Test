#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, M, i, j, k, l, change, min=64;
    char first;

    cin >> N >> M;

    char** board = new char*[N];
    for(i=0; i<N; i++) {
        board[i] = new char[M];
    }

    for(i=0; i<N; i++) {
        for(j=0; j<M; j++) {
            cin >> board[i][j];
        }
    }

    for(i=0; i<=N-8; i++) {
        for(j=0; j<=M-8; j++) {
            first = board[i][j];
            change = 0;
            for(k=0; k<8; k++) {
                for(l=0; l<8; l++) {
                    if(k%2==0 && l%2==0){
                        if(board[i+k][j+l]!=first) change++;
                    }
                    else if(k%2!=0 && l%2==0) {
                        if(board[i+k][j+l]==first) change++;
                    }
                    else if(k%2==0 && l%2!=0) {
                        if(board[i+k][j+l]==first) change++;
                    }
                    else {
                        if(board[i+k][j+l]!=first) change++;
                    }
                }
            }
            if(change < min) min = change;
        }
    }

    for(j=0; j<=M-8; j++) {
        for(i=N-1; i>=7; i--) {
            first = board[i][j];
            change = 0;
            for(k=0; k<8; k++) {
                for(l=0; l<8; l++) {
                    if(k%2==0 && l%2==0){
                        if(board[i-k][j+l]!=first) change++;
                    }
                    else if(k%2!=0 && l%2==0) {
                        if(board[i-k][j+l]==first) change++;
                    }
                    else if(k%2==0 && l%2!=0) {
                        if(board[i-k][j+l]==first) change++;
                    }
                    else {
                        if(board[i-k][j+l]!=first) change++;
                    }
                }
            }
            if(change < min) min = change;

            first = (board[i][j]=='W') ? 'B' : 'W';
            change = 0;
            for(k=0; k<8; k++) {
                for(l=0; l<8; l++) {
                    if(k%2==0 && l%2==0){
                        if(board[i-k][j+l]!=first) change++;
                    }
                    else if(k%2!=0 && l%2==0) {
                        if(board[i-k][j+l]==first) change++;
                    }
                    else if(k%2==0 && l%2!=0) {
                        if(board[i-k][j+l]==first) change++;
                    }
                    else {
                        if(board[i-k][j+l]!=first) change++;
                    }
                }
            }

            if(change < min) min = change;

        }
    }

    cout << min << endl;
}