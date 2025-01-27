#include <ctime>
#include <iomanip>
#include <iostream>

int main() {

    std::tm *my_time_struct{};
    std::time_t my_time{time(NULL)};

    my_time_struct = std::localtime(&my_time);
    char *current_time{std::asctime(my_time_struct)};

    std::cout << "asctime  : " << current_time << '\n';
    std::cout << "tm struct: " << std::put_time(my_time_struct, "%c");

    std::cout << "\n #(10:42:16): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
