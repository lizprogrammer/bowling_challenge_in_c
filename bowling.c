#include <cs50.h>
#include <stdio.h>
#include <assert.h>

void tests(void);
void testGutterGame(void);
void bowlGameInit(void);
void bowlGameRoll(int pins);
int bowlGameScore(void);
void  testAllGames(void);

int score = 0;
int MAXROLLS = 21;
int rolls[21];


int main(void)
{
    tests();
}

void testGutterGame(void)
{
    // int five = 4;
    // assert(five == 5 && "five should contain the int 5");

    bowlGameInit();
    for(int i = 0; i < 20; i++)
    {
        bowlGameRoll(1);
    }
    assert(bowlGameScore() == 0 && "Gutter game should result in 0");

}
void testAllGames(void)
{
    printf("\nTesting all games");
}

void tests(void)
{
    testGutterGame();
    testAllGames();
}

void bowlGameInit(void)
{
    score = 0;
    printf("%i", score);

}
void bowlGameRoll(int pins)
{
    score += pins;
}
int bowlGameScore()
{
    return score;
}