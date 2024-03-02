//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    bool flag = false;
    cin >> n >> t;
    int timeleft = 240-t;
    for(int i =1; i<n+1; i++){
        timeleft = timeleft - 5*i;
        if(timeleft<0){
            cout << i-1;
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout << n;
    }
    return 0;
}
