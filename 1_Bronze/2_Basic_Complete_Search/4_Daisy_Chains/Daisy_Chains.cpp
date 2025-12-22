#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, summ=0, ave,ans =0;
    cin >> n ; 
    vector<int> p(n);
    for (int i=0 ; i<n ; i++){
        cin >> p[i];
    }
    for (int i=0 ; i<n ; i++){
        summ = 0;
        for (int j=i ; j<n ; j++){
            summ += p[j];
            if (summ % (j-i+1) !=0) continue;
            ave = summ / (j-i+1);
            for (int k=i ; k<=j ; k++){
                if (p[k] == ave){
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans;

	
	return 0;
}