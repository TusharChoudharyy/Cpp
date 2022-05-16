#include<bits/stdc++.h>
using namespace std;
int main(){
	float km,m,cm,ft,inch;
	cout<<"Enter the distance in kilometers= "<<endl;
	cin>>km;
	m=1000*km;
	cm=m*100;
	inch=cm/2.54;
	ft=inch/12;
	cout<<"Distance in metres= "<<m<<endl;
	cout<<"distance in centimeters= "<<cm<<endl;
	cout<<"distance in feet= "<<ft<<endl;
	cout<<"distance in inches= "<<inch<<endl;
}
