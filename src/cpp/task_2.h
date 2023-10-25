#ifndef DATA_STRUCTURE_AND_ALGORITHMS_TASK_2_H
#define DATA_STRUCTURE_AND_ALGORITHMS_TASK_2_H
#include <iostream>

class Guesser{
        public:
        void Randomness() {
            int random = rand() % 100;

            int guess;
            int attempts = 0;

            do {
                std::cout << "Enter your guess number from 1 to 100: ";
                std::cin >> guess;

                if (random - guess > 10 )  {
                    std::cout << "Too low! Try again." << std::endl;
                } else if (guess - random > 10)  {
                    std::cout << "Too high! Try again." << std::endl;
                } else if ((random - guess <= 5 && random - guess > 0) || (guess - random <= 5 && guess - random > 0)){
                    std::cout << "Almost there. Keep going!" << std::endl;
                }

                attempts++;

            } while (guess != random);

            std::cout << "   Congratulations, you got this." << std::endl;
        }
};
#endif //DATA_STRUCTURE_AND_ALGORITHMS_TASK_2_H
