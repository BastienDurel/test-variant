#include <iostream>
#include "D.h"
#include "V.h"

size_t __i::d = 0;

int main() {
	D d1;
	D d2(42);
	D d3(1.1);
	D d4(d1);

	D::get();

	d1 = d2;
	d1 = d2 + d3;
	d1 = d2 + 2;
	d1 = d3 + 1.2;

	std::cout << std::endl << std::endl;

	V v1;
	V v2(1);
	V v3(1.2);
	V v4("foo");
	V v5(d1);
	V v6(v1);

	v1 = 42;
	v1 = 4.2;
	v1 = "foo";
	v1 = d1;

	std::cout << std::endl << std::endl;

	d1 = (D)v3;
	d1 = v3;

	return 0;
}

