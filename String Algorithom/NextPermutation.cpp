#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;

    while(next_permutation(s.begin(),s.end()))
    {
        cout<<s<<endl;

    }

    cout<<endl;

    // Using Vactor

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    while(next_permutation(v.begin(),v.end()))
    {
        for(int i=0; i<3; i++)
        
            cout<<v[i]<<" ";
            cout<<endl;
        
    }

}