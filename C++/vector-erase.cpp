#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n;
    cin >> n;
    int y;
    for (int i = 0; i < n; ++i){
        cin >> y;
        v.push_back(y);
    }
    int x;
    cin >> x;
    v.erase(v.begin() + (x - 1));
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    cout << v.size() << endl;
    for (auto d : v){
        cout << d << " ";
    }

    return 0;
}
