#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
int getPriority(char op) {
	if (op == '+' || op == '-') {
		return 1;
	}
	if (op == '*' || op == '/') {
		return 2;
	}
	return 0;
}
double applyOperation(double a, double b, char op) {
	switch (op) {
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	}
	return 0;
}

double calculatexp(string exp){
	stack<double> num;
	stack<char> symbol;
	istringstream ss(exp);
	string token;
	while (ss >> token) {
		if (isdigit(token[0])) {
			num.push(stod(token));
		}
		else {
			while (!symbol.empty() && getPriority(symbol.top()) >= getPriority(token[0])) {
				double val2 = num.top(); num.pop();
				double val1 = num.top(); num.pop();
				char ops = symbol.top(); symbol.pop();
				num.push(applyOperation(val1,val2,ops));
			}
			symbol.push(token[0]);
		}
	}
	while (!symbol.empty()) {
		double val2 = num.top();
		num.pop();

		double val1 = num.top();
		num.pop();

		char op = symbol.top();
		symbol.pop();

		num.push(applyOperation(val1, val2, op));
	}
	return num.top();
}
int main() {
	string exp;
	while (getline(cin, exp)) {
		if (exp == "0")break;
		double result= calculatexp(exp);
		printf("%.2f\n", result);
	}
	return 0;
}
