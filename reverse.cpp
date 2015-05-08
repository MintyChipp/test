#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
  char saystr[100];
  cout << "Enter a string and i will output it for you backwards: ";
  cin.getline(saystr, 100);
  cout << "\n";
  reverse(saystr, saystr + strlen(saystr));
  cout << saystr;
  cout << "\n";
  return 0;
}
