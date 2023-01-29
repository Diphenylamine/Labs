
#include <iostream>
#include <cmath> /*математические функции*/

    int
    main()
{
    double x, y;
    double A, B;

    printf("Write A in rad\n");
    printf("A=");
    std::cin >> x;

    printf("Write B in rad\n");
    printf("B=");
    std::cin >> y;

    A = 180/x;
    B = 180/y;

    double z1 = (cos(A) - cos(B)) * (cos(A) - cos(B)) - (sin(A) - sin(B)) * (sin(A) - sin(B));
    double z2 = -1 *    ((4 * sin( A- B/2)) * sin(A - B/2) * cos(A+B)); 

    printf("%lf\n", z1);
    printf("%lf\n", z1);
    printf("%lf\n", A);
    printf("%lf\n", B);


}
