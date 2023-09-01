#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  cout << "Please enter your first name: ";

  string name;
  cin >> name;
  const string greeting = "Hello, " + name + "!";

  string padInput;
  cout << "Please enter the amount of padding: ";
  cin >> padInput;
  cout << endl;
  int pad = std::stoi(padInput); // the number of blanks surronding the greeting

  // total number of rows to write
  const int total_rows = pad * 2 + 3;
  // total number of columns to write for each row
  const string::size_type total_cols = greeting.size() + pad * 2 + 2;

  for (int r = 0; r != total_rows; ++r)
  {
    /**
     * General structure is:
     * 1. first and last lines are all **
     * 2. pad+1 row is for the greeting
     * 3. all other rows are *<number of spaces>*
     */

    if (r == 0 || r == total_rows - 1)
    {
      cout << string(total_cols, '*');
    }
    else if (r == pad + 1)
    {
      string framedGreeting = "*" + string(pad, ' ') + greeting + string(pad, ' ') + "*";
      cout << framedGreeting;
    }
    else
    {
      cout << "*" + string(total_cols - 2, ' ') + "*";
    }

    // writing a row of output makes the invariant false
    cout << endl;
  }

  return 0;
}