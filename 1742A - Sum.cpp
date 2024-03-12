#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>> n;
    for(int h = 0; h<n; h++){
        int a,b,c;
        cin >> a >> b >> c;
        int M = a,k = 1;
        if(M<b){M=b;k =2;}
        if(M<c){M=c;k =3;}
        
        if(k==1 && M==b+c){
            cout << "YES" << endl;
            goto next;
        }
        if(k==2 && M==a+c){
            cout << "YES" << endl;
            goto next;
        }
        if(k==3 && M==b+a){
            cout << "YES" << endl;
            goto next;
        }
        else{
            cout << "NO" << endl;
            goto next;
        }
        next:
        ;
    }
    return 0;
}
