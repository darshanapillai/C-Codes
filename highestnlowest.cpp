#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	
	int arr[n]; // declaring the array
	
	//inserting elemetns into array
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		cout<<endl;
	}
	
	int max = arr[0],min = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	cout<<"max is:"<<" "<<max<<endl;
		cout<<"min is:"<<" "<<min;
}
