#include <bits/stdc++.h>

using namespace std;



int main()
{
    long double x1,v1,x2,v2;
    
    cin>>x1>>v1>>x2>>v2;
    
    long double n = (x1 - x2)/(v2 - v1) ;
    if (n<0)cout<<"NO";
    else{
    
     if((long double)n==(int)n)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;}
    
   
    return 0;
}
