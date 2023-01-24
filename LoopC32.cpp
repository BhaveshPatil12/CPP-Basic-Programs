#include<iostream>
#include<list>
using namespace std;
list<int> test(list<int> nums) {
	       list<int> new_list;
	       list<int>::iterator it;
           for (it = nums.begin(); it != nums.end(); ++it)
            {
                new_list.push_back(*it*5);                
            }

            return new_list;
}

display_list(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << ' ';
    cout << '\n';
}

int main() {

  list<int> nums = {1,2,3,4,5,6,7,8,9};
  cout << "Original list of elements:\n";
  display_list(nums);
  list<int> result_list;
  result_list = test(nums);
  cout << "\nNew list from the said list where each element is multiplied by 5:\n";
  display_list(result_list);
  return 0;
}