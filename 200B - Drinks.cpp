//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    double ans;
    for(int i=0; i<r; i++){
        int k;
        cin >> k;
        ans = ans + k;
    }
    ans = ans/r;
    cout << setprecision(14) << ans;
    return 0;
}
