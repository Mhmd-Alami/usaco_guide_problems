#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("circlecross.in","r",stdin);
	freopen("circlecross.out","w",stdout);
    char c;
    int ans =0;
    vector<vector<int>> circle(26, vector<int> (2, -1));
    for (int i=0 ; i<52 ; i++){
        cin >> c;
        if(circle[c-'A'][0] == -1){
            circle[c-'A'][0] = i;
        }
        else {
            circle[c-'A'][1] = i;
        }
    }
    for (int i=0 ; i<26 ; i++){
        for (int j=i+1 ; j<26 ; j++){
            if ((circle[i][0]<circle[j][0] and circle[i][1]<circle[j][1] and circle[j][0]<circle[i][1]) or (circle[i][0]>circle[j][0] and circle[i][1]>circle[j][1] and circle[j][1]>circle[i][0])) ans++;
        }
    }
    cout << ans;
	
	return 0;
}