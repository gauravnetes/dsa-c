// Find out the Time Complexity

#include <stdio.h>

void func(int n)
{
    int sum = 0;
    int product = 1;
    // This func is k1
    // Time for k1 = t1
    for (int i = 0; i < n; i++)   // will run from 0 to n
    {
        for (int j = 0; j < n; j++)   // will run from 0 to n
        {
            printf("%d, %d\n", i, j);  //This func is k2. Time for k2 is k2*n^2
        }
    }
}
// Time complexity for this will be bigO(n^2)
int main()
{
    func(5);
    return 0;
}