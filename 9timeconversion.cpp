/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    string s;
    string h;
    int hr;
    cin>>s;
    hr = ((s[0]-'0')*10)+(s[1]-'0');
    if(s[8]=='P'&&s[9]=='M'&& hr ==12) cout<<to_string(hr);
    else if(s[8]=='P'&&s[9]=='M') cout<<to_string(hr+12);
    else if(s[8]=='A'&&s[9]=='M'&&hr==12) cout<<"00";
    
    else cout<< s[0]<<s[1];
    
   
    for(int i =2;i<8;i++)
        cout<<s[i];
    cout<<endl;
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;






int main()
{
    /**string t;
    getline(cin, t);
    if(t[8]=='P'){
         if(t[0] != '1' || t[1] != '2') {
       t[0]++;
       t[1]+=2;
     }
     else if(t[0] == '1' && t[1] == '2') {
         t[0]=0;
         t[1]=0;
     }
    }  **/
     string t;
   //scanf("%s", t);
    getline(cin, t);

   if(t[8] == 'P') {
     if(t[0] != '1' || t[1] != '2') {
       t[0]++;
       t[1]+=2;
     }
   } else {
     if(t[0] == '1' && t[1] == '2') {
       t[0] = '0';
       t[1] = '0';
     }
   }
   cout<<t.substr(0,8);
    return 0;
}