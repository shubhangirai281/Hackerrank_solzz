/*Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. 
Print the decimal value of each fraction on a new line with  places after the decimal.*/

#include <bits/stdc++.h>

using namespace std;



int main()
{ 
    int  p=0,n=0,z=0, a, m, arr[100];
cin>>m;
for( int i= 0; i<m; i++){
    cin>>a;
    
    if(a>0)
    p++;
    
    else if (a<0)
    n++;
    
    else 
    z++;
}

cout<<("%.3f",(float) p/m)<<endl;
cout<<("%.3f \n",(float)n/m)<<endl;
cout<<("%.3f",(float)z/m);


    return 0;
}
