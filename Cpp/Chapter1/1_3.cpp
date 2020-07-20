#include <stdio.h>
#include <time.h>
#include <math.h>

clock_t start, stop;
double duration;
#define MAXN 10
#define MAXK 1e7

double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i = 1; i <= n; i++)
        p += (a[i] * pow(x, i)); //pow(x,i) = x*x*x*...*x
    return p;
}

double f2(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i = n; i>0; i--)
        p = a[i - 1] + x*p;
    return p;
}

//double* represents a pointer of type double, which can be used to represent double a[]
void run(double(*f)(int, double*, double), double a[], int case_n)
{
    //f is a function pointer: double(int, double*, double)
    //(*) inside means a function pointer
    int i;
    start = clock();
    for (i = 0; i < MAXK; i++)
        (*f)(MAXN - 1, a, 1.1);//* pointer means get pointer's value
    stop = clock();

    duration = ((double)(stop - start)) / CLK_TCK / MAXK;
    printf("ticks%d=%f\n", case_n, (double)(stop - start));
    printf("duration%d=% 6.2e\n", case_n, duration);
}

int main()
{
    int i;
    double a[MAXN];

    for (i = 0; i < MAXN; i++)
        a[i] = (double)i;

    run(f1, a, 1);//function's name is function pointer
    run(f2, a, 2);
    return 0;
}
