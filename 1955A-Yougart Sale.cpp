//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        int n,a,b;
        cin >> n >> a >> b;
        if(b<2*a){
            cout << (n/2)*b+(n%2)*a << endl;
        }
        else{
            cout << n*a << endl;
        }
    }
    return 0;
}
