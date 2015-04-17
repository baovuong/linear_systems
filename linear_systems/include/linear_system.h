/*
 * linear_system.h
 *
 *  Created on: Apr 17, 2015
 *      Author: bvuong
 */

#ifndef LINEAR_SYSTEM_H_
#define LINEAR_SYSTEM_H_

#include <vector>




struct term {
	double coefficiant;
	char variable;
};

class linear_equation {
private:
	std::vector<term> terms;
public:
};

void linear_system_test();

#endif /* LINEAR_SYSTEM_H_ */
