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

// Sort Elements of an Array in Descending Order
#include <iostream>
using namespace std;

// sort_elements function
void sort_elements(int arr[], int size) {
  // Outer loop
  for (int i = 0; i < size; i++) {
    // Inner loop
    for (int j = i + 1; j < size; j++) {
      // If condition
      if (arr[i] < arr[j]) {
        // Swap elements
        // Store the value at index j in temp
        int temp = arr[j];
        // Store the value at index i at index j
        arr[j] = arr[i];
        // Store the value of temp at index i
        arr[i] = temp;
      }
    }
  }
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
  int size = 4;
  // Initialize array elements
  int arr[size] = {10, 67, 98, 31};
  
  cout << "Array before sorting: " << endl;
  // Call print_array function
  print_array(arr, size);
  
  // Call sort_elements function
  sort_elements(arr, size);

  cout << "Array after sorting: " << endl;
  // Call print_array function
  print_array(arr, size);

  return 0;
}

// Add Main Diagonal Elements in a Matrix
#include <iostream>
using namespace std;

// add_diagonal function
int add_diagonal(int arr[3][3], int row, int col) {
  // Initialize sum
  int sum = 0;
  // Outer loop to traverse rows in a 2D array
  for (int i = 0; i < row; i++) {
    // Inner loop to traverse values in each row
    for (int j = 0; j < col; j++) {
      // Check if row index is equal to column index
      if (i == j) {
        // Add element at row index i and column index j in sum
        sum = sum + arr[i][j];
      }
    }
  }
  return sum;
}

// print_array function
void print_array (int arr[3][3], int row, int column){
  // Outer loop 
  for (int i = 0; i < row; i++) {
    // Inner loop
    for (int j = 0; j < column; j++) {
       cout << arr[i][j] << " ";
  }
  cout << endl;
  }
}

// main function
int main() {
  // Declare variable
  int result;
  // Initialize 2D array
  int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  // Call print_array function
  print_array(arr,3,3);
  // Call add_diagonal function and store your output in result
  result = add_diagonal(arr,3,3);
  // Print the value of result
  cout << "sum = " << result ;
  return 0;
}

// Multiply Two Matrices
#include <iostream>

using namespace std;

// multiplication function
void multiplication(int arr1[][2], int row1, int col1, int arr2[][2], int row2, int col2, int result[][2]) {
  // Check if col of first array equal to row of second array
  if (col1 == row2) {
    // Traverse first array row
    for (int x = 0; x < row1; x++) {
      // Traverse second array columns
      for (int y = 0; y < col2; y++) {
        // Traverse first array columns and second array rows
        for (int z = 0; z < col1; z++) {
          // Multiplication
          result[x][y] = result[x][y] + arr1[x][z] * arr2[z][y];
        }
      }
    }
  }
  else{
  // Traverse first array row
    for (int x = 0; x < row1; x++) {
      // Traverse second array columns
      for (int y = 0; y < col2; y++) {
        // Fill the elements of array by -1
        result[x][y] = -1;
      }
    }
  } 

}

// print_array function
void print_array(int arr[3][2], int row, int column) {
  // Outer loop 
  for (int i = 0; i < row; i++) {
    // Inner loop
    for (int j = 0; j < column; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

// main function
int main() {
  // Initialize arr1
  int arr1[3][2] = {{1,2},{3,4},{5,6}};
  // Initialize arr2
  int arr2[2][2] = {{10,20},{30,40}};
  // Initialize result
  int result[3][2] = {{0,0},{0,0},{0,0}};
  // Call function multiplication
  multiplication(arr1,3,2,arr2,2,2,result);
  // Call function print_array
  print_array(result,3,2);
  return 0;
}
