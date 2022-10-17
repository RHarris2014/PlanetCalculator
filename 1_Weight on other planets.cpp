#include <iostream>


using namespace std;

int main()
{

    string name;
    double weight;

    double Mercury = 0.41;
    double Venus = 0.89;
    double Earth = 1;
    double Mars = 0.38;
    double Jupiter = 2.53;
    double Saturn = 1.07;
    double Uranus = 1.09;
    double Neptune = 1.17;
    double Pluto = 0.09;


    cout << "Hi there! Please enter your name to begin." << endl;
    cout << endl;
    cout << "Your name: ";
    cin >> name;
    cout << endl;
    cout << "Hello, " << name << "!" << endl;
    cout << endl;


    cout << "Next, what is your weight in pounds? - ";
    cin >> weight;
    cout << endl;
    cout << "Okay " << name;
    cout << ", you weigh " << weight;
    cout << " lbs? Great!" << endl;
    cout << "Now, I want to show you how much you would weigh on each planet of our solar system:" << endl;
    cout << endl;


    cout << "Mercury: " << (0.41 * weight) << " lbs." << endl;
    cout << "Venus: " << (0.89 * weight) << " lbs." << endl;
    cout << "Earth: " << (1 * weight) << " lbs." << endl;
    cout << "Mars: " << (0.38 * weight) << " lbs." << endl;
    cout << "Jupiter: " << (2.53 * weight) << " lbs." << endl;
    cout << "Saturn: " << (1.07 * weight) << " lbs." << endl;
    cout << "Uranus: " << (1.09 * weight) << " lbs." << endl;
    cout << "Neptune: " << (1.17 * weight) << " lbs." << endl;
    cout << "Pluto: " << (0.09 * weight) << " lbs." << endl;

    cout << endl;
    cout << "Crazy to think about, isn't it " << name << "? Right now you weigh " << weight << " lbs. on Earth, but could weigh as much as " << Jupiter * weight << " lbs." << endl;
    cout << "on Jupiter, or as little as " << Pluto * weight << " lbs. on Pluto." << endl;
    return 0;
}
