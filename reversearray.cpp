#include<iostream>
using namespace std;

int main(){
	
int n;
cout<<"Enter the size of array";
cin>>n;

int arr[n]; // declaring the array 

//adding elements into the array

for(int i=0;i<n;i++){
	cin>>arr[i];
	cout<<endl;
}	

//reversing the array
int s=0,e=n-1;
while(s<e){
	swap(arr[s],arr[e]);
	s++;
	e--;
}
	cout<<"The reversed array is:";
for(int i=0;i<n;i++){

	cout<<arr[i]<<" ";
}
}

