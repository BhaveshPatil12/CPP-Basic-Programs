#include<iostream>
#include<string.h>
using namespace std;
int *odds;
int * test(int * nums, int n) {
            odds = new int[n];
            int j = 0;

            for (int i = 0; j < n; i++)
            {
                if (nums[i] % 2 != 0)
                {
                    odds[j] = nums[i];
                    j++;
                }
            }

            return odds;
}


int main() {

  int nums[] = {1,2,3,4,5,6,7,8,9};
  int * result_array;
  int arr_length = sizeof(nums) / sizeof(nums[0]);
  cout << "Original array elements: " << endl;
  for (int i = 0; i < arr_length; i++) {
    std::cout << nums[i] << ' ';
  }
  int n = 3;
  odds = test(nums, n);
  cout << "\n\nNew array of odd numbers " << "(length = " << n <<")" <<" from the said array: " << endl;
  for (int i = 0; i < n; i++) {
    std::cout << odds[i] << ' ';
  }
  n = 5;
  odds = test(nums, n);
  cout << "\n\nNew array of odd numbers " << "(length = " << n <<")" <<" from the said array: " << endl;
  for (int i = 0; i < n; i++) {
    std::cout << odds[i] << ' ';
  }
  delete[] odds;
  return 0;
}