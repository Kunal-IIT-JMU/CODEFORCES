//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        int a,b;
        cin >> a >> b;
        if(a>b && a%b != 0){
            cout << b-(a % b) << endl;
        }
        if(a%b == 0){
            cout << 0 << endl;
        }
        if(b>a){
            cout << b-a << endl;
        }
    }
    return 0;
}
