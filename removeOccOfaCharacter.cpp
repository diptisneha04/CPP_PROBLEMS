#include<bits/stdc++.h>
using namespace std;
string str(string s, int idx, int n){
    if(idx==n){
        return " ";
    }
    string current=" ";
    current+= s[idx];
    return ((s[idx]=='i') ? " " : current) + str(s, idx+1, n);
}
int main(){
    string s="Dipti";
    int n=5;
    cout<< str(s,0,n);
    return 0;
}