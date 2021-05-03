// Calculate the Area of a Rectangle Using Pointers
#include <iostream>

using namespace std;

// area function
void area(double * length, double * width, double * result) {
  // Calculte area of rectangle
  * result = * length * * width;

}

// main function
int main() {
  // Initialize variables length and width
  double length = 8.9, width = 2.1;
  // Initialize variable result
  double result = 0;
  // Print value of result before function call
  cout << "Before calling function area:" << endl;
  cout << "result = " << result << endl;
  // Call function area and pass the address of variables
  area( & length, & width, & result);
  // Print value of result after function call
  cout << "After calling function area:" << endl;
  cout << "result = " << result << endl;
  return 0;
}

// Calculate the Sum and Absolute Difference
#include <iostream>

using namespace std;

// sum_difference function
void sum_difference (int * value1, int * value2) {
  // Initialize variables to 0
  int diff = 0, sum = 0;
  // Calculate sum
  sum = * value1 + * value2;
  // Calculate difference
  diff = * value1 - * value2;
  // Check if difference is negative
  if (diff < 0) {
    // Multiply it by -1 to make it positive
    diff = diff * - 1;
  } 
  // Store sum in memory location pointed out by value1
  * value1 = sum;
  // Store diff in memory location pointed out by value2
  * value2 = diff;

}
int main() {
  // Initialize value1 and value2
  int value1 = 5;
  int value2 = 4;

  // Print values before calling function
  cout << "Values before calling function:" << endl;
  cout << value1 << endl;
  cout << value2 << endl;
  // Call function sum_diff
  sum_difference( & value1, & value2);
  // Print values after calling function
  cout << "Values after calling function:" << endl;
  cout << value1 << endl;
  cout << value2 << endl;

  return 0;
}
