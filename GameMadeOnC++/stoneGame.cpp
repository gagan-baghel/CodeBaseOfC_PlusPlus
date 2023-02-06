#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
int RPS()
{
    int user = 0, computer;
    string OP[] = {"ROCK", "PAPER", "SCISSORS"};
    cout<<"***********"<<endl;
    cout<<"***********"<<endl;
    cout << "\t1.ROCK." << endl;
    cout << "\t2.PAPER." << endl;
    cout << "\t3.SCISSOR." << endl;
    cout<<"***********"<<endl;
    cout << "CHOOSE :";
    cin >> user;
    if (user > 0 && user < 4)
    {
        computer = rand() % 3 + 1;
        cout << "RESULT: "<<endl;
        cout << "\tYOU: " << OP[user - 1];
        cout << "\tCOMPUTER: " << OP[computer - 1]<<endl;
        if (user == computer)
        {
            cout << "\t\tDRAW MATCH...!!" << endl;
        }
        else if ((user == 1 && computer == 2) || (computer == 3 && user == 2) || (computer == 1 && user == 3))
        {
            cout << "\t\tCOMPUTER WON...!!" << endl;
        }
        else
        {
            cout << "\t\tYOU WON...!!" << endl;
        }
    }
    else
    {
        cout << "INVALID INPUT BY USER..." << endl;
    }
    return 0;
}
int main()
{
    srand(time(0));
    string ch = "yes";
    RPS();
    do
    {
        cout<<"***********"<<endl;
        cout << "Do you want to play again?? (yes/no) : ";
        cin >> ch;
        if (ch.compare("yes") == 0 || ch.compare("YES")==0 || ch.compare("Yes")==0)
        {
            RPS();
        }
        else
        {
            cout << "\nCOMPUTER : It was fun playing with you...!!\n " << endl;
        }

    } while (ch.compare("yes") == 0 || ch.compare("YES")==0 || ch.compare("Yes")==0);

    return 0;
}