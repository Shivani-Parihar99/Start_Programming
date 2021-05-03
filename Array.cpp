// Calculate the Average Marks of a Class
#include <iostream>
using namespace std;

// Function calculate_average
double average(double marks[], int size) {
  double sum = 0;
  double average = 0;
  // Add all the elements of array
  for (int i = 0; i < size; i++) {
    sum = sum + marks[i];
  }
  // Calculate average by dividing sum by size 
  average = sum / size;
  return average;
}

// main function
int main() {
  // Initialize array size
  int size = 8;
  // Declare variable to store output of function
  double result;
  // Initialize array
  double number [size] = {67, 89, 56, 43, 29, 15, 90,67};
  // Call function and store its output in result
  result = average (number,size);
  // Print value of result
  cout << "average = " << result;

}

// Left Rotate Array
#include <iostream>

using namespace std;

// left_rotate function
void left_rotate(int arr[], int size) {
  // Declares a loop counter variable
  int j;
  // Store the element at index 0
  int temp = arr[0];
  // Traverse array
  for (j = 0; j < size - 1; j++) {
    // Left Shift element
    arr[j] = arr[j + 1];
  }
  // Store the value of temp at the last index of an array 
  arr[j] = temp;

}

// Function to print values of an array
void print_array(int arr[], int size) {
  // Traverse array
  for (int i = 0; i < size; i++) {
    // Print value at index i
    cout << arr[i] << " ";
  }
  cout << endl;
}

// main function
int main() {
  // Initialize size of an array
  int size = 5;
  // Initialize array elements
  int arr[size] = {1, 2, 3, 4, 5 };
  
  cout << "Array before left rotation" << endl;
  // Call print_array function
  print_array(arr, size);
  // Call left_rotate function
  left_rotate(arr, size);

  cout << "Array after left rotation: " << endl;
  // Call print_array function
  print_array(arr, size);

  return 0;
}
