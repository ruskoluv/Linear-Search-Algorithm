/*
    Cameron J Fitzpatrick
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int search1( const int a[], const  int& , const int& );

int main()
{
  /*search is a keyword in C++ so I named my search function search1 */
  int n = 0, k = 0, i = 0;
  int *a;
  cin>>n;
  a = new(nothrow) int[n];
  while(i<n)
    cin>>a[i++];

  cin>>k;
  cout<<search1( a, n, k )<<endl;
  delete []a;
}

int search1(const int a[],const int& length,const int& k)
{
  if (length==1)
  {
    return a[0] == k;
  }
  else if (length>1)  {
    return search1(a, length/2, k) || search1(a+length/2, length-(length/2), k);
  }
  else
  {
    return 0;
  }
}


