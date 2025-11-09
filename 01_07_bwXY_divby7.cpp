#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int x,y;
  cin>>x>>y;
  for(int i=x;i<=y;i++)
  {
    if(i%7==0)
    {
      cout<<i<<endl;
    }
  }
  return 0;
}