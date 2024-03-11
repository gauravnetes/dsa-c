// Find out the Time Complexity
#include <stdio.h>

void foo(int array[], int length)
{
    int sum = 0;
    int product = 31;
    // This function is f1
    // time of f1=k1
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    // This function is f2
    // time of f2=k2*n [as the loop is running n times where n = length]
    for (int i = 0; i < length; i++)
    {
        product *= array[i];
    }
    // This function is f3
    // time of f3 = k3*n [as the loop is running n times where n= length]

    // Now consider the total time = Tn
    // Tn = f1+f2+f3 = k1 + (n*k2) + (n*k3)
    // If we delete the non dominant term then k1 will be deleted
    // now taking n as common == n(k2+k3)
    // consider k2+k3 as k4 so it will become == k4*n == O(n) --> that is the time complexity
    // and for this program n = length so time complexity == O(length)
}
int main()
{
    int arr[] = {3, 5, 66};
    foo(arr, 3);
    return 0;

    return 0;
}