//#include<iostream>
//using namespace std;
//
//int main() {
//	double op1, op2, result = 0;
//	char op;
//
//
//	int run = 1;
//	while (run) {
//		system("cls");
//		cout << "Simple Caclculator\n--------------\n";
//		cout << "Supported operations: +,-,*,/\n";
//		cout << "Enter operand 1: ";
//		cin >> op1;
//		cout << "Enter operand 2: ";
//		cin >> op2;
//		cout << "Enter operator: ";
//		cin >> op;
//
//		switch (op) {
//		case '+': {
//			result = op1 + op2;
//			cout << "Result: " << result << endl;
//			break;
//		}
//		case '-': {
//			result = op1 - op2;
//			cout << "Result: " << result << endl;
//			break;
//		}
//		case '*': {
//			result = op1 * op2;
//			cout << "Result: " << result << endl;
//			break;
//		}
//		case '/': {
//			if (!op2)result = INFINITY;  //Division by Zero Case , C++ compiler already handles it but for othter plattforms
//			else result = op1 / op2;
//			cout << "Result: " << result << endl;
//			break;
//		}
//		default:
//			cout << "Kindly enter a valid operator (-,+,*,/)\n";
//			break;
//		}
//		cout << "Do you want to perform another operation? Press 1\n Press 0 for exit\n";
//		cin >> run;   //Will stop if we enter 0 and run if we enter anything else
//	}
//	cout << "Exiting...\n";
//}