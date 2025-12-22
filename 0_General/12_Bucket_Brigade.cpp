#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);
    char a[10][10];
    int r1, c1, r2, c2, r3, c3;
    for (int i = 0 ; i < 10 ; i++){
        for (int j = 0 ; j < 10 ; j++){
            cin >> a[i][j];
            if (a[i][j] == '.')
                continue ;
            if (a[i][j] == 'B'){
                r1 = i;
                c1 = j;
            }
            if (a[i][j] == 'L'){
                r2 = i;
                c2 = j;
            }
            if (a[i][j] == 'R'){
                r3 = i;
                c3 = j;
            }
        }
    }
    int ans = abs(r1 - r2) + abs(c1 - c2) - 1 ;
    if (c1 == c2 && c2 == c3 && ((r1 > r3 && r3 > r2) || (r2 > r3 && r3 > r1)))
        ans += 2 ;
    if (r1 == r2 && r2 == r3 && ((c1 > c3 && c3 > c2) || (c2 > c3 && c3 > c1)))
        ans += 2 ;
    cout << ans << "\n" ;
    return 0;

}