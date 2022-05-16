#include <bits/stdc++.h>
using namespace std;
int main(){
float a,b,c,area,s;
cout<<"a=side1,b=side2,c=side3,A=Area,s=semi perimeter"<<endl;
cout<<"to find area of triangle by herons formula: A= sqrt(s(s-a)(s-b)(s-c))"<<endl;
cout<<"Enter sides of triangle: "<<endl;
cin>>a;
cin>>b;
cin>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"area of triangle= ";
cout<<area;
}
