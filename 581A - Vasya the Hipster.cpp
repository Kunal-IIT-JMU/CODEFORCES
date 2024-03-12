//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,k;
    cin >> a >> b;
    if(a>b){
        k = b;
        cout << b << " ";
    }
    else{
        k =a;
        cout << a << " ";
    }
    if(k==b)
    cout << (a-k)/2;
    else
    cout << (b-k)/2;
    return 0;
}
