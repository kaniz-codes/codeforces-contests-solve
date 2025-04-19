#include <iostream>
using namespace std;

int main() 
{
  int N1, N2;
  cin >> N1 >> N2;
  
  while(N1 != N2) 
  {
    if(N1 > N2)
      N1 -= N2;
    else
      N2 -= N1;
  }

  cout << N1;
  
  return 0;
}