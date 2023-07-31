#include <iostream>
#include <string>

std::string generate(int numOfChars, std::string specialChars);

int main()
{
    srand(time(0));

    int numOfChars;
    std::string specialChars = "";
    std::cout << "Password Length : " << std::endl;
    std::cin >> numOfChars;
    std::cout << "Special Characters Allowed : " << std::endl;
    std::cin >> specialChars;
    std::cout << std::endl;
    std::cout << "Password : " << generate(numOfChars, specialChars) << std::endl;
    
}

std::string generate(int numOfChars, std::string specialChars) {

    std::string chars = "abcdefghijklmnopqrstuvwxyz0123456789" + specialChars;
    std::string password = "";

    for (int i = 0; i < numOfChars; i++) {
        password += chars[rand() % (chars.length() - 1)];
    }

    return password;

}
