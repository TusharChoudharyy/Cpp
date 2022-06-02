    #include <iostream>  
    using namespace std;  
    int main()  
    {  
    int n,r,s=0,temp;
    //n=input number,r=remainder,s=sum temp= temporary value
    cout<<"Enter the Number=  ";    
    cin>>n;
    temp =n;
    //you can also use while(temp!=0)
    while(temp>0){    
    r=temp%10;    
    s += (r*r*r);
  
    temp=temp/10;    
    }    
    if(s==n){    
    cout<<"Armstrong Number."<<endl;
   
    }
    else    
    cout<<"Not Armstrong Number."<<endl; 
   
    }  
