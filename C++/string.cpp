#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a;
    cin >> b;
    int x = a.size();
    int y = b.size();
    cout << x << " " << y << endl;

    string c = a + b;
    cout << c << endl;

    char t = a[0];
    char t1 = b[0];
    b[0] = t;
    a[0] = t1;
    cout << a << " " << b;
    return 0;
}
