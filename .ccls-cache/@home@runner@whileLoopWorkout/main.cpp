#include <iostream>
using namespace std;

int main() 
{

  int count = 1, num = 25;

  while (count < 25)
    {
      cout << "count: " <<count<< " number: " <<num<< endl;
      num -= 1;
      count++;
    }
  return 0;  
}