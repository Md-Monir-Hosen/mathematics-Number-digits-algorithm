#include<bits/stdc++.h>
using namespace std;
int repeated_digit(int n)
{
    unordered_set<int>s;
    while(n!=0)
    {
        int d=n%10;
        if(s.find(d)!=s.end())
        {
            return 0;
        }
        s.insert(d);
        n=n/10;
    }
    return 1;
}
int calculate(int l,int r)
{
    int ans=0;
    for(int i=l;i<r+1;i++)
    {
     ans=ans+repeated_digit(i);
    }
    return ans;
}
int main()
{
    int L = 1, R = 100;
    cout << calculate(L, R);
    return 0;
}
