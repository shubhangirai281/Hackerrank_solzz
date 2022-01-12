#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    int s,t;
    cin>>s>>t;

    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    
    int app,org,ca=0,co=0;
    for(int i=0; i<m;i++){
        cin>>app;
        app=app+a;
       
        if(app>=s&&app<=t)
        {
            ca++;
        }
    }
    for (int j=0; j<n; j++){
        cin>>org;
        
        org= b+org;
        
          if(org>=s && org<=t)
        {
            co++;
        }
    }
    
    cout<<ca<<endl<<co;

    return 0;
}




