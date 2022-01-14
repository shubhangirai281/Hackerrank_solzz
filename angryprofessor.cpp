#include <bits/stdc++.h>

using namespace std;



int main()
{
   int t;
   cin>>t;
   

   
   
    for (int i = 0; i < t; i++) {
           int n,k, cnt=0;
   cin >> n>>k;
   
   int a[n];
   
   for(int j=0; j< n; j++){
       cin>>a[i];
       
       if(a[i]<=0)
       cnt++;
   }
       if(cnt<k)
       cout<<"YES"<<endl;
       else {
       cout<<"NO"<<endl;
       } 

    }

   

    return 0;
}

