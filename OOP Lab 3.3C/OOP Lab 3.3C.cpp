#include <iostream>
#include "VectorN.h"

using namespace std;

int main() {
	VectorN vector;
	VectorN vector1;


	cin >> vector;
	cout << vector;
	cin >> vector1;
	cout << vector1;


	cout << "Vector length: " << ~vector << endl;
	cout << "Are vectors equal?: ";
	if (vector == vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 > vector2: ";
	if (vector > vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 < vector2: ";
	if (vector < vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vectors length equal?: ";
	if (vector != vector1) { cout << "no" << endl; }
	else cout << "yes" << endl;
	cout << "Are vector1 length > vector2 length: ";
	if (vector >= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "Are vector1 length < vector2 length: ";
	if (vector <= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	vector * 4;
	cout << "After scal" << vector;


	cout << "VectorCount: " << VectorN::Count() << endl;
	cout << "ObjectCount: " << Object::Count() << endl;
}