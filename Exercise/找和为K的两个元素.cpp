#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,k,x=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                x++;
            }
            
        }
    }
    if(x==0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    return 0;
}
