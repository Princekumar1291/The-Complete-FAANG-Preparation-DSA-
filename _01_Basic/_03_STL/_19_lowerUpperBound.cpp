// // C++ code to demonstrate the working of lower_bound()
// #include <bits/stdc++.h>
// using namespace std;

// // Driver's code
// int main()
// {
// 	// initializing vector of integers
// 	// for single occurrence
// 	vector<int> arr1 = { 10, 15, 20, 25, 30, 35 };

// 	// initializing vector of integers
// 	// for multiple occurrences
// 	vector<int> arr2 = { 10, 15, 20, 20, 25, 30, 35 };

// 	// initializing vector of integers
// 	// for no occurrence
// 	vector<int> arr3 = { 10, 15, 25, 30, 35 };

// 	// using lower_bound() to check if 20 exists
// 	// single occurrence
// 	// prints 2
// 	cout << "The position of 20 using lower_bound "
// 			" (in single occurrence case) : ";
// 	cout << lower_bound(arr1.begin(), arr1.end(), 20)
// 				- arr1.begin();

// 	cout << endl;

// 	// using lower_bound() to check if 20 exists
// 	// multiple occurrence
// 	// prints 2
// 	cout << "The position of 20 using lower_bound "
// 			"(in multiple occurrence case) : ";
// 	cout << lower_bound(arr2.begin(), arr2.end(), 20)
// 				- arr2.begin();

// 	cout << endl;

// 	// using lower_bound() to check if 20 exists
// 	// no occurrence
// 	// prints 2 ( index of next higher)
// 	cout << "The position of 20 using lower_bound "
// 			"(in no occurrence case) : ";
// 	cout << lower_bound(arr3.begin(), arr3.end(), 20)
// 				- arr3.begin();

// 	cout << endl;
// }












// C++ code to demonstrate the working of upper_bound()
#include <bits/stdc++.h>
using namespace std;

// Driver's code
int main()
{
	// initializing vector of integers
	// for single occurrence
	vector<int> arr1 = { 10, 15, 20, 25, 30, 35 };

	// initializing vector of integers
	// for multiple occurrences
	vector<int> arr2 = { 10, 15, 20, 20, 25, 30, 35 };

	// initializing vector of integers
	// for no occurrence
	vector<int> arr3 = { 10, 15, 25, 30, 35 };

	// using upper_bound() to check if 20 exists
	// single occurrence
	// prints 3
	cout << "The position of 20 using upper_bound"
			" (in single occurrence case) : ";
	cout << upper_bound(arr1.begin(), arr1.end(), 20)
				- arr1.begin();

	cout << endl;

	// using upper_bound() to check if 20 exists
	// multiple occurrence
	// prints 4
	cout << "The position of 20 using upper_bound "
			"(in multiple occurrence case) : ";
	cout << upper_bound(arr2.begin(), arr2.end(), 20)
				- arr2.begin();

	cout << endl;

	// using upper_bound() to check if 20 exists
	// no occurrence
	// prints 2 ( index of next higher)
	cout << "The position of 20 using upper_bound"
			" (in no occurrence case) : ";
	cout << upper_bound(arr3.begin(), arr3.end(), 20)
				- arr3.begin();

	cout << endl;
}


//vector<int> v = {1, 2, 4, 4, 6, 8, 10};

// auto lb = lower_bound(v.begin(), v.end(), 4); // First element >= 4
// auto ub = upper_bound(v.begin(), v.end(), 4); // First element > 4

// cout << "Lower bound: " << *lb << std::endl; // 4
// cout << "Upper bound: " << *ub << std::endl; // 6