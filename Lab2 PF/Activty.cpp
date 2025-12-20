#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter the Lowercase alphabet character : ";
	cin>>c;
	cout<<"The Uppercase of "<<c<<" is "<<char(c-32)<<"\n";
	system("pause");
	return 0;
}
