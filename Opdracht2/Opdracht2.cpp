#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int input;
int randomNumber;
int maxRandomNumber = 1000;
int minRandomNumber = 100;

int sleepTime = 2000;

int main()
{
    puts("We are going to play a little game of Simon Says");

    Sleep(3000);

    system("cls");

    srand(time(NULL));

    while (true)
    {
        randomNumber = rand()%(maxRandomNumber-minRandomNumber + 1) + minRandomNumber;

        cout << randomNumber;

        Sleep(sleepTime);

        system("cls");

        printf("Simon says: Repeat the number: ");
        scanf_s("%d", &input);

        if (input == randomNumber)
        {
            system("cls");
            puts("Well done, here's the next one \n");
            
            maxRandomNumber *= 10;
            minRandomNumber *= 10;
        }
        else
        {
            system("cls");
            puts("SIMON ANGRY");

            Sleep(2000);

            break;
        }
    }
}

