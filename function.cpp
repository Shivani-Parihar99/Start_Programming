//Convert Digits from 0 to 5 into Text
#include <iostream>
using namespace std;

string digit_text (int number){
  // Declares a variable of type string
    string result ;
switch (number){
    case 0:
    result = "zero";
    break;
    case 1:
    result = "one";
    break;
    case 2:
    result = "two";
    break;
    case 3:
    result = "three";
    break;
    case 4:
    result = "four";
    break;
    case 5:
    result = "five";
    break;

    default:
    result = "invalid number";

}

return result;
}

int main() {
  int number = 3;
  cout << "number = " << number << endl;
  string text;
  text = digit_text(number);
  cout << "text = " << text << endl;
  return 0;
}

//Set the Smallest Number to -1
#include <iostream>

using namespace std;

void minimum(int &number1, int &number2) {
  if (number1 > number2) {
    number2 = -1;
  } 
  else if (number2 > number1) {
    number1 = -1;
  } 
  else {
    number1 = -1;
    number2 = -1;
  }
}

int main() {
  int number1 = 6;
  int number2 = 2;
  cout << "Before function call" << endl;
  cout << "number1 = " << number1 << endl;
  cout << "number2 = " << number2 << endl;
  minimum (number1, number2);
  cout << "After function call" << endl;
  cout << "number1 = " << number1 << endl;
  cout << "number2 = " << number2 << endl;
 
  return 0;
}

//Design a Calculator
#include <iostream>

using namespace std;

double add(double number1, double number2) {
  double result = number1 + number2;
  return result;
}

double subtract(double number1, double number2) {
  double result = number1 - number2;
  return result;
}

double multiply(double number1, double number2) {
  double result = number1 * number2;
  return result;
}

double divide(double number1, double number2) {
  double result = number1 / number2;
  return result;
}

double test(double number1, char operate, double number2) {
  double result;

  switch (operate) {
  case '+':
    result = add(number1, number2);
    break;

  case '-':
    result = subtract(number1, number2);
    break;

  case '*':
    result = multiply(number1, number2);
    break;

  case '/':
    result = divide(number1, number2);
    break;

  default:
    result = -1;
  }

  return result;

}

int main() {
  double number1 = 7;
  char operate = '+';
  double number2 = 8;
  double result;
  cout << number1 << operate << number2 << " = ";

  result = test(number1, operate, number2);
  cout << result;
  return 0;
}
