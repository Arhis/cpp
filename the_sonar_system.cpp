#include <iostream>
#include <windows.h>


struct space_objects
{
    std::string name;
    short position_from_sun;
    double radious_of_object;
    long double mass_of_object;
};

void calculating_and_printing_results(int,std::string,short, int, long double);



int main()
{
    calculating_and_printing_results(0,"Mercury", 1, 2.4E+3, 3.3E+23);
    calculating_and_printing_results(1,"Venus", 2, 6.1E+3, 4.9E+24);
    calculating_and_printing_results(2,"Earth", 3, 6.4E+3, 6E+24);
    calculating_and_printing_results(3,"Mars", 4, 3.4E+3, 6.4E+23);
    calculating_and_printing_results(4,"Jupiter", 5, 71E+3, 1.9E+27);
    calculating_and_printing_results(5,"Saturn", 6, 60E+3, 5.7E+26);
    calculating_and_printing_results(6,"Uranus", 7, 26E+3, 8.7E+25);
    calculating_and_printing_results(7,"Neptune", 8, 25E+3, 1.0E+26);

    return 0;
}

void calculating_and_printing_results( int number, std::string name,
                       short position_from_sun,
                       int radious_of_object,
                       long double mass_of_object)

{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    //-------------------------------
    space_objects planet[8]; //Making structure array of planets of The solar system

    planet[number] =
    {
        name,
        position_from_sun,
        radious_of_object,
        mass_of_object
    };
    //-------------------------------
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    cout << "                                    ";
    for (int i=1; i<=10; i++)
    {
        system("color 0A");
        cout << ".";
        Sleep(100);
    };
    //-------------------------------

    system("cls");
    system("color 07");

    cout << "======================================================" << endl;
    cout << "PLANET: " << planet[number].name << endl;
    cout << "POSITION FROM THE SUN: " << planet[number].position_from_sun << endl;
    cout << "RADIOUS: " << radious_of_object << endl;
    cout << "MASS: " << mass_of_object << " kg." << endl;
    cout << "======================================================" << endl;

    Sleep(5000);
    system("cls");
}



