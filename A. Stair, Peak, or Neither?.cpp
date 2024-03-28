//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    for(int i =0; i<r; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a<b && b<c){
            cout << "STAIR" << endl;
        }
        else if(a <b && b>c){
            cout << "PEAK" << endl;
        }
        else{
            cout << "NONE" << endl;
        }
    }
    return 0;
}
