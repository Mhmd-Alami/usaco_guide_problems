#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	freopen("cbarn.in","r",stdin);
	freopen("cbarn.out","w",stdout);
    int n ;
    cin >> n;
    vector<int> r(n);
    int c;
    int answer = 0;
    int min_answer = 0 ;
    for (int i=0 ; i<n ; i++){
        cin >> c ;
        if (i != 0){
            r[i] = r[i-1] + c;
            if (i <= n/2){
                answer += c*i ;
            }
            else if (i > n/2){
                answer += c*(n-i);
            }
        }
        else {
            r[i] = c;
        }
    }
    min_answer = answer;

    for (int i=1 ; i<n ; i++){
        if (i < n/2) {
            answer = answer - (r[i+(n/2)] - r[i]) + (r[n-1] - (r[i+(n/2)] - r[i])) ;
        }
        else {
            answer = answer + (r[i] - r[i-(n/2)]) - (r[n-1] - (r[i] - r[i-(n/2)])) ;
        }
        min_answer = min(answer, min_answer);
    }
    cout << min_answer ;
    
	return 0;
}