//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    for(int i =0; i < s.length(); i++){
        if(s[i]=='.'){
            ans = ans + to_string(0);
        }
        else if(s[i]=='-' && s[i+1] == '.'){
            i++;
            ans = ans + to_string(1);
        }
        else if(s[i]=='-' && s[i+1] == '-'){
            i++;
            ans = ans + to_string(2);
        }
    }
    cout << ans;
    return 0;
}
