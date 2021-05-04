// Subtract Two Complex Numbers
#include <iostream>

using namespace std;

// Structure to store complex number
struct complex_number {
  // Store real part of complex number
  double real;
  // Store imaginary part of complex number
  double imaginary;
};

// Function subtract
complex_number subtract(struct complex_number c1, struct complex_number c2) {
  // Declare a structure variable
  struct complex_number c;
  // Subtract real parts
  c.real = c1.real - c2.real;
  // Subtract imaginary parts
  c.imaginary = c1.imaginary - c2.imaginary;
  // Return structure variable
  return c;
}

// Function print_complex
void print_complex(struct complex_number c) {
  cout << c.real << " + ";
  cout << c.imaginary << " i ";
  cout << endl;
}

// Function main
int main() {
  // Declare structure variables
  struct complex_number c1, c2, c;
  // Initialize structure variable c1
  c1 = { -12.3, -67.4 };
  // Initialize structure variable c2
  c2 = { 34, 89 };
  // Print members of c1
  cout << "First complex number = " ;
  print_complex(c1);
  // Print members of c2
  cout << "Second complex number = " ;
  print_complex(c2);
  // Call subtract function and store its output in c
  c = subtract(c1, c2);
  // Print members of c
  cout << "First complex number - Second complex number = " ;
  print_complex(c);

}

// Calculate Overall Percentage of Student's Mark
#include <iostream>

using namespace std;

// Student structure
struct Student {
  // Stores the name of Student
  string name;
  // Stores the marks of student in 4 subjects
  double marks[4];
};

// calculate_percentage function
double calculate_percentage(struct Student s) {
  // Initialize variables
  double total = 0, percentage = 0;
  // for loop to traverse marks of Student
  for (int i = 0; i < 4; i++) {
    // Add marks of Student in total
    total = total + s.marks[i];
  }
  // Calculate percentage
  percentage = (total / 400) * 100;
  // Return percentage of Student
  return percentage;
}

// print_Student function
void print_Student(struct Student s) {

  cout << "Name of student = " << s.name << endl;
  cout << "Student marks:" << endl;
  for (int i = 0; i < 4; i++) {
    cout << "Student marks in subject" << i + 1 << "=" << s.marks[i] << endl;
  }
}

// main function
int main() {
  // Declare structure variable s of type Student
  struct Student s;
  // Declare variable of type double
  double result;
  // Initialize members of s
  s = {"John",{30.5, 49.7, 22.3, 32.9}};
  // Call function calculate_percentage and store output in result
  result = calculate_percentage(s);
  // Call print_Student function to print members of s
  print_Student(s);
  // Print percentage of Student
  cout << "percentage = " << result << "%";
  return 0;
}

// Account Number of Customers with Balance < $500
#include <iostream>

using namespace std;

// Structure Account
struct Account {
  // Stores the name
  string name;
  // Stores the account number
  int number;
  // Stores the total amount
  double balance;
};

// Function check_account
void check_account(struct Account p[], int arr[], int size) {
  // Traverse array
  for (int i = 0; i < size; i++) {
    // Check if balance less than 500
    if (p[i].balance < 500) {
      // Store account number 
      arr[i] = p[i].number;
    } else {
      // Store -1
      arr[i] = -1;
    }
  }
}


// print_arr function
void print_arr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

// print_Account function
void print_Account(struct Account p[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "Person" << i + 1 << " details:" << endl;
    cout << p[i].name << endl;
    cout << p[i].number << endl;
    cout << p[i].balance << endl;
    cout << endl;
  }
}

// main function
int main() {
  // Declare array of type int
  int arr[3];
  // Declare structure array
  struct Account p[3];
  // Intialize structure array
  p[0] = {"John",578328,890};
  p[1] = {"Alex",908210,430.2 };
  p[2] = {"Kim",165216,98.5};
  // Call print_Account function
  print_Account(p, 3);
  // Call check_account function
  check_account(p, arr, 3);
  // Call print_arr function
  print_arr(arr, 3);

  return 0;
}
