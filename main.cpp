#include <iostream>
#include <cmath>

using namespace std;


double f(double x)
{
    const double alpha = 0.1;
    return sin(x) - alpha*x;
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

int main(int argc, char *argv[])
{

 double pi = 2*asin(1);
 cout << dichotomy(pi/2 , 3*pi/2 , 0.001) << endl;
 return 0;
}
