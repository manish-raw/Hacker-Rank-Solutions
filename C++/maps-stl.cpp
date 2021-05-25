#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int type, q;
    string name;
    cin >> q;
    map<string, int> m;
    for (int i = 0; i < q; ++i){
        int mark;
        cin >> type >> name;
        switch (type){
        case 1:
            cin >> mark;
            m[name] += mark;
            break;
        case 2:
            m.erase(name);
            break;
        case 3:
            cout << m[name] << "\n";
            break;
        }
    }
    return 0;
}
