#include <iostream>
#include <heap,h>

using namespace std;

//https://www.geeksforgeeks.org/cpp/implement-heap-in-c/
// Used for insert logic
void heap::heapBuild(int arr[],int num){
   // Add
}

void heap::heapFileBuild(){

}

void heap::clearMax(int arr[], int num){
  int last = arr[num-1]; // Get last number
  arr[0] = last; // Replace head with last
  num = (num-1); // Set num -1 since we lost a number.
  restruct remove // Run restruct
}

//https://www.geeksforgeeks.org/dsa/insertion-and-deletion-in-heaps/
void heap::restructHeap(int i){
  int largest = i; // First value is the largest
  // Left is equal to 2*i+1
  // Right is equal to 2*i+2

  //---
  // Adding, bottom to top (Balance up)
  // If num is even do (x-2)/2
  // If num is odd do (x-1)/2
  //---
  
  // Remove, top to bottom (Balance down)
}
