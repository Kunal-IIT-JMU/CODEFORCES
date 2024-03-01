//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    vector <string> mag;
    for(int i=0; i<r; i++){
        string s;
        cin >> s;
        mag.push_back(s);
    }
    int ans =0;
    for(int i =0; i<r-1; i++){
        if(mag[i] != mag[i+ 1]){
            ans++;
        }
    }
    cout << ans + 1;
    return 0;
}
