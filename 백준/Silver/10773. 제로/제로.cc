#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int K, n, sum=0;
    stack<int> st;

    scanf("%d", &K);

    for(int i=0; i<K; i++) {
        scanf("%d", &n);
        if(n==0)
            st.pop();
        else
            st.push(n);
    }

    while(!st.empty()){
        sum += st.top();
        st.pop();
    }

    cout << sum << "\n";

    return 0;

}