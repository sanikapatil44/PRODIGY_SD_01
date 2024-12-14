#include <iostream>
#include<iomanip>

using namespace std;


void convertCelsius(double celsius) {
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;
    cout << fixed << setprecision(2);
    cout << celsius << " °C = " << fahrenheit << " °F" << endl;
    cout << celsius << " °C = " << kelvin << " K" << endl;
}

void convertFahrenheit(double fahrenheit) {
    double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    double kelvin = celsius + 273.15;
    cout << fixed << setprecision(2);
    cout << fahrenheit << " °F = " << celsius << " °C" << endl;
    cout << fahrenheit << " °F = " << kelvin << " K" << endl;
}

void convertKelvin(double kelvin) {
    double celsius = kelvin - 273.15;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << fixed << setprecision(2);
    cout << kelvin << " K = " << celsius << " °C" << endl;
    cout << kelvin << " K = " << fahrenheit << " °F" << endl;
}

int main() {
    double temperature;
    char unit;

    cout << "Enter temperature value: ";
    cin >> temperature;
    cout << "Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    switch (unit) {
        case 'C':
        case 'c':
            convertCelsius(temperature);
            break;
        case 'F':
        case 'f':
            convertFahrenheit(temperature);
            break;
        case 'K':
        case 'k':
            convertKelvin(temperature);
            break;
        default:
            cout << "Invalid unit entered. Please use C, F, or K." << endl;
            break;
    }

    return 0;
}