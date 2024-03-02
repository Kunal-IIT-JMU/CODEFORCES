//Kunal Sharma IIT JAMMU
#include<iostream>
#include<set>
using namespace std;

int main ()
{
	int n, x, i,temp;
	cin>>n>>x;
	set<int> s;
	for(i =0; i < x; i++){
		cin >> temp;
		s.insert(temp);
	}
	cin >> x;
	for(i =0; i < x; i++){
		cin >> temp;
		s.insert(temp);
	}
	if(s.size() < n){
		cout << "Oh, my keyboard!\n";
	}
	else{
		cout << "I become the guy.\n";
	}
}
