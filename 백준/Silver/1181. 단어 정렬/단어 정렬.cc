#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int myFunction(const string i, const string j) {

    if(i.size() == j.size()) {
        for(int idx=0; idx<i.size(); idx++) {
            if(i[idx]!=j[idx])
                return i[idx] < j[idx];
        }
    }

    return i.size() < j.size();
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N;
    vector<string> words;
    string word;

    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> word;
        if(count(words.begin(), words.end(), word)==0)
            words.push_back(word);
    }
    
    sort(words.begin(), words.end(), myFunction);

    for(auto word:words){
        cout << word << "\n";
    }

    return 0;
}