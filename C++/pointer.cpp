#include<bits/stdc++.h>
using namespace std;

void update(int *a, int *b){
    *a = *a + *b;
    *b = abs((*a) - 2 * (*b));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}