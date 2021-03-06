// AbseilDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <list>
#include <vector>

#include "absl/utility/utility.h"
#include "absl/base/attributes.h"
#include "absl/algorithm/algorithm.h"

int main()
{
	int result = absl::integer_sequence<int>::size();
	result = absl::integer_sequence<int, 0>::size();

	std::vector<int> v1{ 1, 2, 3 };
	std::vector<int> v2 = v1;
	std::vector<int> v3 = { 1, 2 };
	std::vector<int> v4 = { 1, 2, 4 };

	bool res = absl::equal(v1.begin(), v1.end(), v2.begin(), v2.end());

	getchar();

	return 0;
}
