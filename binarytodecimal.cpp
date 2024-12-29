#include<iostream>
using namespace std;

int main(){
    int b,ld,power=1,dec=0;
    cout<<"\n Enter the binary number";
    cin>>b;
    cout<<endl;
    while(b!=0){
        ld=b%10;
        dec+=ld*power;
        power=power*2;

        b=b/10;

    }
    cout<<"Decimal number="<<dec;
    return 0;
}
