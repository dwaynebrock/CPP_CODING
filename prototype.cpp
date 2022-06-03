#include <iostream>

// FUNCTION PROTOTYPE EXAMPLE

int add(int x, int y);		//FUNCTION PROTOTYPE

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3,4) << std::endl;		
  
    return 0;
}

int add(int x, int y)		//FUNCTION WHICH WAS PROTOTYPED
{
    return x + y;
}
