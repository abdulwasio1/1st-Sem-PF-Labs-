#include<iostream>
using namespace std;
int main(){
	float ict,math,eng,total;
	ict=77.5;
	math=54.1;
	eng=78.7;
    total = ict + math +eng;
    cout<<"\t\tMARKSHEET\n";
	cout<<"Ayaz ICT score out of 100\t:\t"<<ict;
	cout<<"\nAyaz MATH score out of 100\t:\t"<<math;
	cout<<"\nAyaz ENGLISH score out of 100\t:\t"<<eng;
	cout<<"\nObtained Marks out of 300\t:\t"<<total<<"\n";
	system("pause");
	return 0;
}

