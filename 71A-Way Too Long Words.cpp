//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    for(int i =0; i<r ; i++){
        string s;
        cin >> s;
        int count  = s.length();
        
        if(count > 10){
            cout << s[0] << count-2 << s[count-1] << endl;
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}
