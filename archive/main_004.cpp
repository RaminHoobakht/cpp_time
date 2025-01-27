#include <ctime>
#include <iomanip>
#include <iostream>

int main() {

    std::time_t my_time_t{time(nullptr)};
    std::tm my_time_st{*std::localtime(&my_time_t)};

    std::cout << std::put_time(&my_time_st, "%c");
    std::cout << '\n';


    std::cout << "\n #Time(08:28:04): Time Project: The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
