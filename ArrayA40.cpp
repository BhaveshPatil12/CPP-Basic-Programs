#include<iostream>
using namespace std;
bool test(int nums[]) {
    return nums[0] != 15 && nums[0] != 20 && nums[1] != 15 && nums[1] != 20;
    }

int main () {
  int nums1[] = { 12, 20 }; 
  int nums2[] = { 14, 15 };
  int nums3[] = { 11, 21 };
  cout << test(nums1) << endl;
  cout << test(nums2) << endl;
  cout << test(nums3) << endl;    
   return 0;
}