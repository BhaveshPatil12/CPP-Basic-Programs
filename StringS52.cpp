#include<iostream>
#include<string>
using namespace std;
int main()
{
    std::string org, dup;
    int result = -1, i = 1;
    std::cout<<"Enter Original String:";
    getline(std::cin, org);
    std::cout<<"Enter Pattern String:";
    getline(std::cin, dup);
    do
    {
        result = org.find(dup, result + 1);
        if (result != -1)
            std::cout<<"\nInstance:"<<i<<"\tPosition:"<<result<<"\t";
        i++;
    } while (result >= 0);
    return 0;
}