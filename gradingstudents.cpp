#include <bits/stdc++.h>

using namespace std;




int main()
{
    int n,m,s;
    cin>>n;
    
    int marks;
    for(int i=0; i<n; i++){
        cin>>marks;
         
        //s = ar[i];
        if (marks<38){
          cout<<marks<<endl;
        }
        else if((5-marks%5)<3){
           m=marks/5;
          cout<<5*(m+1)<<endl ;
        }
        else{
            cout<<marks<<endl;
        }
        // cout<<s<<endl;
         
    }
    
   
   
    return 0;
}


