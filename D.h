#if !defined __D_INC
#define __D_INC

#include "P.h"

class D;
class V;

class D {
 public:
	D() { _P; }
	D(int i) { _P; }
	D(double d) { _P; }
	D(const D& d) { _P; }
	D(unsigned short y, unsigned short m, unsigned short d) { _P; }

	static D get() { _P; D d; return d; }

	D& operator =(const D& rhs) { _P; return *this; }
	D& operator =(const double rhs) { _P; return *this; }

	D operator +(const D& rhs) const { _P; D d; return d; }
	D operator +(const double rhs) const { _P; D d; return d; }
  D operator +(const int rhs) const { _P; D d; return d; }

  operator const char*() const { _P; return "foo"; }
	operator double() const { _P; return 0.0; }
};

#endif
