#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

int main()
{
    // Get current time
    std::time_t t = std::time(nullptr);
    std::tm* today = std::localtime(&t);

    // Parse birthday
    std::tm birthday = {};
    std::istringstream ss("25/12/1961");
    ss >> std::get_time(&birthday, "%d/%m/%Y");

    // Print birthday in "MMMM dd, yyyy" format
    char buffer[100];
    std::strftime(buffer, sizeof(buffer), "%B %d, %Y", &birthday);
    std::cout << buffer << std::endl;

    // Print today's full format
    std::strftime(buffer, sizeof(buffer), "%c", today);
    std::cout << "Today full format: " << buffer << std::endl;

    // Print today's date only
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", today);
    std::cout << "Today just date: " << buffer << std::endl;

    // Print birthday full format
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", &birthday);
    std::cout << "Birthday full format: " << buffer << std::endl;

    return 0;
}
