#include <iostream>
using namespace::std;
union E
{
std::int32_t X;     
std::uint16_t M[2]; 
std::uint8_t A;    
};                      
int main()
{
E M = {0x1212121}; 
std::cout << std::hex << "First member is: " << M.X << '\n';
M.M[0] = 0x0088; 
std::cout << "Second member is: " << +M.A << '\n' 
<< "Third member is: " << M.X << '\n'; 
}