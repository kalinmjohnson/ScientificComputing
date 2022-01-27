#include <iostream>
using namespace std;

/*
 *  *A one operations calculator with a switch statement  
 *   */

int

main()
{

	double firstNum, secondNum, answer;
	char op;
	int Num1, Num2;
	cout << "Enter the first number: ";
	cin >> firstNum;
	cout << "Enter the second number: ";
	cin >> secondNum;
	cout << "Enter + - * / or %: ";
	cin >> op;

	switch (op) {
		case '+':
			answer = firstNum + secondNum;
			break;
		case '-':
			answer = firstNum - secondNum;
			break;
		case '*':
			answer = firstNum * secondNum;
			break;
		case '/':
			answer = firstNum / secondNum;
			break;
		case '%':
			Num1 = (int) firstNum;
			Num2 = (int) secondNum;
			answer = Num1 % Num2;
			firstNum = Num1;
			secondNum = Num2;
			break;
		default:
			cout << firstNum << " " << op << " " << secondNum << " = Invalid operator: " << op << endl;
			return 0;
	}



	cout << firstNum << " "  << op << " " << secondNum << " = " << answer << endl;


return 0;

} //main

