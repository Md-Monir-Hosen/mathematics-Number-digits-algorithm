#include<bits/stdc++.h>
using namespace std;
int kthdigit(int a,int b,int k)
{
    int p=pow(a,b);
    int cnt=0;
    while(p>0 && cnt<k)
    {
        int rem=p%10;
        cnt++;
        if(cnt==k)
        {
            return rem;
        }
        p=p/10;
    }
    return 0;
}
int main()
{
     int a = 5, b = 2;
    int k = 1;
    cout << kthdigit(a, b, k);
    return 0;
}
