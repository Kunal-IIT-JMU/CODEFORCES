//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

void count(int n){
    int ans =0;
    while(n>0){
        if(n%10 != 0){
            ans++;
        }
        n = n/10;
    }
    cout << ans << endl;
}

int main(){
    int r;
    cin >> r;
    for(int i =0; i<r; i++){
        int n;
        cin >> n;
        int k = 1;
        count(n);
        while(n>0){
            if((n % 10)*k != 0)
            cout << (n % 10)*k << " ";
            n = n/10;
            k = k*10;
        }
        cout << endl;
    }
    return 0;
}
