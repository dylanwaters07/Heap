#include <iostream>
#include "heap.h"

using namespace std;

//https://www.geeksforgeeks.org/cpp/implement-heap-in-c/
// Used for insert logic
void heap::add(int num){
    if (size >= HEAPSIZE){ // Stop adding if array is at max numbers
        return;
    }
    
    
    
}

void heap::heapBuild(){
   /*for(...logic){
       restructHeap(i); // Structure the numbers
   }*/
}

void heap::heapFileBuild(const char* filename){
    cout << "Building from file" << endl;
}

void heap::clearMax(){
  if (size == 0){
      return;
  }
  arr[0] = arr[size-1];
  size = (size-1); // Set num -1 since we lost a number.
  restructHeap(0); // Run restruct
}

//https://www.geeksforgeeks.org/dsa/insertion-and-deletion-in-heaps/
void heap::restructHeap(int i){
  int largest = i; // First value is the largest
  int left = 2*i+1;
  int right = 2*i+2;
  
  if (left < size && arr[left] > arr[largest]){
        largest = left;
  }
  if (right < size && arr[right] > arr[largest]){
        largest = right;
  }
  if (largest != i) {
        swap(arr[i], arr[largest]);
        restructHeap(largest);
  }
}

void heap::print(int i){
    cout << "Printing" << endl;
}
