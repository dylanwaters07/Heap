#include <iostream>
using namespace std;

#include <heap.h>

void heapadd(){
    //"this means your program should be able to handle both input methods"
    cout << "============================================================" << endl;
    cout << "Enter " << endl; 
    cout << "-----" << endl; //(1-1000)
    cout << "1 : Enter a number (Up to 100 numbers total)" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "2 : Automatically add numbers from file" << endl;
    cout << "============================================================" << endl;
    
    bool choicecheck = true;
    while (choicecheck){
        int choice;
        cout << "What is your choice?: ";
        cin >> choice; 
        
        if (choice == 1){
            // Code to allow user to enter values up to 100 numbers
        }
        else if (choice == 2){
            // Code to automatically add numbers from file
            char numbers[100]
            //Add filename to char array.
        }
        else{
            cout << "Numbers 1-2 only" << endl;
        }
    }
}

int main()
{
    heapadd();
    return 0;
}
