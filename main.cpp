#include <iostream>
#include <vector>
using namespace std;


bool inOrder(const vector<int> &nums)
{

	bool ans = true;

	for(unsigned int i = 0; i + 1 < nums.size(); i++)
	{

		if(nums.at(i) > nums.at(i+1))
		{

			ans = false;

		}

	}

	return ans;

}

int main() {

	vector<int> nums1(5);
	nums1.at(0) = 5;
	nums1.at(1) = 6;
	nums1.at(2) = 7;
	nums1.at(3) = 8;
	nums1.at(4) = 3;


	if (inOrder(nums1)) {
		cout << "First vector is in order" << endl;
	}
	else {
		cout << "First vector is not in order" << endl;
	}

	vector<int> nums2(5);
   
   for(int i = 0; i < 5; i++)
   {
	
		cin >> nums2.at(i);

   }

   	if (inOrder(nums2)) {
		cout << "Second vector is in order" << endl;
	}
	else {
		cout << "Second vector is not in order" << endl;
	}

	return 0;
}