//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,r;
    double x;
    cin>>n;

    if(n%2==0)
        cout<<n/2<<endl;
    else{
    x=(double)n/2;
    r=ceil(x);
    cout<<(r*(-1))<<endl;
    }
}
