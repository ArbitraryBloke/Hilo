
#include "game.h"
#include <string>


int main(int argc, const char** argv)
{
    const bool print_info{!(argc == 1 || argv[1] == std::string{"run"})};
    run_game(print_info);
    return 0;
}
