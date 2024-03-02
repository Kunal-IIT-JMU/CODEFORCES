//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    int ans = 0;
    for(int i =0; i<r ; i++){
        string s;
        cin >> s;
        if(s == "Tetrahedron")
        ans = ans + 4;
        if(s == "Cube")
        ans = ans + 6;
        if(s == "Octahedron")
        ans = ans + 8;
        if(s == "Dodecahedron")
        ans = ans + 12;
        if(s == "Icosahedron")
        ans = ans + 20;
    }
    cout << ans << endl;
    return 0;
}
