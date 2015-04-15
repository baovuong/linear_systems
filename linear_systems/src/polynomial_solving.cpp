/*
 ============================================================================
 Name        : polynomial_solving.cpp
 Author      : Bao Vuong
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include <regex>
#include <vector>
#include <string>

using namespace std;

string term_string = "([1-9]*[a-zA-Z])([^][1-9]+)?";
regex term_pattern("[-+]?"+term_string);
regex positive_term("[+]?"+term_string);
regex negative_term("[-]"+term_string);

struct term {
	double coefficiant;
	int degree;
	char variable;
};

class polynomial {
private:
	vector<term> terms;
public:
	polynomial();
	polynomial(string expression);
	~polynomial();
};


int main(void) {
	cout << "Hello World" << endl; /* prints Hello World */

	string right("-9x");
	string wrong("9x4");
	if (regex_match(right,term_pattern)) {
		cout << "cool" << endl;
	} else {
		cout << "lame" << endl;
	}

	if (regex_match(wrong,term_pattern)) {
		cout << "mean" << endl;
	} else {
		cout << "nice" << endl;
	}

	return 0;
}

polynomial::polynomial() {

}

polynomial::~polynomial() {

}

polynomial::polynomial(string expression) {

}

