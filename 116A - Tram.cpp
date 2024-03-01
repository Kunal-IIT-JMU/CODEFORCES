//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    
    int pass = 0;
    int max_pass = INT_MIN;
    for(int i = 0; i<r; i++){
        int a;
        int b;
        cin >> a >> b;
        pass = pass + b -a;
        if(max_pass < pass ){
            max_pass = pass;
        }
    }
    cout << max_pass;
    return 0;
}
