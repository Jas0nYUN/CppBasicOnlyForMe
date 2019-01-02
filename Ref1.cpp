#include <iostream>
#include <string>
using namespace std;

float x = 10.7F;

int main() {
	float	&rx = x;
//	double	&ref = x;

	rx *= 2;

	cout << "    x = " <<  x << endl
		 << "   rx = " << rx << endl;
	const float& cref = x;
	cout << "cref = " << cref << endl;
//	++cref;
	const string str = "I am a constant string!";
//	str = "That doesn`t word!";
//	string& text = str;
	const string& text = str;
	cout << text << endl;
	return 0;
}
