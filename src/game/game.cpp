//
// Created by ajay on 8/26/22.
// contains all the game logic
#include "game.h"
#include"my_utilities.h"
#include<iostream>
#include<string>
#include<cassert>

enum class Message
{
    GUESS_TOO_HIGH,
    GUESS_TOO_LOW,
    GUESS_CORRECT,
    WELCOME,
};
void print_message(const Message& message,int num_of_tries=0)
{
    switch (message)
    {

        case Message::GUESS_TOO_HIGH:
            std::cout<<"Your guess is too high.\n";
            break;
        case Message::GUESS_TOO_LOW:
            std::cout<<"Your guess is too low.\n";
            break;
        case Message::GUESS_CORRECT:
            std::cout<<"Correct! You've won!\n";
            break;
        case Message::WELCOME:
            std::cout<<"Let's play! I'm thinking of a number. You have "
                     <<num_of_tries<<" tries to guess what it is.\n";
            break;
        default:
            assert(false && "Wrong enumeration constant was passed.");
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
    print_message(Message::WELCOME);
}