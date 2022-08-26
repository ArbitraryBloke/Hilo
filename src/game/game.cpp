//
// Created by ajay on 8/26/22.
// contains all the game logic
#include "game.h"
#include"my_utilities.h"
#include<iostream>

void print_message(bool is_too_low)
{
    if(is_too_low)
    {
        std::cout<<"The number is too low.\n";
    }
    else
    {
        std::cout<<"The number is too high.\n";
    }
}
void run_game()
{
    do_something();
}