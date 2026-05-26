CXX=g++
CXXFLAGS=-Wall

build:
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/calculator.cpp tests/test.cpp -o build/test

run:
	./build/test

clean:
	rm -rf build