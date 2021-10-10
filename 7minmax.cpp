#include <bits/stdc++.h>

using namespace std;



int main()
{
    int x, a[5];
     for(int i=0; i<5; i++){
         cin>>x;
         
     }
     
     int min, max, smin=0, smax=0;
     
   
    for(int i=0; i<4; i++){
     min = a[i];
        if( a[i+1]<a[i] )
        min = a[i+1]; 
        
        smin= smin + min;
     }
     
        for(int i=0; i<4; i++){
     max = a[i];
        if( a[i+1]>a[i] )
        max = a[i+1]; 
        
        smax= smax + max;
     }
    
    cout<<smin<<" ";
    cout<<smax;
     
    return 0;
}

