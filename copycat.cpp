#include <iostream>
using namespace std;

int main()
{
  char saystr[100];
  cout << "Enter a string and i will output it for you: ";
  cin.getline(saystr, 100);
  cout << "\n";
  cout << saystr;
  cout << "\n";
  return 0;
}
