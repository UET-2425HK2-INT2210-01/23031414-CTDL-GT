﻿#include <iostream>
using namespace std;

int main()
{
    int n;
    int s=0;
    cin>>n;
    int a[n];
    for (int i= 0; i<n; i++)
    cin>>a[i];
    for (int i=0; i<n;i++)
    {
        for (int j=i+1; j<n;j++)
        {
            if (a[i] == a[j])
            {
                s++;
            }
        }
    }
    cout<<s;
    return 0;
}