//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>
using namespace std;

int main(){
    int amount, coin;
    cin >> amount >> coin;
    int temp = amount;
    int count  = 1;
    while((amount*count%10) != coin && amount*count%10 != 0){
        count ++;
        if(amount*count%10 == 0){
            break;
        }
    }
    cout << count;
    return 0;
}
