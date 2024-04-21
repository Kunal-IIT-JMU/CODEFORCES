//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n> 0){
        cout << n << endl;
    }
    else{
        int a;
        int b;
        a = n/10;
        b = (n/100)*10+(n%10);
        if(a<b){
            cout << b << endl;
        }
        else{
            cout << a << endl;
        }
    }
    return 0;
}
