
#include <iostream>

char option = 'a';
int main()
{
    std::cout << "Which grade do you want in Programming 1? Choose from A to F.\n";
    std::cin >> option;
        switch (option) {
        case 'A': case 'a':
            std::cout << "Outstanding\n.";
            break;
        case 'B': case 'b':
            std::cout << "Very good\n";
            break;
        case 'C': case 'c':
            std::cout << "Good\n";
            break;
        case 'D': case 'd':
            std::cout << "Some flaws\n";
            break;
        case 'E': case 'e':
            std::cout << "Not very good...\n";
            break;
        case 'F': case 'f':
            std::cout << "Fail\n";
            break;
        default:
            std::cout << "That is not a grade!\n";
            break;
        }
}







