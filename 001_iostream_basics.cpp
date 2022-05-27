#include <iostream>

// DEMONSTRATES COUT, CIN, ENDL, VARIABLES, AND COMMENTING

int main()
{
    std::cout << "\nBEGIN PROGRAM." << std::endl;
    
    std::cout << "\nEnter two numbers, separated by a space:\n";

    int x{};
    int y{};

    std::cin >> x >> y;
    std::cout << "\nyou entered: " << x << " and " << y << ".\n" << std::endl;
    std::cout << "END PROGRAM.\n" << std::endl;
    
    return 0;
}
