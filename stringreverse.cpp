#include<iostream>
using namespace std;

int main(){
	string str;
	cout<<"Enter a string"<<" ";
	getline(cin,str);
	
	cout<<"The original string is:"<<" "<<str;
	
	
	int s=0;
	int e=str.length()-1;
	
	while(s<e){
	
			swap(str[s],str[e]);
			s++;
			e--;
			cout<<endl;
			
	}
		cout<<"The reversed string is:";
		for(int i;i<str.length();i++)
	    cout<<str[i];
	
	
	
}
