#include<iostream>
using namespace std;
typedef long long ll;
int  gcd(int a,int b);
int main(){
    ll a,b,temp;
    cin>>a>>b;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    cout<<gcd(a,b);
    
}
// int  gcd(int a,int b)
// {
//     int c;
//     do
//     {
//         c=a%b;
//         a=b;
//         b=c;
//     }while(c!=0);
//     return a;
// }
// int gcd(int a,int b)
// {
//     if (b==0)
//         return a;
//     else
//     {
//         return gcd(b,a%b);
//     }
// }