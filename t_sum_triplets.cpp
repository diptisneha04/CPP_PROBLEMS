#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,4,5,3,6,1};
    int target_sum=7;
    int count=0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==target_sum){
                count++;
            }
            
            }
        }
    }
    cout<<"\n No.of target_sum triplets: "<<count;
}    