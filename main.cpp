// Dylan Waters
//
// Heap (3/16/26)
//
// Description: Input an amount of numbers and print out ordered in a heap tree.


#include <iostream>
#include <fstream>
#include "heap.h"

using namespace std;

heap h;

void heapadd(){
    //"this means your program should be able to handle both input methods"
    cout << "============================================================" << endl;
    cout << "Enter " << endl; 
    cout << "-----" << endl; //(1-1000)
    cout << "1 : Enter a number (Up to 100 numbers total)" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "2 : Automatically add numbers from file" << endl;
    cout << "============================================================" << endl;
    
    bool addcheck = true;
    while (addcheck){
        int choice;
        cout << "What is your choice?: ";
        cin >> choice; 
        
        if (choice == 1){
            addcheck = false;
            h.heapBuild();
        }
        else if (choice == 2){
            char numbers[100];
	        cout << "What is your filename (x.txt)?:";
	        string filename;
	        cin >> filename;
	        
	        // https://www.geeksforgeeks.org/cpp/std-ifstream-isopen-in-cpp/
            string file = filename + ".txt";
            ifstream myFile(file);
	        if (myFile.is_open()){
	               h.heapFileBuild(filename);
	               addcheck = false;
	               //filecheck = false;
	        }
	        else{
	           cout << "Filename doesnt exist" << endl;
	           return;
	        }
        }
        else{
            cout << "Numbers 1-2 only" << endl;
        }
    }
}

void heapremove(){
    //"this means your program should be able to handle both input methods"
    cout << "============================================================" << endl;
    cout << "Enter " << endl; 
    cout << "-----" << endl; //(1-1000)
    cout << "1 : Remove the head" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "2 : Remove all" << endl;
    cout << "============================================================" << endl;
    
    bool removecheck = true;
    while (removecheck){
        int choice;
        cout << "What is your choice?: ";
        cin >> choice;
        
        if (choice == 1){
            removecheck = false;
            cout << "Removing max" << endl;
            h.clearMax(); // Runs clearmax to remove head
        }
        else if (choice == 2){
            removecheck = false;
            cout << "Removing all" << endl;
            h.clearAll(); // Runs the clearAll which runs clearMax for i.
        }
        else{
            cout << "Numbers 1-2 only" << endl;
        }
    }
}

void heapprint(){
    cout << "Heap (sideways tree):" << endl;
    h.printTree(0, 0); // index and depth starts at 0 and calls the printTree function.

    cout << "\nArray form:" << endl;
    h.print(0); // Prints array and amount of numbers. Starts from arr[0]
}

int main()
{
  bool running = true;
  while(running){
    cout << "============================================================" << endl;
    cout << "Enter" << endl;
    cout << "-----" << endl;
    cout << "1 : Add numbers" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "2 : Remove numbers" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "3 : Print numbers" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "4 : Quit program" << endl;
    cout << "============================================================" << endl;
    int choice;
    cin >> choice;

    if (choice == 1){
      heapadd(); // Add function
    }
    else if (choice == 2){
      heapremove(); // Remove function
    }
    else if (choice == 3){
      heapprint(); // Print function
    }
    else if (choice == 4){
      running = false; // Quits
    }
    else{ 
      cout << "Invalid input. Numbers 1-4 only." << endl;
    }
  }
  return 0;
}
