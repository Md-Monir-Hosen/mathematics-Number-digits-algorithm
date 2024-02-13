#include<bits/stdc++.h>
using namespace std;
void print(int n,int k)
{
    int rem=1;
    for(int i=0;i<k;i++)
    {
        cout<<(10*rem)/n;
        rem=(10*rem)%n;
    }
}
int main()
{
    int n = 7, k = 3;
    print(n, k);
    cout << endl;

    n = 21, k = 4;
    print(n, k);

    return 0;
}
