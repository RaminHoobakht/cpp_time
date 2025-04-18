/* calculating time duraition  */

#include "main.hpp"


int main() {


    LF;
    out << "calculating ..." << NL;
    auto start_time{std::chrono::high_resolution_clock::now()};


    // std::this_thread::sleep_for(std::chrono::seconds(3));


    for (size_t i{1LU}; i < 5'790'000'002LU; ++i) {
        if (i / i == 0LU) {
            out << "Wonderful ..." << NL;
        }
    }


    auto end_time{std::chrono::high_resolution_clock::now()};

    auto duration{std::chrono::duration_cast<std::chrono::milliseconds>(
            end_time - start_time)};
    out << "duration in milliseconds is: " << duration.count() << NL;
    SEP;

    auto duration2{std::chrono::duration_cast<std::chrono::seconds>(
            end_time - start_time)};
    out << "duration in seconds is: " << duration2.count() << NL;
    SEP;


    out << "\n #(00:00:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
