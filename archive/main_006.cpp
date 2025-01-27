#include <cmath>
#include <ctime>
#include <exception>
#include <iostream>

constexpr std::clock_t counting_operation() noexcept(false);

int main() {

    std::cout << "\n Start counting ...\n";
    std::clock_t duration{counting_operation()};
    std::cout << '\n' << " duration is: " << duration << '\n';

    std::cout << "\n #Time(05:17:19): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

constexpr std::clock_t counting_operation() noexcept(false) {

    std::clock_t clock_start{};
    std::clock_t clock_end{};

    clock_start = clock();

    try {

        for (size_t i{1}; i < 5'790'000'001; ++i) {
            if (i / i + 1 == 3) {
                std::cout << "Wonderful ...\n";
            }
        }

    } catch (std::exception &ex) {
        std::cerr << ex.what() << std::endl;
        exit(EXIT_FAILURE);
    }

    clock_end = clock();
    std::clock_t duration{(clock_end - clock_start) / CLOCKS_PER_SEC};

    return duration;
}
