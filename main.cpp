#include <iostream>
int main()
{
  int a = 0;
  std::cin >> a;
  else if (std::cin.eof())
  {
    std::cerr << "Eof!\n";
  }
  else if (std::cin.fail())
  {
    std::cerr << "Fail\n";
    std::cin.clear();
    std::cin.ignore(1);
    std::cin >> a;
  }
  std::cout << a;
  std::cout << "\n";
}
