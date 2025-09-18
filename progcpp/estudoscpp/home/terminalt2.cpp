//a simple terminal writtren in C++ 

//include libraries
#include <iostream>
#include <string>
//___________________________________________________
//namespace std as pattern namespace for convenience

using namespace std;
//___________________________________________________
//functions to operations

//calculator function
void calc(const string& op, int num1, int num2) {
    if (op == "+"){cout << num1 + num2 << endl;}
    else if (op == "-"){cout << num1 - num2 << endl;}
    else if (op == "*"){cout << num1 * num2 << endl;}
    else if (op == "/"){
        if (num2 == 0){cout << "ERROR: unpossible operation"} 
        else {cout << num1 / num2 << endl;}
    }}
//___________________________________________________
//main application entry point

int main() {

	//variable to user's commands
	string cmd;
	
	//welcome menssage
	cout << "welcome to my training terminal!" << endl;
	//how to list commands
	cout << "to list possible commands write 'help'" << endl;
	
	//infinite loop to run operations
    while (true) {
    cout <<"controlct> ";
    cin >> cmd;
    
    //heandle user commands
    //exit to end operations
    if (cmd == "exit"){return 0;}
    
    //'help' to list commands
    if (cmd == "help"){
        cout <<"exit: to end operations" << endl;
        cout <<"calc: to open calulator" << endl;
        cout <<"agenda: to open agenda" << endl;
    }
    
    //command to start calculator
    if (cmd == "calc"){
        //variables to calculator
            int num1, num2;
            string op;
        //possible operations
        cout << "possible operations: sum(+), subtraction(-), multiplication(*) and division(/)";
        
        //keep inside calculator until exit command
        while (true){
            //how to use calculator
            cout << "write the operator, the 1º number and the 2º number, on this order" << endl;
            
            //enter variables
            cin >> op >> num1 >> num2;
            
            //check if user wants to exit the calculator
            if (op == "exit"){break;}
            
            //else call calc function
            else {calc (op, num1, num2);}
        }
    }
    if (cmd == "agenda"){}
    }
}