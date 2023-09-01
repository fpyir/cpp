#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  // cout << "Enter height:";
  // string heightInput;
  // cin >> heightInput;

  // cout << "Enter width:";
  // string widthInput;
  // cin >> widthInput;

  // int height = std::stoi(heightInput);
  // int width = std::stoi(widthInput);

  int height = 5;
  int width = 10;

  cout << endl;

  /**
   * Write a square or rectangle (depending on what height/width are)
   */
  for (int r = 0; r < height; ++r)
  {
    cout << string(width, '*');
    cout << endl;
  }
  cout << endl;
  cout << endl;

  /**
   * Write a triangle using the following rules:
   * 1. Each layer down uses n-x/2 spaces + "*" + n-x/2 spaces, where x is the height.
   */
  for (int r = 0; r < height; ++r)
  {
    int padding = (height - (r + 1)) / 2;
    cout << string(padding, ' ') + string(r + 1, '*') + string(padding, ' ');
    cout << endl;
  }
  cout << endl;
}
