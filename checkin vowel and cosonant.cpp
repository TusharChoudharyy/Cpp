#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    bool vol,Cvol;
    cin>>c;
    vol=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
    Cvol=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
    if(vol||Cvol){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }

}
