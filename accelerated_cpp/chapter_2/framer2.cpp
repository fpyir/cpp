#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first name: ";

  // read the name
  std::string name;
  std::cin >> name;

  const std::string greeting = "Hello, " + name + "!";

  const int pad = 1;
  const int rows = pad * 2 + 3;

  return 0;
}