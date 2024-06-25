#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
    }
    map<int,int>mp;
    for(auto u : v)
    {
        mp[u]++;
    }
    for(auto u:mp)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }

}
