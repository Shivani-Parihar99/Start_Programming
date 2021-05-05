//Calculate the Power of a Number

#include <iostream>

using namespace std;

int main() {
  // Initialize variable
  int base = 2, exponent = 3, result = 1;
  // for loop initialization
  for (int counter = 1; counter <= exponent; counter++) {
    // for loop body
    result *= base;
  }
  // Exit for loop
  cout << result;
  return 0;
  
//   Find out if the Given Number is Prime
  #include <iostream>

using namespace std;

int main() {
  // Intitialize variables
  int number = 7;
  bool isPrime = true;
  // if block
  if (number <= 1) {
  //Sets the value of `isPrime` to false
    isPrime = false;
  }
  // for block
  for (int counter = 2; counter <= number / 2; counter++) {
    // if block
    if (number % counter == 0) {
      isPrime = false;
      // jump to line No. 27
      break;
    }
  }
  
  //Convert Decimal Number to Binary
  #include <iostream>

using namespace std;

int main() {
  // Initialize variables
  int decimal = 10, binary = 0;
  int remainder, product = 1;
  // Prints value of decimal
  cout << "Decimal Number = " << decimal << endl;
  // while block
  while (decimal != 0) {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
  // while exit
  cout << "Binary Number = " << binary;
  return 0;
}
  
//Find out if the Given Number is a Palindrome
  #include <iostream>

using namespace std;

int main() {
  // Initialize variable
  int number = 2002;
  int remainder = 0, reverse = 0;
  // To reverse a number store it in temp
  int temp = number;
  // while loop
  while (temp != 0) {
    // Get the last digit of temp
    remainder = temp % 10;
    // Store the remainder after the initially stored value in reverse
    reverse = reverse * 10 + remainder;
    // Remove the last digit of temp
    temp = temp / 10;
  }
  // if condition
  if (number == reverse) {
    cout << "is palindrome";
  } else {
    cout << "not a palindrome";
  }
  return 0;
}
