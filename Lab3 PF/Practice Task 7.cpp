#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int pf, ict , oop ,maths , english ,cms , total , avrg ;
	float percent;
    cout<<"Enter Your PF Marks : ";
	cin>>pf;
	cout<<"\nEnter Your ICT Marks : ";
	cin>>ict;
	cout<<"\nEnter Your OOP Marks : ";
	cin>>oop;  
	cout<<"\nEnter Your Maths Marks : ";
	cin>>maths;
	cout<<"\nEnter Your Englsih Marks : ";
	cin>>english;
	cout<<"\n\n";
	total = pf + ict + maths + english + oop;
    avrg = ( pf + ict + maths + english + oop)/5;
    percent = (total/500.0)*100;
    
	cout<<setfill('*')<<setw(120)<<"*";
	cout<<"\n*"<<setfill(' ')<<setw(119)<<"*";
	cout<<"\n*"<<setw(60)<<"MARKSHEET"<<setfill(' ')<<setw(59)<<"*";
	cout<<"\n*"<<setfill(' ')<<setw(120)<<"*\n";
	cout<<setfill('*')<<setw(120)<<"*"<<endl;
	cout<<"* Student Name "<<":"<<" Abdul Wasio"<<setfill(' ')<<setw(93)<<"*\n";
	cout<<"* CMS ID "<<":"<<"023-25-0007"<<setfill(' ')<<setw(100)<<"*\n";
	cout<<setfill('*')<<setw(120)<<"*";
	cout<<setfill(' ')<<"\n*"<<setw(15)<<"SUBJECT"
	   <<setw(30)<<"MIN MARKS"
	   <<setw(30)<<"OBT MARKS"
	   <<setw(30)<<"PERCENT"<<setw(15)<<"*\n";
	cout<<setfill('*')<<setw(120)<<"*";
	cout<<"\n*"<<setfill(' ')<<setw(10)<<"PF"<<setw(31)<<"33"<<setw(31)<<pf<<setw(31)<<pf<<"%"<<setw(15)<<"*";
	cout<<"\n*"<<setfill(' ')<<setw(10)<<"ICT"<<setw(31)<<"33"<<setw(31)<<ict<<setw(31)<<ict<<"%"<<setw(15)<<"*";
	cout<<"\n*"<<setfill(' ')<<setw(10)<<"OOP"<<setw(31)<<"33"<<setw(31)<<oop<<setw(31)<<oop<<"%"<<setw(15)<<"*";
	cout<<"\n*"<<setfill(' ')<<setw(10)<<"ENGLISH"<<setw(31)<<"33"<<setw(31)<<english<<setw(31)<<english<<"%"<<setw(15)<<"*";
	cout<<"\n*"<<setfill(' ')<<setw(10)<<"MATHS"<<setw(31)<<"33"<<setw(31)<<maths<<setw(31)<<maths<<"%"<<setw(16)<<"*\n";
    cout<<setfill('*')<<setw(119)<<"*"<<"*";
    cout<<"\n*"<<setfill(' ')<<setw(30)<<"TOTAL OBT: MARKS : "<<total<<setw(25)<<"AVRG: MARKS : "<<avrg<<setw(25)<<"PERCENTAGE : "<<percent<<"%"<<setw(30)<<"*\n";
    cout<<setfill('*')<<setw(119)<<"*"<<"*\n";
    

	
return 0;

}



