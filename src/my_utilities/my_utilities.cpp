//
// Created by ajay on 8/25/22.
//
#include"my_utilities.h"
#include<iostream>
#include<string_view>
#include<limits>
#include<random>

void ignore_line()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int get_int(std::string_view msg)
{
    while (true)
    {
        int num{};
        std::cout << msg << ": ";
        std::cin >> num;
        if (!std::cin)//extraction failed
        {
            std::cin.clear();//put cin back to 'normal' operation mode
            ignore_line();
            std::cout << "You've entered an invalid integer. Please try again.\n";
        } else
        {
            ignore_line(); //remove all the extra numbers/character that were not extracted
            return num;
        }
    }
}

char get_char()
{
    char c{};
    std::cin >> c;
    return c;
}

int get_random_int(int first, int last)
{
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<> distribution(first, last);
    return distribution(gen);
}