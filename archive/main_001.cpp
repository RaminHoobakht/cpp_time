#include <ctime>
#include <iomanip>
#include <iostream>

int main() {

    std::tm my_time{};

    char *result{std::asctime(&my_time)};

    std::cout << std::put_time(&my_time, "%c") << '\n';
    std::cout << result << '\n';

    std::cout << "\n #(00:00:00): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
