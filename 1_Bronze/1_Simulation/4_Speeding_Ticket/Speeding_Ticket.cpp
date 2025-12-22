#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("speeding.in","r",stdin);
	freopen("speeding.out","w",stdout);
    int n , m ;
    cin >> n >> m ;
    vector<vector<int>> road_list(n+1,vector<int>(2));
    vector<vector<int>> bessie_list(m+1,vector<int>(2));
    for (int i=0 ; i < n ; i++){ // road
        cin >> road_list[i][0] >> road_list[i][1];
    }
    for (int i=0 ; i < m ; i++){ // bessie
        cin >> bessie_list[i][0] >> bessie_list[i][1];
    }

    int place = 0;
    int loc_r=0, loc_b=0;
    int maxx = 0;
    for (int i=0 ; i < m+n ; i++){
        maxx = max(maxx, (bessie_list[loc_b][1]-road_list[loc_r][1]));
        if (i >= m+n-1){
            break;
        }
        if (bessie_list[loc_b][0] > road_list[loc_r][0]) {
            road_list[loc_r+1][0] += road_list[loc_r][0];
            loc_r++;
        }
        else if (bessie_list[loc_b][0] < road_list[loc_r][0]) {
            bessie_list[loc_b+1][0] += bessie_list[loc_b][0];
            loc_b++;
        } else {
            bessie_list[loc_b+1][0] += bessie_list[loc_b][0];
            road_list[loc_r+1][0] += road_list[loc_r][0];
            loc_b++;
            loc_r++;
            i++;
        }
    }
    cout << maxx;


    
	return 0;
}