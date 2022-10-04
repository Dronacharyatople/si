
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution
{
public:
    int swapBitGame(long long N)
    {
        int count=0;
        
        
       while(N)

       {

         int p=N%2;

         

         if(p==1)

         count++;

        

          N=N/2;

         

       }

       count++;

       if(count%2!=0)

       {

           return 2;

       }

       else

       {

           return 1;

       }
    }
};

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     long long N;
     cin>>N;
     Solution ob;
     cout<<ob.swapBitGame(N)<<endl;
 }

    return 0;
}
