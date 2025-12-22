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
    int total = 0;
    int answer = 0;
    int min_answer = 0 ;
    for (int i=0 ; i<n ; i++){
        cin >> r[i] ;
        total += r[i];
        answer += r[i]*i ;
    }
    min_answer = answer;

    for (int i=1 ; i<n ; i++){
        answer = answer - (total - r[i-1]) + (r[i-1]*(n-1));
        min_answer = min(answer, min_answer);
    }
    cout << min_answer ;
    
	return 0;
}