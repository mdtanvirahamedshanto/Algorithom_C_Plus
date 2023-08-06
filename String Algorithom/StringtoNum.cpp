#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int num;
    num = 0;
    for(int i =0; i<s.size();i++)
    {
        int x=s[i] -'0';
        num = (num*10)+x;
    }
    cout<<num<<endl;

    int num2 =stoi(s);
    cout<<num2;
}