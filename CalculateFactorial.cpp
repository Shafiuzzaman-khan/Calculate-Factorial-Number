#include<iostream>
#include<fstream>
using namespace std;

#define defaultvalue -1
#define MAX 25

int lookupTable[MAX];
int init()
{
    for(int i=0;i<MAX;i++)
    {
        lookupTable[i]= defaultvalue;
    }
}
int CalculateFactorial(int n)
{
    if(lookupTable[n]== defaultvalue)
    {
        if(n==0)
        {
            lookupTable[n]=1;
        }
        else
        {
            lookupTable[n]=n*CalculateFactorial(n-1);
        }
    }
    return lookupTable[n];
}

int main()
{
    init();
    int n=11;
    cout<<"Fatorial is:"<<CalculateFactorial(n)<<endl;

    return 0;
}
