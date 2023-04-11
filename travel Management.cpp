#include<iostream>
using namespace std;
void mainMenu();
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class details
{
public:
    static string name,gender;
    char phoneno;
    int age;
    string address;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer ID:";
        cin>>cId;
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the age:";
        cin>>age;
        cout<<"\nEnter the gender:";
        cin>>gender;
        cout<<"\nEnter the Phone NO:";
        cin>>phoneno;
        cout<<"\nEnter the address:";
        cin>>address;
        cout<<"Your details are saved with us"<<endl;
    }
};
int details::cId;
string details::name;
string details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void travels()
    {
        string travels[]={"Mumbai","Goa","Kerala","Assam",};
        for(int a=0;a<4;a++)
        {
            cout<<(a+1)<<".travel to"<<travels[a]<<endl;

        }
        cout<<"\nWelcome to the travel agency"<<endl;
        cout<<"Press the number of the city of which you want to book the travel:";
        cin>>choice1;

        switch(choice1)
        {
        case 1:
            {
                cout<<"_________________________Welcome to Mumbai_____________\n"<<endl;
                cout<<"Enjoy the journey"<<endl;
                cout<<"Following are the travels \n"<<endl;

                cout<<"1.Mumbai-498"<<endl;
                cout<<"\t01-1-2022 8:00PM 10hrs Rs.1200"<<endl;
                cout<<"2.Mumbai-678"<<endl;
                cout<<"\t09-1-2022 11:00PM 12hrs Rs.1000"<<endl;
                cout<<"3.Mumbai-498"<<endl;
                cout<<"\t12-1-2022 11:00PM 9hrs Rs.900"<<endl;

                cout<<"\nSelect the travel you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1200;
                    cout<<"\nYou have successfully booked the travel Mumbai-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2)
                {
                   charges=1000;
                    cout<<"\nYou have successfully booked the travel Mumbai-678"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                 else if(choice1==3)
                {
                   charges=900;
                    cout<<"\nYou have successfully booked the travel Mumbai-498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;

                }
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();

                }
                else
                {
                    mainMenu();
                }
            }
        case 2:
            {
                cout<<"_________________________Welcome to Goa_____________\n"<<endl;
                cout<<"Enjoy the journey"<<endl;
                cout<<"Following are the travels \n"<<endl;

                cout<<"1.Goa-112"<<endl;
                cout<<"\t21-1-2022 9:00PM 10hrs Rs.2000"<<endl;
                cout<<"2.Goa-123"<<endl;
                cout<<"\t23-1-2022 11:00PM 12hrs Rs.2200"<<endl;
                cout<<"3.Goa-138"<<endl;
                cout<<"\t29-1-2022 11:00PM 9hrs Rs.2500"<<endl;

                cout<<"\nSelect the travel you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=2000;
                    cout<<"\nYou have successfully booked the travel Goa-112"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2)
                {
                   charges=2200;
                    cout<<"\nYou have successfully booked the travel Goa-123"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                 else if(choice1==3)
                {
                   charges=2500;
                    cout<<"\nYou have successfully booked the travel Goa-138"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;

                }
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();

                }
                else
                {
                    mainMenu();
                }
            }
        case 3:
            {
                cout<<"_________________________Welcome to Kerala_____________\n"<<endl;
                cout<<"Enjoy the journey"<<endl;
                cout<<"Following are the travels \n"<<endl;

                cout<<"1.Kerala-248"<<endl;
                cout<<"\t01-2-2022 8:00PM 10hrs Rs.4000"<<endl;
                cout<<"2.Kerala-211"<<endl;
                cout<<"\t09-2-2022 11:00PM 12hrs Rs.3000"<<endl;
                cout<<"3.Kerala-215"<<endl;
                cout<<"\t12-2-2022 11:00PM 9hrs Rs.2000"<<endl;

                cout<<"\nSelect the travel you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=4000;
                    cout<<"\nYou have successfully booked the travel Kerala-248"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2)
                {
                   charges=3000;
                    cout<<"\nYou have successfully booked the travel Kerala-211"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                 else if(choice1==3)
                {
                   charges=2000;
                    cout<<"\nYou have successfully booked the travel Kerala-215"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;

                }
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();

                }
                else
                {
                    mainMenu();
                }
            }
        case 4:
            {
                cout<<"_________________________Welcome to Assam ______________\n"<<endl;
                cout<<"Enjoy the journey"<<endl;
                cout<<"Following are the travels \n"<<endl;

                cout<<"1.Assam-398"<<endl;
                cout<<"\t11-2-2022 8:00PM 10hrs Rs.5000"<<endl;
                cout<<"2.Assam-378"<<endl;
                cout<<"\t19-2-2022 11:00PM 12hrs Rs.4000"<<endl;
                cout<<"3.Assam-388"<<endl;
                cout<<"\t20-2-2022 11:00PM 9hrs Rs.3000"<<endl;

                cout<<"\nSelect the travel you want to book:";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=5000;
                    cout<<"\nYou have successfully booked the travel Assam-398"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;

                }
                else if(choice1==2)
                {
                   charges=4000;
                    cout<<"\nYou have successfully booked the travel Assam-378"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                 else if(choice1==3)
                {
                   charges=3000;
                    cout<<"\nYou have successfully booked the travel Assam-388"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"Invalid input, shifting to the previous menu"<<endl;

                }
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();

                }
                else
                {
                    mainMenu();
                }
            }
        default:
            {
                cout<<"Invalid input, shifting you to main menu !"<<endl;
                mainMenu();
                break;
            }

        }
    }
};
float registration::charges;
int registration::choice;

class ticket:public registration,details
{
public:
    void Bill()
    {
        string destination="";

        {
            cout<<"____________________________Humsafar Travels________________"<<endl;
            cout<<"_____________________________ticket__________________________"<<endl;
            cout<<"_____________________________________________________________"<<endl;

            cout<<"customer ID:"<<details::cId<<endl;
            cout<<"customer Name:"<<details::name<<endl;
            cout<<"customer Gender:"<<details::gender<<endl;
            cout<<"\tDescription"<<endl<<endl;

            if(registration::choice==1)
            {
                destination="Mumbai";
            }
          else if(registration::choice==2)
            {
                destination="Goa";
            }
           else if(registration::choice==3)
            {
                destination="Kerala";
            }
           else if(registration::choice==4)
            {
                destination="Assam";
            }
            cout<<"Destination\t\t"<<destination<<endl;
            cout<<"Travels cost:\t\t"<<registration::charges<<endl;


        }


    }
    void dispBill()
    {

    cout<<arr[100]<<endl;
    }
};


void mainMenu()
{
    int choice;
    int schoice;
    int back;
    cout<<"\t *********************Humsafar Travels********************\n"<<endl;
    cout<<"\t___________________________Main Menu________________________"<<endl;

    cout<<"\t__________________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;

    cout<<"\t|\t Press 1 to add the customer details \t|"<<endl;
    cout<<"\t|\t Press 2 for travels registration    \t|"<<endl;
    cout<<"\t|\t Press 3 for ticket & charges       \t|"<<endl;
    cout<<"\t|\t Press 4 for to exit                \t|"<<endl;
    cout<<"\t|\t\t\t\t| " <<endl;
    cout<<"\t___________________________________________________________"<<endl;

    cout<<"Enter the choice:";
    cin>>choice;

    details d;
    registration r;
    ticket t;

    switch(choice)
    {
    case 1:
        {
            cout<<"________________customers____________\n"<<endl;
            d.information();
            cout<<"Press 1 to go back to Main menu";
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;

        }
    case 2:
        {
            cout<<"__________Book a travel using this system____________\n"<<endl;
            r.travels();
            break;
        }
    case 3:
        {
         cout<<"____________Get your ticket____________\n"<<endl;
         t.Bill();

        cout<<"Your ticket is printed, you can collect it\n"<<endl;
        cout<<"Press 1 to display your ticket";

        cin>>back;

        if(back==1)
        {
            t.dispBill();
            cout<<"Press any key to go back Main menu";
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
        }
            else
            {
                mainMenu();
            }
            break;
        }
    case 4:
        {
            cout<<"\n\n\t_______________Thank you___________"<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid input,Please try again\n"<<endl;
            mainMenu();
            break;
        }
}
}
int main()
{
    Management Mobj;
    return 0;
}
