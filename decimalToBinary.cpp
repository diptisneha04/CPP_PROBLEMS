#include<iostream>
using namespace std;

int main()
{
    int binary[32],dec;
    cout<<"\n Enter the decimal number";
    cin>>dec;
    cout<<endl;

    int i=0;

    while(dec>0){
        binary[i]=dec%2;
        dec=dec/2;
        i++;
    }


    cout<<"Binary value for the given Decimal Nummber"<<endl;
    for(int j=i-1;j>=0;j--)
    {
        cout<<binary[j];
    }

    cout<<endl;






    return 0;
}