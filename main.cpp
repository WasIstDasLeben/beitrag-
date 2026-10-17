#include <iostream>                 //Includes the preprosssser already defined


//output some text when called
void textOutput()
{
    std::cout<< "Starting\n";
    std::cout << "No matter how hard it gets please keep moving and belive in yourself\n";
    std::cout << "Ending";

}

//calls the textOutput function when called
void doPrint()
{
    textOutput();
}

//calls the funtion
int main()
{
    doPrint();
    return 0;
}
