//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans =0;
    for(int i =5; i>=1; i--){
        while(n>=i){
            n = n-i;
            ans ++;
        }
    }
    cout << ans;
    return 0;
}
