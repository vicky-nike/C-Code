/* Code to rotate a array in 's' number of steps*/

#include <iostream>
#include <stdio.h>    
     
using namespace std;

int main()
{
    int n,a[100],i, j, last, s;

    cout<<"Input size of array array \n";
    cin>>n;
    for(i=0; i<n; i++)
    {   
        cout<<"enter elements of array \n";
        cin>>a[i];
    }

    cout<<"enter the number of steps to rotate \n";
    cin>>s;

    for(i=0; i<s; i++)
    {
        last = a[n-1];

        for(j=n-1; j>0; j--)
        {
            a[j] = a[j-1];
        }

        a[0] = last;
    }

    cout<<endl<<"Rotated array is";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}