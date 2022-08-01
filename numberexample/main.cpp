/* #include <iostream>

int main(){

    std::cout << "Hello World! \n";

    return 0;
}
*/

#include <iostream>
#include <iomanip>


int main(){

    //Declare and initialize the variables
    float number1 {1.2345678901234567890f}; //Precision 7
    double number2 {1.2345678901234567890}; //Precision 15
    long double number3 {1.2345678901234567890L}; //Precision

    //Print out the sizes
    std::cout << "size of float: " << sizeof(float) << std::endl;
    std::cout << "size of double: " << sizeof(double) << std::endl;
    std::cout << "size of long double: " << sizeof(long double) << std::endl;

    //Print sizes of numbers
    std::cout << std::setprecision(20); // control the precision from std::cout
    std::cout << "number1 is: " << number1 << std::endl; // 1.2345678|806304931641
    std::cout << "number2 is: " << number2 << std::endl; // 1.234567890123456|6904
    std::cout << "number3 is: " << number3 << std::endl; // 1.234567890123456789| zero of course not shown

    // Float problems : precision is usually too limited
    // for a lot of applications
    float number4 {192400023.0f};   // Error : narrowing conversion

    std::cout << "number4 is: " << number4 << std::endl;

    std::cout << "-----------------------------------------" << std::endl;
    // Scientific notation
    // What we have seen so far in terms of floating point types
    // is fixed notation. There is another notation, scientific
    // that is handy if you have really huge number or small numbers
    // to represent

    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};       // Can omit the lower 00023
                                    // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11};     // multiply with 10 exp(-11)

    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;

    return 0;
}






