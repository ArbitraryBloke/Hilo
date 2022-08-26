//
// Created by ajay on 8/26/22.
// contains all the game logic
#include "game.h"
#include"my_utilities.h"
#include<iostream>
#include<string>

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
void init_game(int num_of_tries)
{
    std::cout<<"Let's play! I'm thinking of a number. You have "
    <<num_of_tries<<" tries to guess what it is.\n";
    for(int guess=1;guess<=num_of_tries;++guess)
    {
        int num{get_int("Guess No."+std::to_string(guess))};
        std::cout<<"You entered "<<num<<'\n';
    }
}
void run_game()
{
    init_game(3);
}