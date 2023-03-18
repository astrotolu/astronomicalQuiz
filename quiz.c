#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>

struct quiz
{

    char Questions[100];
    char answers[4][100];
    int correct_answer;
};

int main()
{

    struct quiz question[20];
    int num_question = 0;
    int i, j, selection;
    int points;
    int user_answer;
    int limitTime = 100;
    time_t startTime, endTime;
    double elaspedTime;

    points = 0;

    printf("\n WELCOME TO THE GAME\n\n\n");

    printf("Press 7 to start the game\n");
    printf("Presss 0 to exit the game\n");
    printf("\nEnter selection: ");

    scanf("%d", &selection);

    system("clear");

    strcpy(question[num_question].Questions, "Which one is the first serch engine?");
    strcpy(question[num_question].answers[0], "a) Bing");
    strcpy(question[num_question].answers[1], "b) Google");
    strcpy(question[num_question].answers[2], "c) Archie");
    strcpy(question[num_question].answers[3], "d) Bing");
    question[num_question].correct_answer = 3;
    num_question++;

    strcpy(question[num_question].Questions, "What is the capital of France?");
    strcpy(question[num_question].answers[0], "a) Paris");
    strcpy(question[num_question].answers[1], "b) Belguim");
    strcpy(question[num_question].answers[2], "c) Scotland");
    strcpy(question[num_question].answers[3], "d) Wales");
    question[num_question].correct_answer = 1;
    num_question++;

    strcpy(question[num_question].Questions, "What is the largest country in the world?");
    strcpy(question[num_question].answers[0], "a) USA");
    strcpy(question[num_question].answers[1], "b) China");
    strcpy(question[num_question].answers[2], "c) India");
    strcpy(question[num_question].answers[3], "d) Russia");
    question[num_question].correct_answer = 4;
    num_question++;

    time(&startTime);
    if (selection == 7)
    {

        for (i = 0; i < num_question; i++)
        {

            printf("\n%d) %s\n", i + 1, question[i].Questions);

            for (j = 0; j < 4; j++)
            {

                printf("%s\n", question[i].answers[j]);
            }

            printf("\nEnter answer(use 1 to 4): ");
            scanf("%d", &user_answer);

            if (user_answer == question[i].correct_answer)
            {

                printf("\nCORRECT!!\n");
                points += 5;
                printf("\nYou scored %d points\n", points);
            }
            else
            {

                printf("Incorrect, The correct answer is %s.\n", question[i].answers[question[i].correct_answer]);
                points -= 5;
                printf("\nYou scored %d points\n", points);
            }
        }

        time(&endTime);
        elaspedTime = difftime(endTime, startTime);

        if (elaspedTime > limitTime)
        {

            printf("Time Up!\n");
        }
        else
        {

            printf("\nQuiz completed in %.2f seconds\n", elaspedTime);
        }
    }

    else if (i == 0)
    {
        printf("\nYou have exited the game\n\n");
        return 0;
    }
    else
    {

        printf("\nInvalid\n\n");
    }

    return 0;
}