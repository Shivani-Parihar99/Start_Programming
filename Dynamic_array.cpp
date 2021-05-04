// Resizing dynamic array 
#include <iostream>

using namespace std;

// printArray function
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// main function
int main() {
  // Initialize variable size
  int size = 5;
  // Create Array 
  int * Arr = new int[size];
  // Fill elements of an array
  for (int i = 0; i < size; i++) {
    Arr[i] = i;
  }
  // Call printArray function 
  printArray(Arr, size);  
  // Create new array
  int * ResizeArray = new int[size + 2];
  // Copy elements in new arary
  for (int i = 0; i < size; i++) {
    ResizeArray[i] = Arr[i];
  }
  // Delete old array
  delete[] Arr;
  // Pointer Array will point to ResizeArray
  Arr = ResizeArray;
  // Store new values
  Arr[size] = 90;
  Arr[size + 1] = 100;
  // Call printArray function
  printArray(Arr, size + 2);
}

// Set the Odd Elements in a Dynamic Array to -1
#include <iostream>

using namespace std;

// printArray function
void printArray(int * arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// set_odd function
void set_odd(int * arr, int size) {
  // Traverse array
  for (int i = 0; i < size; i++) {
    // Check if current element is odd
    if (arr[i] % 2 != 0) {
      // Set odd element to -1
      arr[i] = -1;
    }
  }
}

// main function
int main() {
  // Initialize size of an array
  int size = 5;
  // Declare dynamic array
  int * arr = new int[size];
  // Initialize array
  for (int i = 0; i < size; i++) {
    arr[i] = i;
  }
  // Call printArray function 
  printArray(arr, size);
  // Call set_odd function
  set_odd(arr, size);
  // Call printArray function
  printArray(arr, size);
  return 0;
}

// Delete an Element at a Specific Index
#include <iostream>

using namespace std;

// printArray function
void printArray(int * arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// delete_element function
void delete_element(int *&arr, int size, int index) {
  // Declare new array dynamically
  int * new_arr = new int[size - 1];
  // Traverse array
  for (int i = 0; i < size - 1; i++) {
    // 
    if (i == index || i > index) {
      new_arr[i] = arr[i + 1];
    } 
    else {
      // Copy elements in new array
      new_arr[i] = arr[i];

    }
  }
  // Free memory pointed out by arr
  delete[] arr;
  // Pointer arr will point to new_arr
  arr = new_arr;
  //return arr;
}

// main function
int main() {

  // Initialize variables
  int size = 5;
  int index = 3;
  // Initialize dynamic array
  int * arr = new int[size];
  // Fill elements in an array
  for (int i = 0; i < size; i++) {
    arr[i] = i;
  }
  // Call printArray function
  printArray(arr, size);
  // Call delete_element function
  delete_element(arr, size, index);
  // Call printArray function
  printArray(arr, size - 1);

  return 0;
}
