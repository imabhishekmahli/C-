#include<iostream>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;

  int product = 0;
  for(int i=0;i<m;i++)
  {
    product = product + n;
  }
  cout<<product<<endl;
  return 0;
}