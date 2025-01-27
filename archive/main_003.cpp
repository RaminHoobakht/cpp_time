#include <ctime>
#include <iomanip>
#include <iostream>

int main() {

    constexpr char msg_time_one[]{" time        : "};
    constexpr char msg_time_two[]{" current time: "};

    const std::time_t my_time{time(nullptr)};
    const std::tm *my_time_st{std::localtime(&my_time)};

    std::cout << msg_time_one << std::put_time(my_time_st, "%c") << '\n';

    const char *time_string{std::asctime(my_time_st)};
    std::cout << msg_time_two << time_string << '\n';

    std::cout << "\n #(11:07:27): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
