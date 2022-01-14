#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;


    for (int i = 0; i < t; i++) {
        
   int  n;
        int nr,x,cnt=0;
        cin>>n;
       nr=n;
        while(n>0){
        x=n%10;
         
        if(x!=0 && nr%x==0){
            cnt++;
        } 
     
       n= n/10;
        }
        
        cout<<cnt<<endl;
    
    }
    return 0;
}

