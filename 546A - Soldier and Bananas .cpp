//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int k,n,w;
    cin >> k >> n >> w;
    int price;
    
    for(int i =1; i<=w; i++){
        price = price + i*k;
    }
    int k1 = price - n;
    if(k1>=0)
    cout << k1;
    else{
        cout << 0;
    }
    return 0;
}
