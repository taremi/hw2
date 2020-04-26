#include <iostream>
#include <ctime>
#include <cstdlib>
#include "random.hpp"

int main()
{
    int max=10;
    int min=0;
    bool quit=false;
    
while(quit==false)
{
    std::cout << "What is the max?" << std::endl;
    
    std::cin>> max;
    
    std::cout<< "What is the minimum?" << std::endl;
    std::cin>> min;
    
    srand(time(0));
    
    int random= rand() % (max-min+1) + min;
    
    std::cout << "Random number is " << random << "." << std::endl << "Enter 'y' to quit. Enter any other key to try again."<<std::endl;
    
    char c=c;
    std::cin >> c;
    
    if(c=='y')
    {quit=true;}
}
    
    return 0;
}
