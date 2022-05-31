#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Multiplication table"<<endl;
    cin>>m;
    int i=1;
    while(i<=10){
        cout<<m<<" * "<<i<<" = "<<m*i<<endl;
        i++;
    }
}

