#include<iostream>
#include<algorithm>
using namespace std;
string longest_Common_Prefix(string arr_strings[], int arr_size)
{
 
    int size = arr_size;
     string str = arr_strings[0];
     if(size == 1)
        return str;
    string result = "";
    int j = 1;
    for(int i=0; i<size; i++){
        while(j < size){
            if(str[i] == arr_strings[j][i]){
                j++;
            }
            else{
                return result;
            }
        }
        result += str[i];
        j = 1;
    }
    return result;
}

 
int main()
{
    string arr_strings[] = {"Padas", "Packed", "Pace", "Pacha"};
    int arr_size = sizeof(arr_strings) / sizeof(arr_strings[0]);
    cout << "The longest common prefix is: "
         << longest_Common_Prefix(arr_strings, arr_size);
    string arr_strings1[] = {"Jacket", "Joint", "Junky", "Jet"};
    arr_size = sizeof(arr_strings) / sizeof(arr_strings1[0]);
    cout << "\nThe longest common prefix is: "
         << longest_Common_Prefix(arr_strings1, arr_size);
    string arr_strings2[] = {"Bort", "Whang", "Yarder", "Zoonic"};
    arr_size = sizeof(arr_strings) / sizeof(arr_strings1[0]);
    cout << "\nThe longest common prefix is: "
         << longest_Common_Prefix(arr_strings2, arr_size);         
    return 0;
}