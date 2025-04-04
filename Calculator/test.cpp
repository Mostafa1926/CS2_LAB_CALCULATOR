#include <iostream>
#include "Calculator.h"
#include "AdvancMath.h"
#include "evaluator.h"
using namespace std;

int main() {
    while(true){
        cout << "1. Call GCD (48, 18)" << endl;
        cout << "2. Call LCM (12, 15)" << endl;
        cout << "3. Call Random Number" << endl;
        cout << "4. Call Expression Evaluator (10 + 2 * ( 6 - 4 ))" << endl;
        cout << "5. Calculate Factorial" << endl;
        cout << "6. Input Your Own Operation" << endl;
        cout << "7. Exit" << endl;
        cout << "Choice: ";
        
        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "GCD: " << GCD(48, 18) << endl;
        }
        else if (choice == 2) {
            cout << "LCM: " << LCM(12, 15) << endl;
        }
        else if (choice == 3) {
            cout << "Random: " << random(1,1000) << endl;
        }
        else if (choice == 4) {
            string expr = "10 + 2 * ( 6 - 4 )";
            string post = convert(expr);
            int result = evaluate(post);
            cout << "Postfix: " << post << endl;
            cout << "Result: " << result << endl;
        }
        else if (choice == 5) {
            cout << "Enter a number to calculate factorial: ";
            int num;
            cin >> num;
            cout << "Factorial of " << num << " is: " << factorial(num) << endl; 
        }
        else if (choice == 6) {
            cout << "Enter a mathematical expression: ";
            string Input;
            cin.ignore();
            getline(cin, Input); 
            
            string postfix = convert(Input);
            int result = evaluate(postfix);
            cout << "Postfix Expression: " << postfix << endl;
            cout << "Result: " << result << endl;
        }
        else if (choice == 7) {
            break;
        }
        else {
            cout << "Invalid choice\n";
        }

        cout << endl;
    }

    return 0;
}
