#include<iostream>
using namespace std;
int main(){

int num;

cout<<"Enter a no to check if prime or not";
cin>>num;

if(num<1||num == 0 || num == 1){
	cout<<"Invalid no";
}
for(int i = 2;i<=num/2;i++){
	if(num%i == 0){
		cout<<"not prime";
		return 0;
	}
}
	cout<<"Prime no";

	return 0;

}
