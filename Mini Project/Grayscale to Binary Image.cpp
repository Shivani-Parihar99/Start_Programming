// Grayscale to Binary Image
#include "imagelib.h"

int main() {
  // Displays input image
  loadFile("input.png");
  // Traverse rows in 2D array
  for (int i = 0; i < height; i++) {
    // Traverse columns in each row
    for (int j = 0; j < width; j++) {
      // Process pixel image[i][j], here
      if (image[i][j] <= 70) {
        // Sets image pixel to black
        image[i][j] = 0;
      } else {
        // Sets image pixel to white
        image[i][j] = 255;
      }
    }
  }
  // Displays modified image
  saveFile("output/modified.png");
}
