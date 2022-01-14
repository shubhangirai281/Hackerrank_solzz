#include <bits/stdc++.h>

using namespace std;


int main()
{
   

    int q;
    cin >> q;
    
    int x,y,z;
    

    for (int i = 0; i < q; i++) {
        
        cin>>x>>y>>z;
        
        int diffA, diffB;
        
        if(x>z){
            diffA = x-z; 
        }
        else diffA= z-x;
        
           
        if(y>z){
            diffB = y-z; 
        }
        else diffB= z-y;
        
        if(diffA>diffB){
            cout<<"Cat B"<<endl;
        }
        else if(diffA==diffB){
           cout<<"Mouse C"<<endl;
        }
        else {
        cout<<"Cat A"<<endl;
        }
    }



    return 0;
}


