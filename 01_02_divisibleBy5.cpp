#include<iostream>
using namespace std;

int main()
{
  // int n;
  // cin>>n;
  // if(n%5==0)
  // {
  //   cout<<"divisible by 5"<<endl;
  // }
  // else{
  //     cout<<"not divisible by 5"<<endl;
  // }
  // return 0;

  // without using %
  int n;
  cin>>n;
  if(n-(n/5)*5==0)
  {
    cout<<"divisible by 5"<<endl;
  }
  else{
    cout<<"not divisible by 5"<<endl;
  }
  return 0;
}