//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cin >> r;
    int sum = 0;
    int min = 0;
    for(int i =0; i<r; i++){
        int temp;
        cin >> temp;
        sum = sum + temp;
        if(sum < min && sum <0){
            min = sum;
        }
    }
    cout << abs(min);
    return 0;
}
