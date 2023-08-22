#include <iostream>
#include <map>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, M;
    string str, a;
    map<string, int> str_int;
    map<int, string> int_str;

    cin >> N >> M;
    getline(cin, a);

    string* s = new string[M];

    for(int i=0; i<N; i++){
        cin >> str;
        getline(cin, a);
        str_int[str] = i+1;
        int_str[i+1] = str;
    }

    for(int i=0; i<M; i++){
        cin >> s[i];
        getline(cin, a);
    }

    for(int i=0; i<M; i++){
        auto search = str_int.find(s[i]); 
        if(search != str_int.end())
            cout << str_int[s[i]] << '\n';
        else
            cout << int_str[stoi(s[i])] << '\n';
    }

    return 0;

}