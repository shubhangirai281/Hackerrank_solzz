#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
 //  int x= sizeof(a)/sizeof(a[0]);
  //  sort(a,a+x);
    
    int cnt=0;
    
    for(int i=0; i < n; i++){
           for(int j=0; j < n; j++){

             if((a[i]+a[j])%k==0 && i<j)
             {
            cnt++;
       
            }
           }
    }
    
    cout<<cnt;
    return 0;
}
