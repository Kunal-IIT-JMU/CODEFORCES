//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cin >> r;
    int max_s = INT_MIN;
    int min_s = INT_MAX;
    int ans = -2;
    for(int i =0; i<r; i++){
        int temp;
        cin >> temp;
        if(temp < min_s){
            min_s = temp;
            ans ++;
        }
        if(temp > max_s){
            max_s = temp;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
