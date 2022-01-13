#include <bits/stdc++.h>

using namespace std;


int main()
{
    
    int n,m;
    cin>>n>>m;
    
    int a[n], b[m];
    

    for (int i = 0; i < n; i++) {
      cin>>a[i];   //a[i] = a_item;
    }
    for (int i = 0; i < m; i++) {
        cin>>b[i];  //b[i] = b_item;
    }
    
    
   int x, ct=0;
   
    for (x=a[n-1]; x<=b[0]; x++)
    {
        int val=0,bal=0;
        for(int i=0; i<n; i++){
        if (x%a[i]==0)val++;
        }
        
        if(val==n){
        for(int j=0; j<m; j++)
        {
        if(b[j]%x==0)bal++;
        }
        }
        
        if(bal==m)ct++;
      
    }
     cout<<ct;
    
    
   

    return 0; 

}

