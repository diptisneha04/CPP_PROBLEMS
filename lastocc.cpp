// to find the last occurence of the element x

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }

    cout<<"\n Enter the element x";
    int x;
    cin>>x;

    int occ=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x)
            occ=i;
    }
    cout<<"Last occurence of the element x"<<occ;
    return 0;

}