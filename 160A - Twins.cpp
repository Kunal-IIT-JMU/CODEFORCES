//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    int y_sum = 0;
    
    vector <int> coins;

    for(int i =0; i<n; i++){
        int k;
        cin >> k;
        sum = sum +  k;
        coins.push_back(k);
    }
    
    sort(coins.begin(),coins.end());
    reverse(coins.begin(),coins.end());
    
    for(int i = 0 ; i < coins.size(); i++){
        count = count + 1;
        y_sum = y_sum + coins[i];
        if(sum < 2 * y_sum){
            break;
        }
    }
    
    cout << count << endl;
    return 0;
}
