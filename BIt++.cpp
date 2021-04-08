// https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, result = 0;
    string x;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;

        if(x == "X++" || x == "++X"){
            result++;
        }
        else if(x == "X--" || x == "--X"){
            result--;
        }


    }
    cout<<result;
    
}