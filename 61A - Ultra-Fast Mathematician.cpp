//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2,ans;
    cin >> s1 >> s2;
    for(int i =0; i< s1.length(); i++){
        if(s1[i] == s2[i]){
            ans = ans + '0';
        }
        else{
            ans = ans + '1';
        }
    }
    cout << ans;
    return 0;
}
