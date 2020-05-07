#include "Circuit.h"
#include "SeriesCircuit.h"
#include "ParallelCircuit.h"

using namespace std;

Circuit::Circuit(int res)
{
	res = _resistance;

	arr1 = new int[3];
	arr2 = new int[3];
	
}

Circuit::~Circuit()
	{
	

	delete[] arr1;
	delete[] arr2;

	}
