#include<iostream>
using namespace std;

static bool test(int nums[], int arr_length)
         {
            for (int i = 0; i < arr_length - 1; i++)
             {
                if (nums[i] == 5 && nums[i] == nums[i + 1]) return true;
              }

            return false;
          }  
               
int main() 
 {  
  int nums1[] = { 1, 5, 6, 9, 10, 17 };
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = { 1, 5, 5, 9, 10, 17 };
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = { 1, 5, 5, 9, 10, 17, 5, 5 };
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
  return 0;    
}
