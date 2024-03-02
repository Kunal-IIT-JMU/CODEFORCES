//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set <char> ss(s.begin(),s.end());
    if (ss.size() == 26){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
