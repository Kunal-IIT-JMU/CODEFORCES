//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m = 0;
    int c = 0;
    cin >> n; 
    for(int i =0; i<n; i++){
        int a;
        int b;
        cin >> a >> b;
        if(a>b){
            m++;
        }
        else if(a==b){
            continue;
        }
        else{
            c++;
        }
    }
    if(m>c){
        cout << "Mishka";
    }
    else if(m==c){
        cout << "Friendship is magic!^^";
    }
    else{
        cout << "Chris";
    }
    return 0;
}
