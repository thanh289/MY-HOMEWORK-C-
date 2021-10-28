//BAI 3

/*define CHAR_BIT
define SCHAR_MIN
define SCHAR_MAX
define UCHAR_MAX
define CHAR_MIN
define CHAR_MAX
define MB_LEN_MAX
define SHRT_MIN
define SHRT_MAX
define USHRT_MAX
define INT_MIN
define INT_MAX
define UINT_MAX
define LONG_MIN
define LONG_MAX
define ULONG_MAX
define LLONG_MIN
define LLONG_MAX
define ULLONG_MAX*/
#include <climits>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// From the constant of climits
	// header file
	long long valueFromLimits = LONG_LONG_MAX;

	cout << "Value from climits "
		<< "constant (maximum): ";
	cout << valueFromLimits << "\n";

	valueFromLimits = LONG_LONG_MIN;
	cout << "Value from climits "
		<< "constant(minimum): ";
	cout << valueFromLimits << "\n";

	// Using the wrap around property
	// of data types

	// Initialize two variables with
	// value -1 as previous and another
	// with 0 as present
	/*int previous = -1;
	int present = 0;

	// Keep on increasing both values
	// until the present increases to
	// the max limit and wraps around
	// to the negative value i.e., present
	// becomes less than previous value
	
	///Cause on some processors like graphics processing units (GPUs) and digital signal processors (DSPs) which support saturation arithmetic, 
	//overflowed results would be "clamped", i.e. set to the minimum or the maximum value in the representable range, rather than wrapped around.
	while (present > previous) {
		previous++;
		present++;
	}

	cout << "\nValue using the wrap "
		<< "around property:\n";

	cout << "Maximum: " << previous << "\n";
	cout << "Minimum: " << present << "\n";*/

	return 0;
}


