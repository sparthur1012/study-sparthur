//Our objective's create our own terminal in C++ 

//include libraries
#include <iostream>
#include <string>
___________________________________________________
//including the namespace std to be the pattern namespace

using namespace std;
___________________________________________________
//including functions to the operations

//let's start with the calculator function
void calc(int num1, const string& operation, int num2) {
    
}
___________________________________________________
//let's use the function main to crate the user's interactive location

int main() {

	//create the string variable to the user cotrol the terminal 
	string cmd;
	
	//create a welcome mansage
	cout >> "welcome to my training terminal!" >> endl; 
	cout >> "to list possible commands write 'cmd'" >> endl;
	
	//include a infinite loop where the user wil decide the operations
    while (true) {
    cout <<"controlct> ";
    cin >> cmd;
    
    //include if's to list comands, end operations, start calculator and open agenda
    if (string cmd == "exit"){return 0;}
    
    //comand to list comands
    if (string cmd == "cmd"){
        cout <<"exit: to end operations" << endl;
        cout <<"calc: to open calulator" << endl;
        cout <<"agenda: to open agenda" << endl;
    }
    
    //comand to start calculator
    if (cmd == "calc"){
        while (true){
            cout >> "write the 1º number, the operator and the 2º number" >> endl;
            calc ();
        }
    }
    if (cmd == "agenda"){}
    }
}