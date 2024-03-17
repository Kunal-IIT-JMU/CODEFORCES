//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    if(islower(a[0])){
        a[0] = char(int(a[0]) - 32);
    }
    cout << a;
    return 0;
}
