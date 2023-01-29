#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
int main(){
    double long a, b, h, x, y, s, p;
    int n, i;
    std::cout << "Vvedite a,b,n" << std::endl;
    std::cin >> a >> b >> n;
    h=(b-a)/10;
  for (x =a ; x<=b; x+=h)
  {

    y=x * atan(x) - log(pow(1+x*x, 1/2));
    for(i=0;i<n;i++){
    s=x*x/2;
    s+=pow(-1,i+1) * pow(x, 2*i)/(2*i*(2*i-1)); 
    }
    
    std::cout<< std::setw(30)<< x << std::setw(30) << y<< std::setw(30)<< s << std::endl;
  }
 
}