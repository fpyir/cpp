#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * Excessive comments to align with the textbook
 */
int main()
{
  cout << "Please enter your first name: ";

  // read the name
  string name;
  cin >> name;
  cout << endl;

  const string greeting = "Hello, " + name + "!";

  // the number of blanks surronding the greeting
  const int pad = 1;

  // total number of rows to write
  const int total_rows = pad * 2 + 1;
  // total number of columns to write for each row
  const string::size_type total_cols = greeting.size() + pad * 2;

  for (int r = 0; r != total_rows; ++r)
  {

    string::size_type c = 0;

    while (c != total_cols)
    {
      if (r == pad && c == pad)
      {
        cout << greeting;
        c += greeting.size();
      }
      else
      {
        bool isBorderCol = r == 0 || r == total_rows - 1 || c == 0 || c == total_cols - 1;

        if (isBorderCol)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }

        ++c;
      }
    }

    // writing a row of output makes the invariant false
    cout << endl;
  }

  return 0;
}