
#include "game.h"
#include "hilo_config.h"
#include<iostream>
#include<string>
#include <iomanip>

static void print_info()
{
    std::cout << "Hilo v" << Hilo_VERSION_MAJOR << '.'
              << Hilo_VERSION_MINOR << '.' << Hilo_VERSION_PATCH << '\n';
    std::cout << "Usage: hilo\n"
              << std::setw(16) << "hilo run\n";
}

int main(int argc, const char** argv)
{
    if (argc == 1 || argv[1] == std::string{"run"})
    {
        run_game();
    } else
    {
        print_info();
    }
    return 0;
}
