#include "unity.h"
#define PROJECT_NAME "MusicQuizGame"
/* Prototypes for all the test functions */
/**
 * @brief Testing function for MusicQuizGame
 * 
 */
extern void test_file();
/* Required by the unity test framework */
void setUp(void)
{}
/* Required by the unity test framework */
void tearDown(void)
{}
/* Start of the application test */
int main(void)
{
    /* Initiate the unity test framework */
    UnityBegin(NULL);
    /* Run test functions */
    RUN_TEST(test_file);
    /* Close the unity test framework */
    return(UnityEnd());
}