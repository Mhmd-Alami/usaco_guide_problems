#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int MAX_N = 50;
struct Intersection {
    int i, j, t_i, t_j, active;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> x(MAX_N), y(MAX_N), stop(MAX_N);
    vector<char> dir(MAX_N);
    vector<Intersection> I(MAX_N*MAX_N);
    int n ;
    cin >> n ;
    for (int i=0 ; i<n ; i++) cin >> dir[i] >> x[i] >> y[i] ;
    int cur = 0 ;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            if (dir[i] == dir[j]) continue;
            if (dir[i] == 'N'){
                if (y[i] > y[j] or x[i] < x[j] or x[i]+y[i] >= x[j]+y[j]) continue;
                I[cur] = Intersection {i, j, y[j]-y[i], x[i]-x[j], 1};
                cur++;
            }
            else {
                if (x[i] > x[j] or y[i] < y[j] or x[i]+y[i] >= x[j]+y[j]) continue;
                I[cur] = Intersection {i, j, x[j]-x[i], y[i]-y[j], 1};
                cur++;
            }
        }
    }

    while (true) {
        int first = -1;
        for (int i=0 ; i<cur ; i++){
            if (I[i].active and (first == -1 or I[i].t_i < I[first].t_i)) first = i;
        }
        if (first == -1) break;
        if (stop[I[first].i] == 0 and (stop[I[first].j] == 0 or stop[I[first].j] > I[first].t_j)){
            stop[I[first].i] = I[first].t_i ;
        }
        I[first].active = 0;
    }

    for (int i=0 ; i<n ; i++){
        if (stop[i] == 0) cout << "Infinity\n";
        else cout << stop[i] << '\n';
    }
    
	return 0;
}