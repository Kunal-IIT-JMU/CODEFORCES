//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int per = 1;
    int max = INT_MIN;
    for(int i = 0; i < s.length()-1 ; i++){
        if(s[i] == s[i+1]){
            per ++;
        }
        else{
            per = 1;
        }
        if(max <= per){
            max = per;
        }
    }
    if(max <7){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}
