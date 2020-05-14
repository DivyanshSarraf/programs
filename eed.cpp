#include<iostream>
using namespace std;
int extgcd(int a,int b,int &x,int &y);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x,y;
        int gcd=extgcd(a,b,x,y);
        cout<<"Gcd is :"<<gcd<<"\n";
        cout<<"Values of x and y are:"<<x<<" "<<y<<"\n";
    }
    return 0;
}
int extgcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=extgcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}