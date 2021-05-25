#include <bits/stdc++.h>
#include <vector>
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
    int q;
    cin >> q;
    while (q--){
        int y;
        cin >> y;
        vector<int>::iterator it = lower_bound(v.begin(), v.end(), y);
        int a = *it;
        
        if (a == y){
            cout << "Yes " << it - v.begin() + 1 << endl;
        }
        else{
            cout << "No " << it - v.begin() + 1 << endl;
        }
    }
    return 0;
}
