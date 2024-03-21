//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==b && a!=c){
            cout << c << endl;
        }
        if(a==c && a!=b){
            cout << b << endl;
        }
        if(c==b && c!=a){
            cout << a << endl;
        }
    }
    return 0;
}
