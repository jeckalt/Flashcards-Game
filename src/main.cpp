#include <iostream>
#include <time.h>

void question();

int main()
{   
    char prompt;    
    std::cout << "Hello, Welcome to Flashcards" << std::endl;  
    char playAgain;

    std::cout << "Type 'q' to see FAQ, or type any other single character to begin." << std::endl;
    std::cin >> prompt;

    if (tolower(prompt) == 'q')
    {
        std::cout << "Why is there no Division?\n   There is no division because its too complicated to implement(also annoying)\n\nWhat if the answer I have is negative?\n  Just type your answer with a \"-\" in front of it." << std::endl;
    }

        std::cout << "Starting...\n" << std::endl; 
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

    while(ansCount < 50)
    {
        srand ( time(NULL) );
        int op = rand() % 4;

        if(op == 0)
        {
            int q1 = rand() % 20 + 1;
            int q2 = rand() % 20 + 1;
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
            if(wrongAns == 10)
            {
                std::cout << "Too many incorrect guesses!" << std::endl;
                break;
            }    
        }
        else if (op == 2)
        {   
            int q1 = rand() % 20 + 1;
            int q2 = rand() % 20 + 1;

            ans = q1 - q2;

            std::cout << q1 << " - " << q2 << " = ?" << std::endl;
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
        else
        {           
            int q1 = rand() % 10 + 1;
            int q2 = rand() % 10 + 1;
            ans = q1 * q2;

            std::cout << q1 << " * " << q2 << " = ?" << std::endl;
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
}