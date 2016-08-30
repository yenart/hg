#include <iostream>

int main()
{
    int number_1, number_2, number_3, number_4, number_5;
 
    std::cout << "enter five integers!" << std::endl;
    std::cin >>  number_1 >> number_2 >>  number_3 >>  number_4 >>  number_5;
    std::cout << std::endl;
 
    int min =  number_1;
    int max =  number_1;
 
    if ( number_2 <=  min)
        min =  number_2;
    if ( number_3 <=  min)
        min =  number_3;
    if ( number_4 <=  min)
        min =  number_4;
    if ( number_5 <=  min)
        min =  number_5;
 
    if ( number_2 >=  max)
        max =  number_2;
    if ( number_3 >=  max)
        max =  number_3;
    if ( number_4 >= max)
        max =  number_4;
    if ( number_5 >=  max)
        max =  number_5;
 
    std::cout << "min = " << min << std::endl;
    std::cout << "max = " << max << std::endl;
    
    return 0;
}
