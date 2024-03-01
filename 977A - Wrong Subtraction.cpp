//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    if(n<10){
        n = n - k;
    }
    else{
        while(k>0){
            if(n%10 == 0){
                n = n/10;
                k--;
            }
            else{
                n = n - 1;
                k--;
            }
        }
    }
    cout << n;
    return 0;
}
