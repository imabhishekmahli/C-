#include<iostream>
using namespace std;

int main()
{
  int x,y;
  cin>>x>>y;
  int count = 0;
  for(int i=x;i<=y;i++)
  {
    if(i%7==0 || i%8==0)
    {
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}