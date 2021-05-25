#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, i;
    scanf("%d\n%d", &a, &b);
    char manas[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int manas_index;
    for (i = a; i <= b; i++){
        manas_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", manas[manas_index]);
    }

return 0;
}