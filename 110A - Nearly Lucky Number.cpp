//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans =0;
    for(int i =0; i< s.length(); i++){
        if(s[i]=='4' || s[i] == '7'){
            ans ++;
        }
    }
    
    int ans2 =0;
    string ans1 = to_string(ans);
    for(int i =0; i< ans1.length(); i++){
        if(ans1[i]=='4' || ans1[i] == '7'){
            ans2++;
        }
    }
    if(ans2 == ans1.length()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}
