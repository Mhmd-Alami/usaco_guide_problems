#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("lostcow.in","r",stdin);
	freopen("lostcow.out","w",stdout);
    int x, y;
    cin >> x >> y ;
    int n = abs(x-y);
    int pos = -1;
    int answer = 0;
    for (int i=10; i>=0 ; i--){
        if (n & (1 << i)){
            pos = i;
            break;
        }
    }
    // x <= pow(2,pos)
    if (((y-x)>=0 and pos % 2 == 0) or ((y-x)<0 and pos % 2 == 1)) { // ham jahat
        if (pow(2,pos) == n){
            answer = (pow(2,pos)-1)*2 + pow(2,pos);
        }
        else {
            answer = (pow(2,pos+2)-1)*2 + n;
        }
    }
    else {
        answer = (pow(2,pos+1)-1)*2 + n ;
    }
    cout << answer ;

	
	return 0;
}