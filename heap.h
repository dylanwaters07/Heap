#ifndef heap_h
#define heap_h
const int HEAPSIZE = 100;

class heap{
    
    public: //=======
     heap(){size=0;}
     
     void heapBuild(); // Build from array
     void heapFileBuild(const char* filename); // Read from file
     
     void add(int num); // Add number to tree
     
     void clearMax(); // Remove head
     void clearAll(); // Remove all numbers
     
     void print(int i); // Print out tree
    private: //=======
     int arr[HEAPSIZE];
     int size;
     void restructHeap(int i);
};

#endif
