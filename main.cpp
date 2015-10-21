#include <iostream>
#include <cmath>

using namespace std;
const double alpha = 0.1;

double f(double x)
{

    return sin(x) - alpha*x;
}
double df(double x)
{

    return cos(x)- alpha;
}
double dichotomy (
       double x1,
       double x2,
       double tolerance

        // , TODO: pass f(x)
        )

{

    while (fabs(x1-x2) > tolerance)
    {
       double x3 = (x1+x2)/2;

        if (f(x3)*f(x2) < 0)
        x1 = x3;
        else x2 = x3;

  }
    return x2;
}

double newton (double x0, double tolerance)
{
    double x = x0;
    double dx;
    do

    {
        dx = -f(x) / df(x);
        x += dx;

    }
    while (fabs(dx)> tolerance);
    return x;

}

int main(int argc, char *argv[])
{

 double pi = 2*asin(1);
 cout << dichotomy(pi/2 , 3*pi/2 , 0.001) << endl;
 cout << newton (pi,1e-7);
 return 0;
}
