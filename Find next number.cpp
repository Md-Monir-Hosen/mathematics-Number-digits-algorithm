#include<bits/stdc++.h>
using namespace std;
void Swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void findNext(char a[],int n)
{
    int i,j;
    for(i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            break;
        }
    }
    if(i==0)
    {
        cout<<"Next number is not possible";
        return;
    }
    int x=a[i-1],smallest=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]>x && a[j]<a[smallest])
        {
            smallest=i;
        }
    }
    swap(&a[smallest],&a[i-1]);
    sort(a+i,a+n);
    cout<<"Next number with same set of digits is ";
    return;
}
int main()
{
     char digits[] = "534976";
    int n = strlen(digits);
    findNext(digits, n);
    return 0;
}
