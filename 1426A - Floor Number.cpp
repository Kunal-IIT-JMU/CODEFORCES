//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        int count = 0;
        int n,x;
        cin >> n >>  x;
        int temp = n;
        while(n>0){
            if(n == temp){
                n = n-2;
                count ++;
            }
            else{
                n = n-x;
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
