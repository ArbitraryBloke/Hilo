
#include "game.h"
#include "hilo_config.h"
#include<iostream>

int main()
{
    std::cout<<"Hilo v"<<Hilo_VERSION_MAJOR<<'.'
    <<Hilo_VERSION_MINOR<<'.'<<Hilo_VERSION_PATCH<<'\n';
    run_game();
    return 0;
}
