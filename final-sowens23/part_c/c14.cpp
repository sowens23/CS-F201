#include <iostream>
#include <vector>


int main() {
  std::vector<int> grades {75, 81, 66, 90, 92, 87};
  std::cout << "Printing all grades:" << std::endl;
  for (int i=0; i<grades.size(); i++) {
    std::cout << grades[i] << std::endl;
  }
  return 0;
}
