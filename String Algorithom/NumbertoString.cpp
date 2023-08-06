#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int num3;
    cin>>num3;
    string ans;
    int num4 = num3;
    while(num3>0)
    {
        int r=num3%10;
        char ch=r+'0';
        ans+=ch;
        num3/=10;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

    string ans2 = to_string(num4);
    cout<<ans2;

}