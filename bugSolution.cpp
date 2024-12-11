#include <iostream>

int main() {
  int *ptr = new int(10);
  *ptr = 20; // Modify the value
  std::cout << *ptr << std::endl; // Output: 20
  delete ptr; 
  ptr = nullptr; // Good practice to set pointer to null after deleting
  return 0;
} 