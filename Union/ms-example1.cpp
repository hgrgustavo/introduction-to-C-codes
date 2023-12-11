//  for MyVariant
#include <crtdbg.h>
#include <new>
#include <utility>

// for sample objects and output
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct A
{
	A() = default;
	A(int i, const string& str) : num(i), name(str) {}
	
	int num;
	string name;
	//	...
};
struct B
{
	B() = default;
	B(int i,const string&str):num(i), name(str) {}

	int num;
	string name;
	vector<int> vec;
	//	...
};
enum class Kind { None, A, B, Integer };
#pragma waring (push)
#pragma warning (disable:4624)
class MyVariant
{
public:
	MyVariant()
		: kind_(Kind::None)
	{
	}
	
	MyVariant(Kind kind)
		: kind_(kind)
	{
		switch (kind_)
		{
		case Kind::None:
			break;
		case Kind::A:
			new (&a_) A();
			break;
		case Kind::B:


		}
	}
};

