#include <ctime>
#include <iostream>

int main() {

    std::time_t my_time_t{time(nullptr)};
    std::tm my_time_st{*std::localtime(&my_time_t)};
    char *current_time{std::asctime(&my_time_st)};

    std::cout << "current time is: " << current_time << '\n';


    std::cout << "\n #(04:44:14): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
