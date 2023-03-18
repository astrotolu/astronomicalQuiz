#include <stdio.h>
#include <string.h>

#define SLOT 4

int menu();
int setQuestion();

// set structure for multiple questions
struct quiz
{

    char question[100];
    char answer[4][100];
    int correct_answer;
};

int main()
{

    // struct quiz questions[20];
    // int numQuestions = 0;
    // int i, j, selection, user_answer;
    int selection;

    // points = 0;

    // printf("\t\t\t\xB2\xB2\xB2 Welcome to Game \xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    // printf("\nPress 7 to go to quiz\n");
    // printf("Press 0 to quit\n");
    menu();
    printf("\nEnter selection: ");
    scanf("%d", &selection);

    if (selection == 7)
    {

        // // set questions to array
        // strcpy(questions[numQuestions].question, "The existence of black holes was predicted by which eminent scientist's 'Theory of General Relativity'?");
        // strcpy(questions[numQuestions].answer[0], "a) Isaac Newton");
        // strcpy(questions[numQuestions].answer[1], "b) Albert Einstein");
        // strcpy(questions[numQuestions].answer[2], "c) Stephen Hawking");
        // strcpy(questions[numQuestions].answer[3], "d) Galileo Galilei");
        // questions[numQuestions].correct_answer = 4;
        // numQuestions++;

        // strcpy(questions[numQuestions].question, "A total solar eclipse occurs when…?");
        // strcpy(questions[numQuestions].answer[0], "a) The Moon moves between the Sun and the Earth");
        // strcpy(questions[numQuestions].answer[1], "b) The Earth moves between the Moon and the Sun");
        // strcpy(questions[numQuestions].answer[2], "c) Mars moves between the Sun and the Earth");
        // strcpy(questions[numQuestions].answer[3], "d) The Sun moves between the Earth and the Moon");
        // questions[numQuestions].correct_answer = 1;
        // numQuestions++;

        // strcpy(questions[numQuestions].question, "Our planet sits within the Solar System which sits within a galaxy. What is this galaxy called?");
        // strcpy(questions[numQuestions].answer[0], "a) Andromeda Galaxy");
        // strcpy(questions[numQuestions].answer[1], "b) Cigar Galaxy");
        // strcpy(questions[numQuestions].answer[2], "c) Eye of Sauron");
        // strcpy(questions[numQuestions].answer[3], "d) Milky Way");
        // questions[numQuestions].correct_answer = 4;
        // numQuestions++;

        // // use a loop to print out questions and answers
        // for (i = 0; i < numQuestions; i++)
        // {

        //     printf("\n%d. %s\n\n", i + 1, questions[i].question);
        //     for (j = 0; j < SLOT; j++)
        //     {

        //         printf("%s\n", questions[i].answer[j]);
        //     }

        //     printf("\nEnter correct answer (use 1 to 4): ");
        //     scanf("%d", &user_answer);

        //     if (user_answer == questions[i].correct_answer)
        //     {

        //         printf("\nCORRECT!\n");
        //         points += 5;
        //         printf("\nYou've scored %d points\n", points);
        //     }
        //     else
        //     {

        //         printf("\nIncorrect!. The answer is %s\n", questions[i].answer[questions[i].correct_answer]);
        //         points -= 5;
        //         printf("\nYou've scored %d points\n", points);
        //     }
        // }

        setQuestion();
    }
    else if (selection == 0)
    {

        printf("\nYou've exit game\n");
    }
    else
    {

        printf("\nInvalid");
        menu();
        printf("\nEnter selection: ");
        scanf("%d", &selection);
        setQuestion();
    }
}

int menu()
{

    // int selection;

    printf("\t\t\t\xB2\xB2\xB2 Welcome to Game \xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    printf("\nPress 7 to go to quiz\n");
    printf("Press 0 to quit\n");
    // printf("\nEnter selection: ");
    // scanf("%d", &selection);
}

int setQuestion()
{

    struct quiz questions[20];
    int numQuestions = 0;
    int i, j, selection, user_answer;
    int points;

    points = 0;

    // set questions to array
    strcpy(questions[numQuestions].question, "The existence of black holes was predicted by which eminent scientist's 'Theory of General Relativity'?");
    strcpy(questions[numQuestions].answer[0], "a) Isaac Newton");
    strcpy(questions[numQuestions].answer[1], "b) Albert Einstein");
    strcpy(questions[numQuestions].answer[2], "c) Stephen Hawking");
    strcpy(questions[numQuestions].answer[3], "d) Galileo Galilei");
    questions[numQuestions].correct_answer = 4;
    numQuestions++;

    strcpy(questions[numQuestions].question, "A total solar eclipse occurs when…?");
    strcpy(questions[numQuestions].answer[0], "a) The Moon moves between the Sun and the Earth");
    strcpy(questions[numQuestions].answer[1], "b) The Earth moves between the Moon and the Sun");
    strcpy(questions[numQuestions].answer[2], "c) Mars moves between the Sun and the Earth");
    strcpy(questions[numQuestions].answer[3], "d) The Sun moves between the Earth and the Moon");
    questions[numQuestions].correct_answer = 1;
    numQuestions++;

    strcpy(questions[numQuestions].question, "Our planet sits within the Solar System which sits within a galaxy. What is this galaxy called?");
    strcpy(questions[numQuestions].answer[0], "a) Andromeda Galaxy");
    strcpy(questions[numQuestions].answer[1], "b) Cigar Galaxy");
    strcpy(questions[numQuestions].answer[2], "c) Eye of Sauron");
    strcpy(questions[numQuestions].answer[3], "d) Milky Way");
    questions[numQuestions].correct_answer = 4;
    numQuestions++;

    // use a loop to print out questions and answers
    for (i = 0; i < numQuestions; i++)
    {

        printf("\n%d. %s\n\n", i + 1, questions[i].question);
        for (j = 0; j < SLOT; j++)
        {

            printf("%s\n", questions[i].answer[j]);
        }

        printf("\nEnter correct answer (use 1 to 4): ");
        scanf("%d", &user_answer);

        if (user_answer == questions[i].correct_answer)
        {

            printf("\nCORRECT!\n");
            points += 5;
            printf("\nYou've scored %d points\n", points);
        }
        else
        {

            printf("\nIncorrect!. The answer is %s\n", questions[i].answer[questions[i].correct_answer]);
            points -= 5;
            printf("\nYou've scored %d points\n", points);
        }
    }
}