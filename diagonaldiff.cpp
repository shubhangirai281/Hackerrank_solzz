/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int A,slr=0, srl=0, m, ar[m][m];
    cin>>m;
    
    for (int i=0; i<m; i++){
        for (int j=0; j<m; j++){
            cin>>A;
          if(i==j){
               slr= slr+A;
        }

           if (i+j==m-1) {
         
               srl= srl +A;
           }    
        }
    }

    if(slr>srl)
    cout<<slr-srl;
    else
    cout<<srl-slr;

    return 0;
}
