#include <iostream>
#include "heap.h"
#include <fstream>
#include <cstring>
#include <sstream>

using namespace std;

//https://www.geeksforgeeks.org/cpp/implement-heap-in-c/
// Used for insert logic
void heap::add(int num){
    if (size >= HEAPSIZE){ // Stop adding if array is at max numbers
        return;
    }
}

void heap::heapBuild(){
    int numamount;
    cout << "How many numbers would you like to enter?: ";
    cin >> numamount;
    
    for(int i = 0; i < numamount; i++){
        int number;
        cout << "Enter number: ";
        cin >> number;
        
        arr[size] = number;
        size++;
        
        for(int i = size/2 - 1; i >= 0; i--){  // start from middle, go backwards
            restructHeap(i);
        }
    }
}

//https://www.geeksforgeeks.org/cpp/getline-string-c/
void heap::heapFileBuild(string filename){
    cout << "Building from file" << endl;
    
    string file = filename + ".txt";
    ifstream myFile(file);

    string numbers;
    getline(myFile, numbers); // Read
    
    for(int i = 0; i < numbers.size(); i++){
        if(ispunct(numbers[i])){
            numbers[i] = ' ';
        }
    }
    
    stringstream stream(numbers);
    int value;
    while(stream >> value){
        arr[size] = value;
        size++;
        cout << value << " ";
    }
    cout << endl;
    
    for(int i = size/2 - 1; i >= 0; i--){  // start from middle, go backwards
        restructHeap(i);
    }
    
    myFile.close();
}


void heap::clearMax(){
  if (size == 0){
      return;
  }
  arr[0] = arr[size-1];
  size = (size-1); // Set num -1 since we lost a number.
  restructHeap(0); // Run restruct
}

void heap::clearAll(){
    size = 0; // Removes access and resets size
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
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
