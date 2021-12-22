#include<iostream>
using namespace std;

int main(){
	string str;
	int v=0,c=0;
	cout<<"Enter a string";
	getline(cin,str);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
		||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			v++;
		}
		else if((str[i]>='a' && str[i]<='z') || (str[i]>='A'&& str[i]<='Z')){
			c++;
		}
		
	}
	cout<<"Vowels no:"<<v<<endl;
		cout<<"consonet no:"<<c<<endl;
}
