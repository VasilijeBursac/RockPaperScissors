#include <iostream>
#include <ctime>
using namespace std;

//functions for print
    void you_win()
    {
        cout<<"You win!"<<endl<<endl;;
    }

    void you_lose()
    {
        cout<<"You lose!:( "<<endl<<endl;
    }

    void you_tie()
    {
        cout<<"It's a tie!"<<endl<<endl;
    }

int main()
{

    int exit;

    cout<<"**Welcome to RockPaperScissors Game!**"<<endl<<endl;
    cout<<"Your choice: "<<endl;
    cout<<"1-New Game"<<endl;
    cout<<"0-Exit Game"<<endl;
    cin>>exit;

    while(exit!=0)
    {
        srand(time(NULL));

        cout<<"**Rock Paper Scissors Game:**"<<endl<<endl;
        cout<<"Pick one of the 3:"<<endl;
        cout<<"1-Rock"<<endl;
        cout<<"2-Paper"<<endl;
        cout<<"3-Scissors"<<endl<<endl;;

        cout<<"Your choice is: "<<endl;
        int userChoice;
        cin>>userChoice;



        int computerChoice;
        computerChoice = (rand()%3) + 1;//remainders when dividing by 3 can be 0,1 or 2
                                  // add 1 to get computerChoice from 1 to 3
        switch(userChoice)
        {

            case 1:
                cout<<"You picked Rock."<<endl<<endl;
                break;
            case 2:
                cout<<"You picked Paper."<<endl<<endl;
                break;
            case 3:
                cout<<"You picked Scissors."<<endl<<endl;
                break;
            default:
                cout<<"Wrong input! Pick number from 1 to 3!"<<endl;
                break;

        }


        switch(computerChoice)
        {

            case 1:
                cout<<"Computer picked Rock."<<endl<<endl;
                break;
            case 2:
                cout<<"Computer picked Paper."<<endl<<endl;
                break;
            case 3:
                cout<<"Computer picked Scissors."<<endl<<endl;
                break;
            default:
                cout<<"Wrong input! Pick number from 1 to 3!"<<endl;
                break;
        }


        //logic
        if(userChoice == computerChoice)
        {
            you_tie();
        }

        else if(userChoice==1)//userChoice is ROCK
        {
            if(computerChoice==2)//if computerChoice is PAPER
            {
                you_lose();
            }
        else if(computerChoice==3)//if computerChoice is SCISSORS
            {
                you_win();
            }
        }

        else if(userChoice==2)//userChoice is PAPER
        {
            if(computerChoice==1)//if computerChoice is ROCK
            {
                you_win();
            }
            else if(computerChoice==3)//if computerChoice is SCISSORS
            {
                you_lose();
            }
        }

        else if(userChoice==3)//userChoice is SCISSORS
        {
            if(computerChoice==1)//if computerChoice is ROCK
            {
                you_lose();
            }
            else if(computerChoice==2)//if computerChoice is PAPER
            {
            you_win();
            }
        }

        cout<<"------------------------------------------"<<endl;
        cout<<"1-New Game"<<endl;
        cout<<"0-Exit Game"<<endl;
        cin>>exit;
    }
    cout<<"------------------------------------------"<<endl;
    cout<<"**End of the Game!**"<<endl;
    cout<<"**Thanks for playing!**"<<endl;
    return 0;
}
