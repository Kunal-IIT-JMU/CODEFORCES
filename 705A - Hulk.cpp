//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string ans;
    for(int i =1; i<=n; i++){
        if(i != 1){
            ans = ans + " that ";
        }
        if(i%2 != 0){
            ans = ans + "I hate";
        }
        else{
            ans = ans + "I love";
        }
    }
    ans = ans + " it";
    cout << ans;
    return 0;
}
