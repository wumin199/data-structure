
#include <iostream>
using namespace std;

int MaxSubseqSum1(int List[], int N);
int MaxSubseqSum1(int List[], int N);
int MaxSubseqSum3(int List[], int N);
int MaxSubseqSum4(int List[], int N);

int Max3(int A, int B, int C)
{
    return A > B ? A > C ? A : C : B > C ? B : C;
}

int DivideAndConquer(int List[], int left, int right);//used in MaxSubseqSum3

int main()
{
    std::cout << "Hello World!  1.11 \n";
}

int MaxSubseqSum1(int List[], int N)
{
    int i, j, k;
    int ThisSum, MaxSum = 0;
    for (i = 0; i < N; i++)
    {
        for (j = i; j < N; j++)
        {
            ThisSum = 0;
            for (k = i; k <= j; k++)
                ThisSum += List[k];//repeat the += operation from i each time. this is redundant
            if (ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    }
    return MaxSum;
}

int MaxSubseqSum2(int List[], int N)
{
    int i, j;
    int ThisSum, MaxSum = 0;
    for (i = 0; i < N; i++)
    {
        ThisSum = 0;
        for (j = i; j < N; j++)
        {
            ThisSum += List[j];
            if (ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    }
    return MaxSum;
}

int DivideAndConquer(int List[], int left, int right)
{

    return 0;
}
