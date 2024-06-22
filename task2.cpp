#include<iostream>
using namespace std;
int main(){
	double n1,n2;
	char op;
	double result;
	
	cout<<"Enter first number:=";
	cin>>n1;
	cout<<"Enter an operator(+,-,*,/ ):";
	cin>>op;
	cout<<"Enter 2nd number:";
	cin>>n2;
	switch (op){
		case'+':
	             result=n1+n2;
	             cout<<"Result:"<<n1<<"+"<<n2<<"="<<result<<endl;
	             break;
	             
	             case'-':
	             result=n1-n2;
	             cout<<"Result:"<<n1<<"-"<<n2<<"="<<result<<endl;
	             break;
	
	             case'*':
	             result=n1*n2;
	             cout<<"Result:"<<n1<<"*"<<n2<<"="<<result<<endl;
	             break;
	             
	             case'/':
	             if(n2!=0){
	             	result=n1/n2;
	             	cout<<"Result:"<<n1<<"/"<<n2<<"="<<result<<endl;
	             }
	             else{
	             	cout<<"Error:Division by Zero is not allowed."<<endl;
	             }
	             break;
	             default:
	             	cout<<"Error:Invalid operator!!."<<endl;
	             	break;
	
	}
	return 0;
	
	
}
