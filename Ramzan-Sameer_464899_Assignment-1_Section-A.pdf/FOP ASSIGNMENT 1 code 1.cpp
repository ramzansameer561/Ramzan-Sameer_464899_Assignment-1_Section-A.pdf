#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"please enter the positive integer for finding its factors: ";
	cin>>num;
	for(int i = 1; i<=num; i++){
		if(num%i==0){
			cout<<i<<" ";
		}
		
	}return 0;
}
