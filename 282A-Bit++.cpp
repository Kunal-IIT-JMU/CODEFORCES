//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int ans = 0;
    for(int i =0; i<t; i++){
        string x;
        cin >> x;
        if(x == "++X"){
            ans = ans + 1;
        }
        if(x == "--X"){
            ans = ans - 1;
        }
        if(x == "X--"){
            ans = ans - 1;
        }
        if(x == "X++"){
            ans = ans + 1;
        }
    }
    cout  << ans;
    return 0;
}
