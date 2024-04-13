//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int m, v;
    m = max(3*a/10,a-a*c/250);
    v = max(3*b/10,b-b*d/250);
    if(m<v){
        cout << "Vasya" << endl;
    }
    else if(m>v){
        cout << "Misha" << endl;
    }
    else{
        cout << "Tie" << endl;
    }
    return 0;
}
