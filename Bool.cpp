#include <iostream>

int main()
{
    bool red_Light{true};
    bool Green_light(false);

    if(red_Light)
    {
        std::cout<< "The Red Light is On"<<std::endl;
    }
    else
    {
        std::cout <<"The Red Light Is Off"<< std::endl;
    }
    return 0;
}