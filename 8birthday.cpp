#include <bits/stdc++.h>

using namespace std;


int main()
{
   
    int  N;
    cin>>N;
    int ar[N];
    int max = ar[0], count = 0;
    
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<N;i++)
    {
        if(ar[i] > max)
            {
                max  = ar[i];
            }
    }

    for(int i=0;i<N ;i++)
    {
        if(ar[i] == max)
        count++;
    }

    cout<< count;



    return 0;
}
