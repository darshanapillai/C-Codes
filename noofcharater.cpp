#include<iostream>
using namespace std;

int main(){
	string str;
	char val;
	cout<<"Enter a string";
	getline(cin,str);
	cout<<"Enter a value to be searched for:";
	cin>>val;
	int counter=0;
	for(int i=0;i<str.length();i++){
			if(str[i]==val)
	counter++;
	}

	cout<<"The no of occurances are:"<<counter;
	}
