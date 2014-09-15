#if !defined __V_INC
#define __V_INC

#include "P.h"

class D;
class V;

class V {
 public:
	V() { _P; }
	V(int i) { _P; }
	V(double d) { _P; }
	V(const char* s) { _P; }
	V(const V& d) { _P; }
	V(const D& d) { _P; }

	operator D() const { _P; D _v; return _v; }
  operator double() const { _P; return 1.1; }
  operator int() const { _P; return 1; }
	operator const char*() const { _P; return "foo"; }

	V& operator=(int i) { _P; return *this; }
	V& operator=(double d) { _P; return *this; }
	V& operator=(const char* s) { _P; return *this; }
	V& operator=(const V& d) { _P; return *this; }
	V& operator=(const D& d) { _P; return *this; }
};

#endif
