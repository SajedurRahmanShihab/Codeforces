#include<bits/stdc++.h>

using namespace std;

string removeVowel(string str){
    string temp;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'A' || str[i] == 'E',str[i] == 'I' || str[i] == 'O',str[i] == 'U' || str[i] == 'a',str[i] == 'e' || str[i] == 'i',str[i] == 'o' || str[i] == 'u'){
            str.erase(str.begin() + i);
        }
    }
    return str;
}

int main(){
    string s = "Shihab";
    cin>>s;
    string result = removeVowel(s);
    cout<<result;
}