#include <iostream>

using namespace std;

int main()
{
    string name;
    string yesno;
    double answer;
    double answer2;
    double answer3;

    cout << "Before we begin, please enter your name: ";
    cin >> name;
    cout << endl;
    cout << "Hi, " << name << ". Today I'm going to teach you a bit about the Imperial system of measurement." << endl;

    cout << endl;
    cout << endl;
    cout << "So " << name << ", tell me, are you ready to learn? Type 'yes' to continue. ";
    cin >> yesno;

{

    if (yesno == "yes")
    {
        cout << "\nGreat! Let's begin!\n" << endl;
    }
    else {
        cout << "\nInvalid response, but whatever. I'll just move you along anyway.\n\n";
        //Type IN: cout << "Invalid response. You must type in 'yes' to move forward.";
        //Type IN a "Goodbye!" response and 'close' the program when the user types, 'no.' <-- Figure this out as well.
         }

}
    cout << "The Imperial system of measurement is used widely across the United States, and is also used " << endl;
    cout << "in Liberia and Myanmar. The Imperial system consists of four units of measurement: inches " << endl;
    cout << "feet, yards & miles" << endl;
    cout << endl;
    cout << "A mile is the largest unit of measurement in the Imperial System and consists of: 1760 yards, 5280 feet" << endl;
    cout << "& 63,360 inches." << endl;
    cout << endl;
    cout << "What if we were flying 6 miles above the ground during a flight to Miami? How many feet above the ground would that be?" << endl;

    cin >> answer;

    cout << endl;
    cout << endl;

    if (answer == 31680)
        cout << "Great, " << name << "! The answer would be 31,680 feet.\n" << endl;

               else
                cout << "Try again! If you're confused, look back to find the amount of feet in a mile and then go from there. \n" << endl;
                cout << endl;

                    while (answer!= 31680){
                        cout << "If we were flying 6 miles above the ground during a flight to Miami, how many feet about the ground would we be?" << endl;
                        cin >> answer;

                            if (answer == 31680)
                                cout << "\nGreat, " << name << "! The answer would be 31,680 feet.\n" << endl;
}

cout << "\nLets move on to another question. This time we'll be working with yards\n" << endl;
cout << "\nFor the sake of simplicity, we'll use the same scenario:\n" << endl;
cout << "\nWe're taking a trip to Miami and flying 6 miles above the ground. How many YARDS above the ground would we be?" << endl;

cin >> answer2;

cout << endl;
cout << endl;

   if (answer2 == 10560)
        cout << "That's correct, " << name << "! The answer is 10,560 yards.\n" << endl;

               else
                cout << "Try again! Remember, there are three feet in a single yard. If youre confused about what operation to use,\nperhaps try using DIVISION to get to your answer. \n" << endl;
                cout << endl;

                    while (answer2!= 10560){
                        cout << "We're taking a trip to Miami and flying 6 miles above the ground. How many YARDS above the ground would we be?" << endl;
                        cin >> answer2;

                            if (answer2 == 10560)
                                cout << "\nThat's correct, " << name << "! The answer is 10,560 yards.\n" << endl;}


cout << "\nNow for our final question...\n" << endl;
cout << "Again, we'll be using the same scenario, but with inches.\n" << endl;
cout << "You're still on your trip to Miami, and you're still flying 6 miles above the ground.\n" << endl;
cout << "How many INCHES are you above the ground?" << endl;

cin >> answer3;

cout << endl;

   if (answer3 == 380160)
        cout << "Crazy, isn't it, " << name << "? You'd be 380,160 inches above the ground." << endl;
               else
                cout << "This one was pretty difficult, so here's a hint: Start by solving the answer in FEET, and then convert FEET into INCHES." << endl;

                    while (answer3!= 380160){
                        cout << "\nWe're taking a trip to Miami and flying 6 miles above the ground. How many INCHES above the ground are you?" << endl;
                        cin >> answer3;

                            if (answer3 == 380160)
                               cout << "\nCorrect, " << name << "! The answer is 380,160 inches." << endl;}

cout << "\nGood job, " << name << ".\n";
//Figure out how to ask them if they would like to 'run' the program again?
    //IF YES: Start the program from the beginning - but maybe skip the 'name' section? or don't? idk yet.
    //IF NO: Then just close the program and potentially add a 'goodbye' message




 return 0;}


