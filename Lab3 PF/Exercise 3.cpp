#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num1, num2;
	cout<<"Enter 1st Value : ";
	cin>>num1;
	cout<<"\nEnter 2nd Value : ";
	cin>>num2;
	cout<<setw(num1)<<num1<<" Slots";
	cout<<"\n"<<setw(num2)<<num2<<" Slots";
return 0;

}



