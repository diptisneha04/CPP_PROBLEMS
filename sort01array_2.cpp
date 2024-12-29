#include<bits/stdc++.h>
using namespace std;

void sortZeroesAndOne(vector<int> &v){
    int lft_ptr=0;
    int rt_ptr=v.size()-1;

    while(lft_ptr<rt_ptr){
        if(v[lft_ptr]==1 && v[rt_ptr]==0){
            v[lft_ptr++]=0;
            v[rt_ptr--]=1;
        }

        if(v[lft_ptr]==0){
            lft_ptr++;
        }
        if(v[rt_ptr]==1){
            rt_ptr--;
        }
     }
    }




int main(){
    int n;
    cout<<"Array size";
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortZeroesAndOne(v);
    cout<<"\n Sorted Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }cout<<endl;


    return 0;
}