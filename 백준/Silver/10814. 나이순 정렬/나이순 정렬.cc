#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct member {
    int age;
    string name;
    int idx;
};

int myFunction(const struct member a, const struct member b) {

    if(a.age == b.age)
        return a.idx <b.idx;

    return a.age < b.age;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int N, age, idx;
    string name;
    vector<struct member> members;
    member a;
    
    cin >> N;

    for(idx=0; idx<N; idx++) {
        cin >> age >> name;
        a.age = age;
        a.name = name;
        a.idx = idx;
        members.push_back(a);
    }

    sort(members.begin(), members.end(), myFunction);

    for(auto m : members) {
        cout << m.age << " " << m.name << "\n";
    }

    return 0;
}