#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int largest(int n, const vector<int>& arr){
	int max = INT_MIN;
	for(int i=0;i<n;i++){
		if(max<arr[i])
			max=arr[i];
	}
	return max;
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<largest(n,arr);
	return 0;
}
