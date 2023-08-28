#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {

    int N, command, n;
    stack<int> s;

    scanf("%d", &N);

    for(int i=0; i<N; i++) {

        scanf("%d", &command);

        switch (command)
        {
        case 1:
            scanf("%d", &n);
            s.push(n);
            break;
        case 2:
            cout << ((s.empty()) ? -1 : s.top()) << "\n";
            if(!s.empty()) s.pop();
            break;
        case 3:
            cout << s.size() << "\n";
            break;
        case 4:
            cout << ((s.empty()) ? 1 : 0) << "\n";
            break;
        case 5:
            cout << ((s.empty()) ? -1 : s.top()) << "\n";
            break;
        }
    }

}