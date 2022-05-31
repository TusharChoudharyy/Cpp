#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Multiplication table"<<endl;
    cin>>m;
    int i=1;
    do{
       cout<<m<<" * "<<i<<" = "<<m*i<<endl;
     i++;
    }
    while(i<=10);     
}

