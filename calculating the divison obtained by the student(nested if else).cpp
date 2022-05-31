#include <iostream>
using namespace std;
int main(){
    int e, h, ss, s, m;
    // e--> english h-->hindi ss--> sst s-->science m--> maths 
    float t;
    //t is total marks
    cin>>e>>h>>ss>>s>>m;
    cout<<"english "<<e<<endl<<"hindi "<<h<<endl<<"sst "<<ss<<endl<<"sci "<<s<<endl<<"maths "<<m<<endl;
    t=e+h+ss+s+m;
    cout<<"total marks "<<t<<endl;
    float p=(t/500)*100;
    //p is percentage
    cout<<p;
    if(p>=60){
    	cout<<"first division"<<endl;
    }
    else if(p>=45 && p<=59){
    	cout<<"second division"<<endl;
    }
    else if(p>=33 && p<=45){
    	cout<<"second division"<<endl;
    }
    else{
    	cout<<endl<<"you are fail BETTER LUCK NEXT TIME"<<endl;
    }
    }
