#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  // the greeting to be placed in the middle of the frame.
  const std::string greeting = "Hello, " + name + "!";

  const int greeting_size = greeting.size();
  const int line_size = greeting_size + 4;

  const std::string spaces(greeting_size, ' ');
  const std::string frame_line = "* " + spaces + " *";

  const std::string solid_line(line_size, '*');

  std::cout << std::endl;
  std::cout << solid_line << std::endl;
  std::cout << frame_line << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << frame_line << std::endl;
  std::cout << solid_line << std::endl;
  std::cout << std::endl;

  return 0;
}
