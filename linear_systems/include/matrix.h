/*
 * matrix.h
 *
 *  Created on: Apr 17, 2015
 *      Author: bvuong
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class matrix {
private:
	double** values;
public:
	matrix();
	matrix(int r,int c);
	~matrix();

	double get(int r,int c);
	double set(int r,int c, double value);
};



#endif /* MATRIX_H_ */
