#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(b>a)
		swap(a,b);
	if(b==0)
		return a;
	return gcd(a%b,b);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<"gcd of "<<a<<" and "<<b<<" is:"<<gcd(a,b);
	return 0;
}
