#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int left = min(a, c);
    int right = max(b, d);
    if (b <= c || d <= a){
        cout << (b - a) + (d - c);
    }
    else {
        cout << right - left;
    }
    return 0;
}