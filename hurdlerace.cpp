#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, k;
    cin>>n>>k;
    int a[n],max;
    max=a[0];
    for (int i = 0; i < n; i++) { 
        
        cin>>a[i];
        
        if(a[i]>max){
            max=a[i];
        }
        
    }
    
    if(max>k){
        cout<<max-k;
    }
     
     else cout<<"0";

   
}

