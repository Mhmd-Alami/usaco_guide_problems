#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("shell.in", "r", stdin);
    int n;
    scanf("%d", &n);

    vector<int> position(3);
    for (int i = 0 ; i < 3 ; i++) {
        position[i] = i;
    }
    
    vector<int> count(3);
    
    for (int i = 0 ; i < n ; i++) {
        int a,b,g;
        scanf("%d %d %d", &a , &b , &g);
        a-- , b-- , g--;
        swap(position[a], position[b]);
        count[position[g]]++;
    }
	freopen("shell.out", "w", stdout);
    printf("%d\n", max(count[0],max( count[1], count[2])));
}