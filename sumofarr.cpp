
/*

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int m, s=0, ar[1000];
    cin>>m;
    for(int i=0; i<m; i++){
        cin >>ar[i];
        s= s + ar[i];
    } 
cout<<s;
    return 0;
}

