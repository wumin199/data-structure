#include <stdio.h>

void PrintN(int N);

int main()
{
    int N;


    //https://blog.csdn.net/dan15188387481/article/details/49622783
    //https://blog.csdn.net/Argon_Ghost/article/details/87630837
    //scanf("%d", &N);

    scanf("%d", &N);
    //scanf_s("%d", &N);

    PrintN(N);
    return 0;
}


//loop version
void PrintN(int N)
{
    int i;
    for (i = 1; i <= N; i++)
        printf("%d\n", i);
    return;
}



//recursion version
/*
void PrintN(int N)
{
    if (N > 0) {
        PrintN(N - 1);
        printf("%d\n", N);
    }
}
*/


