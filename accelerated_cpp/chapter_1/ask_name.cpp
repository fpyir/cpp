#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first name: ";

  std::string name;
  std::cin >> name; // read into

  std::cout << "Hello, " << name << "!" << std::endl;

  return 0;
}