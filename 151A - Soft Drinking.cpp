//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int x = k*l;
    int a1 = x/nl;
    int a2 = d*c;
    int a3 = p/np;
    int min1 = a1;
    if(min1>a2){
        min1 = a2;
    }
    if(min1>a3){
        min1 = a3;
    }
    cout << min1/n;
    return 0;
}
