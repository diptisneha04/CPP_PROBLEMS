#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOne(vector<int> &v){
    int zeroes=0;
    for(int ele:v){
        if(ele==0){
            zeroes++;
        }
    }    
    for(int i=0;i<v.size();i++){
        if(i<zeroes){
            v[i]=0;
        }
        else{
            v[i]=1;
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
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }cout<<endl;



    return 0;
}