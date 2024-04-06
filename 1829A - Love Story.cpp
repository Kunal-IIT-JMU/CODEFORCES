//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        int count =0;
        string k = "codeforces";
        string s;
        cin >> s;
        for(int j=0; j<10; j++){
            if(s[j]!=k[j]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
