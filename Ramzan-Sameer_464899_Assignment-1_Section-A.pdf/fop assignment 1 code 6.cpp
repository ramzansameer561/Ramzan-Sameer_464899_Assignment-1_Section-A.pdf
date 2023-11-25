#include<iostream>
using namespace std;
int main(){
	int divisor, dividend;
	
	cout<<"enter the dividend for the code: ";
	
	cin>> dividend;
	
	cout<<"enter the divisor for the code: ";
	
	cin>> divisor;
	
	if( dividend<divisor){cout<<"invalid input";
	return 1;}
	
	
	int quotient = 0;
	for (; dividend>=divisor; ++quotient){
		dividend= dividend - divisor;
		
	}
	cout<<"the quotient is: "<<quotient<<endl;
	cout<<"the remainder is: "<< dividend<<endl;
	return 0;
	
}

