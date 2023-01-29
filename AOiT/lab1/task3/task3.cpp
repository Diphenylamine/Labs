#include<iostream>
#include <cmath> /*математические функции*/
const double PI = 3.14159265;
int main()
{
    double x, y, z;
    double q, w, r, t, u;
    
     printf("x=");
    std::cin >> x;

    printf("y=");
    std::cin >> y;

    printf("z=");
    std::cin >> z; 

/* 1 Де ствие */
    q = pow( x, (y+1) ) + exp(y-1);

// " действие"
    w = 1 + x * fabs(y - tan(z));

// 3 действие
    r =  1 + fabs(y - x);

// 4 дкйствие
    t = pow(fabs(y-x), 2) / 2.;  

// 5 действие
    u = pow(fabs(y - x), 3) / 3.;

//6 действие

    double h = q / w * r + t - u;

    printf("%lf\n", h);
}