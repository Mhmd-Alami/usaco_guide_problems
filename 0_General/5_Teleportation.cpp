#include <bits/stdc++.h>

using namespace std;

int main () {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int a, b, x, y, min_dist;
    cin >> a >> b >> x >> y ;
    min_dist = min(abs(a - b), min(abs(a-x)+abs(b-y), abs(b-x)+abs(a-y)));
    cout << min_dist << endl;
    return 0;
}