// -*- c++ -*-
#if !defined __P_INC
#define __P_INC

#include <iostream>
#include <cstring>

class __i {
	static size_t d;
 public:
	__i() { ++d; }
	~__i() { --d; }
	static size_t get() { return d; }
};
static const char * const __b = "                                             ";
inline void _p(const char* f) {
	if (__i::get() > 1) {
		std::cout << __b + (strlen(__b) - __i::get() + 1);
	}
	std::cout << f << std::endl;
}
#define _P __i __I; _p( __PRETTY_FUNCTION__ )

#endif
