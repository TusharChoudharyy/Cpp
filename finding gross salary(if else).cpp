#include <bits/stdc++.h>
using namespace std;
int main(){
    int da,hra,gs,bs;
    cout<<"enter the basic salary= "<<endl;
    cin>>bs;
    if(bs<1500){
        hra=bs*10/100;
        da=bs*90/100;
        cout<<hra;
    }
    else{
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    cout<<"gross salary=Rs "<<gs;
}
