#include<iostream>
using namespace std;
int main()
{
int a,b,c;
for(a=1;a<=5;a++)
{
for(b=a;b<=5;b++)
{
    cout<<b;
}
for(c=1;c<a;c++)
{
    cout<<c;
}
cout<<endl;
}

}
