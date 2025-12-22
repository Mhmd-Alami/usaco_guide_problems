#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("mowing.in","r",stdin);
	freopen("mowing.out","w",stdout);
	int n , t=0;
	int x=0 , y=0;
	cin >> n ;
	map<pair<int,int>,int> last;
	last[{0,0}] = 0;
	int answer = INT_MAX;
	for (int i=0; i<n; i++){
		char d ;
		int s ;
		cin >> d >> s ;
		int dy = 0;
		int dx = 0;
		if (d == 'N') dy = 1 ;
		if (d == 'S') dy = -1 ;
		if (d == 'W') dx = -1 ;
		if (d == 'E') dx = 1 ;
		
		for (int j=0 ; j<s ; j++){
			t++;
			x += dx;
			y += dy;
			pair<int , int> cell = {x,y};
			if (last.count(cell)){
				answer = min(answer, t - last[cell]);
			}
			last[cell] = t ;
			
		}
	}
	if (answer == INT_MAX){
		cout << -1 << '\n';
	}
	else {
		cout << answer << '\n' ;
	}

	
	return 0;
}