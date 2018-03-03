#include <iostream>
using namespace std;
int main()
{
   int n,r,sum=0;
   cout<<"Enter n=";
   cin>>n;
   do
        {          
            r=n%10;
            sum=sum+r;
             n=n/10;
        }while(n!=0);
        cout<<"sum="<<sum;
   return 0;
}
