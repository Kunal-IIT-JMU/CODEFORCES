//Kunal Sharma IIT JAMMU
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    int max,min;
    if(x1>=x2 and x1>=x3){
        max = x1;
    }
    else if(x2>=x1 and x2>=x3){
        max = x2;
    }
    else{
        max = x3;
    }
    
    if(x1<=x2 and x1<= x3){
        min = x1;
    }
    else if(x2<=x1 and x2<= x3){
        min = x2;
    }
    else{
        min = x3;
    }
    cout << max- min;
    return 0;
}
