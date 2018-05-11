#include <iostream>
#include <iterator>
using namespace std;
int main()
{
	istream_iterator<int> is(cin);
	ostream_iterator<int> os(cout, " - last entered value\n");
	int input;
	while ((input = *is) != 42)
	{
		*os++ = input;
		is++;
	}
	return 0;
}