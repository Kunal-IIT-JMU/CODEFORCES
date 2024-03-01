//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    int ans = 0;
    for(int i =0; i<r; i++){
        int a,b;
        cin >> a >> b;
        if(a+2<b){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
