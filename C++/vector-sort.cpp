#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (auto y : v){
        cout << y << " ";
    }

    return 0;
}