#include<iostream>
using namespace std;

int main(){
	string str;
	cout<<"Enter a string:"<<" ";
	getline(cin,str);
	int counter=0;
	
	for(int i=0;str[i]!='\0';i++){
		counter++;
	}
	cout<<counter;
}
