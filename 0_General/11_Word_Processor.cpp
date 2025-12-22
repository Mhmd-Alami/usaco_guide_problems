#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("word.in","r",stdin);
    freopen("word.out","w",stdout);
    string s;
    int a, b, count = 0 ;
    cin >> a >> b ;
    for (int i = 0 ; i < a ; i++){
        cin >> s ;
        if (i == 0){
            cout << s ;
            count += s.length() ;
            continue ;
        }
        if (count + s.length() > b){
            cout << "\n" << s ;
            count = s.length() ;
        }
        else {
            count += s.length() ;
            cout << " " << s ;
        }
    }
    return 0;
}