#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    bool isCorrect = true;

    int* song = new int[8];
    int as[8] = {1,2,3,4,5,6,7,8};
    int de[8] = {8,7,6,5,4,3,2,1};

    for(int i=0; i<8; i++)
        scanf("%d", &song[i]);
    
    for(int i=0; i<8; i++) {
        if(song[i] != as[i]) {
            isCorrect = false;
            break;
        }
    }
    if(isCorrect) {
        cout << "ascending" << "\n";
        return 0;
    }
    isCorrect = true;
    for(int i=0; i<8; i++) {
        if(song[i] != de[i]) {
            isCorrect = false;
            break;
        }
    }
    if(isCorrect) {
        cout << "descending" << "\n";
        return 0;
    }

    cout << "mixed" << "\n";

    return 0;

}