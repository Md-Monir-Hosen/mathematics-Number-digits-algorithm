#include<bits/stdc++.h>
using namespace std;
bool checkJumbled(int n)
{
    if(n/10==0)
    {
        return true;
    }
    while(n!=0)
    {
        if(n/10==0)
        {
            return true;
        }
        int digit1=n%10;
        int digit2=(n/10)%10;
        if(abs(digit1-digit2)>1)
        {
           return false;
        }
        n=n/10;
    }
    return true;
}
int main()
{
    int num = -1234;

    if (checkJumbled(num))
        cout << "True \n";
    else
        cout << "False \n";
    num = -1247;

    if (checkJumbled(num))
        cout << "True \n";
    else
        cout << "False \n";

    return 0;
}
