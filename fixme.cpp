#include <iostream>

// Git laboratory 2, variant 1.
// A training replacement created for this exercise, not the teacher's original.
// This program compiles but contains three intentional calculation errors.
// Both participants should edit the same function to practice merge conflicts.

int calculateSum(int a, int b)
{
    // TODO: return the sum of the two numbers.
    return a - b;
}

int findMaximum(int a, int b)
{
    // TODO: return the larger of the two numbers.
    return (a < b) ? a : b;
}

double calculateAverage(int a, int b)
{
    // TODO: preserve the fractional part of the arithmetic mean.
    return (a + b) / 2;
}

int main()
{
    const int a = 8;
    const int b = 3;

    std::cout << "Git lab 2: variant 1\n";
    std::cout << "Numbers: " << a << ", " << b << '\n';
    std::cout << "Sum: " << calculateSum(a, b) << '\n';
    std::cout << "Maximum: " << findMaximum(a, b) << '\n';
    std::cout << "Average: " << calculateAverage(a, b) << '\n';

    // Expected after fixes: Sum = 11, Maximum = 8, Average = 5.5.
    return 0;
}
