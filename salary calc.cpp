#include<bits/stdc++.h>
using namespace std;
int main(){
    float bs;
	float da;
	float grp;
	float hra;
	//bs=basic salary,da= dearness allowance,hra= housing rent allowanace,grpay=gross salary
	cout<<"enter basic salary of ramesh= "<<endl;
	cin>>bs;
	da=0.4*bs;
	hra=0.2*bs;
	grp=bs+da+hra;
	cout<<"basic salary of ramesh= "<<bs<<endl;
	cout<<"dearness allowance= "<<da<<endl;
	cout<<"house rent allowance= "<<hra<<endl;
	cout<<"gross pay of ramesh is= "<<grp<<endl;
	
}
