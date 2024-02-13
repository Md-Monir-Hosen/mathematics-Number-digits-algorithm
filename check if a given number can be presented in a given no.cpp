#include<bits/stdc++.h>
using namespace std;
bool checkUtil(int num,int dig,int base)
{
    if(dig==1 && num<base)
    {
        return true;
    }
    if(dig>1 && num >= base)
    {
        return checkUtil(num/base,dig--,base);
    }
    return false;
}
bool check(int num,int dig)
{
    for(int base=2;base<=32;base++)
    {
        if(checkUtil(num,dig,base))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int num = 8;
    int dig = 3;
    (check(num, dig))? cout << "Yes" : cout << "No";
    return 0;
}
