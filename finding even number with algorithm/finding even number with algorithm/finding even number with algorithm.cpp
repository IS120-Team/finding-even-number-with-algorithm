#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector <int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


	auto result = find_if(vec.begin(), vec.end(), [](int a)
	{
		return a % 2 == 0;
	});
}


