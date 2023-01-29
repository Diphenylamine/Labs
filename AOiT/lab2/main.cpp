#include <stdio.h>
#include <iostream>
#include <cmath>
    int main(){
    double x, f, y, b;
    int k;

    // Веселье
    auto t1 = "bob", t2 = "wow";
    std::cout << (unsigned long long)t1 << std::endl;
    std::cout << (unsigned long long)t2 << std::endl;
    if (t1 + 4 == t2)
    {
        std::cout << "wow\n";
    }

    std::cout<<"write x=";
    if (std::cin>> x)
    { std::cout<<"write y="; 
        if (std::cin>> y)
        {
            std::cout<<"Chose f: 1 - sh(x), 2 - x^2, 3 - exp(x)\n";
            if (std::cin>> k)
            {
    switch (k)
    {
    case 1: f=sinh(x);
        break;
    case 2: f=x*x;
        break;
    case 3: exp(3);
        break;
    default: std::cout<<"didnt choosing function";
        return 1;
        break;
    }

    if (f > 0)
    {
        b=(x*x+f*f)/2;
    }else 

    if (f < 0)
    {
        b=log(fabs(f*f*f)) + cos(f);
    }else b=pow(sin(y) * sin(y), 1 / 3);
    std::cout << "b ="<<b<< std::endl;
    return 0;
            } else std::cout << "Error";
        } else std::cout << "Error";
    } else std::cout<<"Error";
}
    