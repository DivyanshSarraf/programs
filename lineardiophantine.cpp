#include<iostream>
using namespace std;
bool find(int a,int b,int c,int &x,int &y,int &g);
int gcd(int a,int b,int &x,int &y);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y,g;
        cin>>a>>b>>c;
        bool d=find(a,b,c,x,y,g);
        if(d)
        {
            cout<<a<<"x"<<"+"<<b<<"y="<<c<<"\n";
            cout<<x<<" "<<y<<"\n";
        }
        else{
            cout<<"No solutions\n";
        }
    }
    return 0;
}
int gcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
bool find(int a,int b,int c,int &x,int &y,int &g)
{
    g=gcd(a,b,x,y);
    if(c%g)
        return false;
    x*=c/g;
    y*=c/g;
    if(a<0)
        x=-x;
    if(b<0)
        y=-y;
    return true;
}