#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char current = s[0];
    int count = 1;
    int maxCount = 1;
    for (int place = 1 ; place <= s.size() ; place++){
        if (s[place] == current){
            count++;
        }
        else{
            current = s[place];
            maxCount = max(maxCount, count);
            count = 1;
        }
    }
    cout << maxCount << endl;
    return 0;
}