#include<bits/stdc++.h>
using namespace std;
int digitSum(long long int n)
{
    int digSum=0;
    while(n)
    {
        digSum+=n%10;
        n/=10;
    }
    return digSum;
}
long long int countInteger(long long int n,long long int s)
{
    if(n<s)
    {
        return 0;
    }
    for(long long int i=s;i<=min(n,s+163);i++)
    {
        if((i-digitSum(i))>s)
        {
            return (n-i+1);
        }
    }
    return 0;
}
int main()
{
    long long int n = 1000, s = 100;
  cout << countInteger(n, s);
  return 0;
}
