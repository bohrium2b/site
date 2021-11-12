#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get birth year after 1924
    int birth_year = get_int("What is your birth year? ");
    int zodiac_num = 0;
    // TODO

    // Zodiac sign
    string zodiac_sign;
    // Depending on the person's zodiac number, assign zodiac sign
    switch (zodiac_num)
    {
        case 0:
            zodiac_sign = "Rat";
            break;
        case 1:
            zodiac_sign = "Ox";
            break;
        case 2:
            zodiac_sign = "Tiger";
            break;
        case 3:
            zodiac_sign = "Rabbit";
            break;
        case 4:
            zodiac_sign = "Dragon";
            break;
        case 5:
            zodiac_sign = "Snake";
            break;
        case 6:
            zodiac_sign = "Horse";
            break;
        case 7:
            zodiac_sign = "Goat";
            break;
        case 8:
            zodiac_sign = "Monkey";
            break;
        case 9:
            zodiac_sign = "Rooster";
            break;
        case 10:
            zodiac_sign = "Dog";
            break;
        case 11:
            zodiac_sign = "Pig";
            break;
    }
    // Print out person's zodiac sign
    printf("Your zodiac sign is the %s\n", zodiac_sign);
}
