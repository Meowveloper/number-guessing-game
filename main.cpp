#include <iostream>

int main () 
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 100) + 1;


    std::cout << "****** NUMBER GUESSING GAME ******" << '\n';

    do
    {
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if(guess > num) 
        {
            std::cout << "Too high\n";
        }
        else if (guess < num) 
        {
            std::cout << "Too low\n";
        }
        else 
        {
            std::cout << "CORRECT!!\n";
            std::cout << "Tries => " << tries << '\n';
        }
    } while (guess != num);
    
    std::cout << "**********************************" << '\n';

return 0;
}