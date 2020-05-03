#include "Circuit.h"
#

using namespace std;

Circuit::Circuit()
{
	arr1 = new int[3];
	arr2 = new int[3];

}

Circuit::~Circuit()
	{

	delete[] arr1;
	delete[] arr2;

	}
