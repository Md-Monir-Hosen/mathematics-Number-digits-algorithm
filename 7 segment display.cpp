#include<bits/stdc++.h>
using namespace std;
const int seg[10]={6,2,5,5,4,5,6,3,7,6};
int computeSegment(int x)
{
    if(x==0)
    {
        return seg[0];
    }
    int cnt=0;
    while(x)
    {
        cnt+=seg[x%10];
        x/=10;
    }
    return x;
}
int elementMinSegment(int a[],int n)
{
    int minseg=computeSegment(a[0]);
    int minindex=0;
    for(int i=1;i<n;i++)
    {
        int temp=computeSegment(a[i]);
        if(temp<minseg)
        {
            minseg=temp;
            minindex=i;
        }
    }
    return a[minindex];
}
int main()
{
    int arr[] = {489, 206, 745, 123, 756};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << elementMinSegment(arr, n) << endl;
    return 0;
}
