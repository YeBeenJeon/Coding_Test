#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int myFunction(const pair<int, int> &i, const pair<int, int> &j){
    if(i.second == j.second) return i.first < j.first;
    return i.second < j.second;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    vector< pair<int,int> > dots;

    int N, x, y;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> x >> y;
        dots.push_back(make_pair(x, y));
    }

    sort(dots.begin(), dots.end(), myFunction);

    for(auto dot : dots) {
        cout << dot.first << " " << dot.second << '\n';
    }

    return 0;

}