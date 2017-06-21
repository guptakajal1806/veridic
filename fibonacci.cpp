#include<iostream>
#include<vector>
using namespace std;

vector<int> arr;

int fibonacci(int n){
	if(n<=1){
		arr[n]=n;
		return n;
	}
	return arr[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int n;
	cin>>n;
	arr.resize(n+1);
	fibonacci(n);
	for(int i=0;i<n+1;i++)
		cout<<arr[i]<<" ";
	
	return 0;
}
