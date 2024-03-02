//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    vector <int> levels;
    while(cin >> k){
        if(k != 0){
            levels.push_back(k);
        }
        else{
            break;
        }
    }
    set <int> soln(levels.begin(),levels.end());
    if(soln.size()==4){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
    return 0;
}
