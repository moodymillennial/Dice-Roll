///////////////////////////////////////////////////////////////////////////
// Joshua Stromberg
// Input: User just needs to initiate program
// Output: Program outputs how many times total dice was rolled
// Process: Array stores counts of how many times total was rolled
//          For loop makes sure dice are rolled only 10,000 times, and
//          through a switch case, stores amounts stored in array.
//////////////////////////////////////////////////////////////////////////
 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
// created global array starting at 0 to count rolls
int rollStored[11] = {0,0,0,0,0,0,0,0,0,0,0};
 
// declare our second function in advance
int rand_int(int num);
 
int main ()
{
    // random function as described in lab
    srand((unsigned) time(NULL));
    // num = 6 for a six sided die
    int num = 6;
    // for loop to execute 10,000 rolls and increase by one
    for (int i = 0; i < 10000; i++)
    {
        rand_int(num);
    }
    // print cases of dice totals 11 timesi
    for (int x = 0; x <= 10; x++)
    {
        cout << "Dice total " << x+2 << ", rolled " << rollStored[x] << " times " << endl;
    }
    return 0;
}
 
int rand_int(int num)
{
    // answer one and answer two represent the two six sided dice
    int answerOne;
    int answerTwo;
    // find remainder of num because num = 6, representing the six sided die
    answerOne = (rand() % num) + 1;
    answerTwo = (rand() % num) + 1;
    // add both dice together to get total sum of roll
    int answerTotal;
    answerTotal = answerOne + answerTwo;
    // switch cases will store rolls in array based on total value of roll
    switch(answerTotal)
    {
        case 2 :
            rollStored[0]++;
            break;
             
        case 3 :
            rollStored[1]++;
            break;
             
        case 4 :
            rollStored[2]++;
            break;
             
        case 5 :
            rollStored[3]++;
            break;
             
        case 6 :
            rollStored[4]++;
            break;
             
        case 7 :
            rollStored[5]++;
            break;
             
        case 8 :
            rollStored[6]++;
            break;
             
        case 9 :
            rollStored[7]++;
            break;
             
        case 10 :
            rollStored[8]++;
            break;
             
        case 11 :
            rollStored[9]++;
            break;
             
        case 12 :
            rollStored[10]++;
            break;
         
        default :
            return 0;
    }
    return 0;
}
