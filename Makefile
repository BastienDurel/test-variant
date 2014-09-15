S=m.cpp
O=$(S:.cpp=.o)
N=tst

ifndef GCC
CXX=clang++
endif
CXXFLAGS=--std=c++11

all: $(N)
test: all
	./$(N)
$(N): $(O)
	$(CXX) -o $@ $(O)
m.o: D.h V.h P.h m.cpp
clean:
	rm -f $(O) *~
fclean: clean
	rm -f $(N)
