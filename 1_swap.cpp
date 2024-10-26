#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 5;
  int b = 10;

  cout << a << endl;
  cout << b << endl;

  swap(a, b);

  cout << a << endl;
  cout << b << endl;

  return 0;
}
