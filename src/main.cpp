#include <iostream>
#include <time.h>

void question();

int main()
{  
    char playAgain; 
        question();
        std::cout << "Do you want to play again?[y/n]" << std::endl;
        std::cin >> playAgain;

        if(tolower(playAgain) == 'y')
            question();
        else
            return 0;
    return 0;
}

void question()
{   
    int ans;
    int usrAns;
    int ansCount = 1;
    int wrongAns = 0;

    while(ansCount < 6)
    {
        srand ( time(NULL) );
        int q1 = rand() % 100;
        int q2 = rand() % 100;

        ans = q1 + q2;

        std::cout << q1 << " + " << q2 << " = ?" << std::endl;
        std::cin >> usrAns;

        if (usrAns == ans)
        {
            std::cout << "Correct! # of correct answers " << ansCount << std::endl;
            ansCount++;
        }
        else
        {
            std::cout << "Incorrect. # of incorrect answers " << wrongAns << ". Correct answer: " << ans << std::endl;
            wrongAns++;
        }
        if(wrongAns == 3)
        {
            std::cout << "Too many incorrect guesses!" << std::endl;
            break;
        }
    }
}