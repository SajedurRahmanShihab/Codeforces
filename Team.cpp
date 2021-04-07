// https://codeforces.com/problemset/problem/231/A


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, n1,n2,n3,count = 0;
    cin>> n;
    for(int i = 0; i < n; i++){
        cin>>n1>>n2>>n3;
        if((n1 + n2 + n3)>=2){
            count += 1;
        }
        
    }
    cout<<count;
}