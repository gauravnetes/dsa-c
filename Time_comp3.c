#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_random(int a) {
    return rand() % (a + 1);
}

int function(int n);

int main() {
    srand(time(NULL)); // Seed the random number generator
    int result = function(6);
    printf("Result: %d\n", result);
    return 0;
}
int function(int n)
{
    int i; // This func is k1, k1=0
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = my_random(n - 1); // This is taking 1 unit of time.
        // The question is basically how much time random will be called for t = 6
        // random[6] = [0,6] will return
        // T6 --->T(0) T5----> T(0) T4----> T(0) T3---> T(0) T2---> T(0) T1---> T(0) T(0)
        // T6, T5, T4, T3, T2, T1 WILL TAKE 1 UNIT OF TIME WHICH ADDED WILL BE 6
        // So the random call will be 6 times
        printf("this\n"); //Will print this for 6 times as T(6)
        return function(i) + function(n - 1 - i);
    }
}
