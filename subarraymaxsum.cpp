#include<iostream>
#include<climits>
using namespace std;

int main(){
    int maxSum =INT_MIN;
    int n; 
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }


    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[i];
            }
            maxSum= max (maxSum,sum);
            }

        }
    
    cout<<maxSum;
    return 0;  



}
