// Arhis(Art Reminds History Including Secrets )
#include <iostream>
#include <string>
#include <math.h>

int get_your_parameters(string);
double convert_height (int);
double convert_mass (int);
double body_mass_index (int, double);




int main()
{
    using namespace std;

    int got_foot = get_your_parameters("Please enter your height in foot: ");
    int got_pounds = get_your_parameters("Please enter your weight in pounds: ");

    cout << "The coficient of \"Body Mass Index\" is: ";
    cout << body_mass_index(convert_height(got_foot), convert_mass(got_pounds));

    return 0;
}

int get_your_parameters(string title)
{
    using namespace std;

    cout << title;
    int parameter;
    cin >> parameter;

    return parameter;
}

/*Getting meters */
double convert_height (int foot)
{
    return foot * 12 *0.254;
}

/*Getting kilograms*/
double convert_mass (int pounds)
{
    return pounds / 2.2;
}

/*Getting body mass index*/
double body_mass_index (int meters, double kilograms)
{
    return kilograms / pow(meters, 2);
}


