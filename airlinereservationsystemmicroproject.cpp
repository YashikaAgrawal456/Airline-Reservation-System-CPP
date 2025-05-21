#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
void mainmenu();
class Management 
{
	public:
		Management ()
		{
			mainmenu();
		}
};
class Details
{
	public:
		static string name, gender;
		int age;
		string address;
		static int cId;
		char arr[100];
		void information ()
		{   ofstream outFile("data.txt", ios_base::app);
			cout<<"\nEnter the customer ID:";
			cin>>cId;
			cout<<"\nEnter name:";
			cin>>name;
			cout<<"\nEnter age:";
			cin>>age;
			cout<<"\nAddress:";
			cin>>address;
			cout<<"\nGender:";
			cin>>gender;
			outFile<<"\nCustomer ID:"<<cId<<endl;
			outFile<<"\nName:"<<name<<endl;
			outFile<<"\nAge:"<<age<<endl;
			outFile<<"\nAddress:"<<address<<endl;
			outFile<<"\nGender:"<<gender<<endl;
			outFile.close();
			system("cls");
			cout<<"\nYOUR DETAILS ARE SAVED WITH US\n";
		}

};
int Details::cId;
string Details::name;
string Details::gender;
class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		void flights()
		{
			string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};
			cout<<"\n";
			for (int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to "<<flightN[a]<<endl<<endl;
			}
			cout<<"\nPress the number to which country you want to book the flight:";
			cin>>choice;
			system("cls");
			switch(choice)
			{
				case 1:
						cout<<"\n\n___________________________Welcome to Dubai Emirates_________________\n\n Following are the available flights\n\n";
						cout<<"1. DUB - 498\n 08/06/2025 8:00 A.M. 10 hrs Rs.14000\n\n";
						cout<<"2. DUB - 658\n 15/07/2025 12:00 P.M. 12 hrs Rs.13000\n\n";
						cout<<"3. DUB - 450\n 20/07/2025 4:00 A.M. 11 hrs Rs.12000\n\n";
						cout<<"Select the flight you want to book:";
						cin>>choice1;
						system("cls");
						if(choice1==1)
						{
							charges=14000;
							cout<<"\nYou have successfully booked the flight DUB-498\n\nYou can go back to the main menu to get the ticket...";
						}
						else if(choice1==2)
						{
							charges=13000;
							cout<<"\nYou have successfully booked the flight DUB-658\n\nYou can go back to the main menu to get the ticket...";
						}
						else if(choice1==3)
						{
							charges=9000;
							cout<<"\nYou have successfully booked the flight DUB-450\n\nYou can go back to the main menu to get the ticket...";
						}
						else
						{
							cout<<"Invalid input, please enter the appropriate data from the list\n";
							flights();
						}
						cout<<"Press any key to go back to the main menu: ";
						cin>>back;
						if (back==1)
						{
							system("cls");
							mainmenu();
						}
						else
						{
							system("cls");
							mainmenu();
						}
					case 2:
							cout<<"\n___________________________Welcome to Canada Airlines_________________\n\nFollowing are the available flights\n\n";
						cout<<"1. CA - 236\n 18/04/2025 8:00 P.M. 20 hrs Rs.40000\n\n";
						cout<<"2. CA - 190\n 12/05/2025 11:00 A.M. 22 hrs Rs.37000\n\n";
						cout<<"3. CA - 412\n 21/07/2025 5:00 A.M. 21 hrs Rs.39000\n\n";
						cout<<"Select the flight you want to book:";
						cin>>choice1;
						system("cls");
						if(choice1==1)
						{
							charges=40000;
							cout<<"\nYou have successfully booked the flight CA-236\n\nYou can go back to the main menu to get the ticket...";
						}
						else if(choice1==2)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight CA-190\n\nYou can go back to the main menu to get the ticket...";
						}
						else if(choice1==3)
						{
							charges=39000;
							cout<<"\nYou have successfully booked the flight CA-412\n\nYou can go back to the main menu to get the ticket...";
						}
						else
						{
							cout<<"Invalid input, please enter the appropriate data from the list\n";
							flights();
						}
						cout<<"Press any key to go back to the main menu: ";
						cin>>back;
						if (back==1)
						{
							system("cls");
							mainmenu();
						}
						else
						{
							system("cls");
							mainmenu();
						}
						case 3:	
							cout<<"\n___________________________Welcome to UK Airways_________________\n\n Following are the available flights\n\n";
						cout<<"1. UK - 798\n 24/04/2025 10:00 A.M. 20 hrs Rs.44000\n\n";
						cout<<"2. UK - 196\n 10/05/2025 11:00 A.M. 22 hrs Rs.37000\n\n";
						cout<<"Select the flight you want to book:";
						cin>>choice1;
						system("cls");
						if(choice1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight UK - 798\n\nYou can go back to the main menu to get the ticket...";
						}
						else if(choice1==2)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight UK - 196\n\nYou can go back to the main menu to get the ticket...";
						}
						else
						{
							cout<<"Invalid input, please enter the appropriate data from the list\n";
							flights();
						}
						cout<<"Press any key to go back to the main menu: ";
						cin>>back;
						if (back==1)
						{
							system("cls");
							mainmenu();
						}
						else
						{
							system("cls");
							mainmenu();
						}
							case 4:
									cout<<"\n___________________________Welcome to US Airways_________________\n\n Following are the available flights\n\n";
						            cout<<"1. US - 567\n 23/05/2025 10:00 A.M. 21 hrs Rs.39000\n\n";
						            cout<<"2. US - 108\n 10/06/2025 1:00 A.M. 22 hrs Rs.37000\n\n";
						            cout<<"Select the flight you want to book:";
						            cin>>choice1;
						            system("cls");
						            if(choice1==1)
						            {
							          charges=39000;
							          cout<<"\nYou have successfully booked the flight US - 567\n\nYou can go back to the main menu to get the ticket...";
					            	}
									else if(choice1==2)
									{
										charges=37000;
										cout<<"\nYou have successfully booked the flight US - 108\n\nYou can go back to the main menu to get the ticket...";
									}
									else
									{
										cout<<"Invalid input, please enter the appropriate data from the list\n";
										flights();
									}
									cout<<"Press any key to go back to the main menu: ";
									cin>>back;
									if (back==1)
									{
										system("cls");
										mainmenu();
									}
									else
									{
										system("cls");
										mainmenu();
									}
								case 5:
									cout<<"\n___________________________Welcome to Australian Airlines_________________\n\nFollowing are the available flights\n\n";
						            cout<<"1. AS - 698\n 6/05/2025 4:00 A.M. 20 hrs Rs.44000\n\n";
						            cout<<"2. AS - 554\n 10/06/2025 9:00 A.M. 22 hrs Rs.34000\n\n";
						            cout<<"3. AS - 201\n 20/05/2025 8:00 A.M. 21 hrs Rs.42000\n\n";
						            cout<<"Select the flight you want to book:";
						            cin>>choice1;
						            system("cls");
						            if(choice1==1)
						            {
							          charges=44000;
							          cout<<"\nYou have successfully booked the flight AS - 698\n\nYou can go back to the main menu to get the ticket..";
					            	}
									else if(choice1==2)
									{
										charges=34000;
										cout<<"\nYou have successfully booked the flight AS - 554\n\nYou can go back to the main menu to get the ticket...";
									}
									else if(choice1==3)
									{
										charges=42000;
										cout<<"\nYou have successfully booked the flight AS - 201\n\nYou can go back to the main menu to get the ticket...";
									}
									else
									{
										cout<<"Invalid input, please enter the appropriate data from the list\n";
										flights();
									}
									cout<<"Press any key to go back to the main menu: ";
									cin>>back;
									if (back==1)
									{
										system("cls");
										mainmenu();
									}
									else
									{
										system("cls");
										mainmenu();
									}	
									case 6:
									cout<<"\n___________________________Welcome to Europian Airlines_________________\n\n Following are the available flights\n\n";
						            cout<<"1. EU - 898\n 6/05/2025 2:00 A.M. 17 hrs Rs.40000\n\n";
						            cout<<"2. EU - 456\n 10/06/2025 6:00 A.M. 18 hrs Rs.36000\n\n";
						            cout<<"3. EU - 221\n 20/05/2025 4:00 A.M. 19 hrs Rs.34000\n\n";
						            cout<<"Select the flight you want to book:";
						            cin>>choice1;
						            system("cls");
						            if(choice1==1)
						            {
							          charges=40000;
							          cout<<"\nYou have successfully booked the flight EU - 898\n\nYou can go back to the main menu to get the ticket...";
					            	}
									else if(choice1==2)
									{
										charges=36000;
										cout<<"\nYou have successfully booked the flight EU - 456\n\nYou can go back to the main menu to get the ticket...";
									}
									else if(choice1==3)
									{
										charges=34000;
										cout<<"\nYou have successfully booked the flight EU - 221\n\nYou can go back to the main menu to get the ticket...";
									}
									else
									{
										cout<<"Invalid input, please enter the appropriate data from the list\n";
										flights();
									}
									cout<<"Press any key to go back to the main menu: ";
									cin>>back;
									if (back==1)
									{
										system("cls");
										mainmenu();
									}
									else
									{
										system("cls");
										mainmenu();
									}
										default:
												cout<<"Invalid input, please enter correct input from the mainmenu\n";
												mainmenu();
			}
		}
};
float registration :: charges;
int registration::choice;
class ticket : public registration, Details
{
	public:
		void Bill ()
		{
			string destination="";
			ofstream outf("data.txt");
			{
				outf<<"\n\n\n\t\t\t\t\t_________Airline Reservation____________\n";
				outf<<"\t\t\t\t\t_________________Ticket_________________\n";
				outf<<"\t\t\t\t\t________________________________________\n";
				outf<<"\t\t\t\t\tCustomer ID:"<<Details::cId<<"\n";
				outf<<"\t\t\t\t\tCustomer Name:"<<Details::name<<"\n";
				outf<<"\t\t\t\t\tCustomer Gender:"<<Details::gender<<"\n";
				outf<<"\t\t\t\t\tDescription:\n\n";
				if (registration::choice==1)
				destination="Dubai";
				else if (registration::choice==2)
				destination="Canada";
				else if (registration::choice==3)
				destination="UK";
				else if (registration::choice==4)
				destination="USA";
				else if (registration::choice==5)
				destination="Australia";
				else if (registration::choice==6)
				destination="Europe";
				outf<<"\t\t\t\t\tDestination\t\t"<<destination<<endl;
				outf<<"\t\t\t\t\tFlight cost:\t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
		void dispBill()
		{
			ifstream ifs("data.txt");
			{
				if(!ifs)
				cout<<"File error!\n";
				while(!ifs.eof())
				{
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};
void mainmenu()
{
	int lchoice, schoice, back; 
	cout<<"                                           Airline Reservation\n\n";
	cout<<"________________________________________________Main Menu________________________________________________________\n";
	cout<<"_________________________________________________________________________________________________________________\n";
	cout<<"|                                                                                                               |\n";
	cout<<"| Press 1 to add the customer details                                                                           |\n";
	cout<<"| Press 2 for flight registration                                                                               |\n";
	cout<<"| Press 3 for Ticket and Fare                                                                                   |\n";
	cout<<"| Press 4 to Exit                                                                                               |\n";
	cout<<"_________________________________________________________________________________________________________________\n";
	cout<<"\nEnter choice:";
	cin>>lchoice;
	Details d;
	registration r;
	ticket t;
	switch(lchoice)
	{
		case 1:
				system("cls");
				cout<<"\t\t\t\t\t_________Customers________\n"<<endl;
				d.information();
				cout<<"Press any key to go back to Main Menu: ";
				cin>>back;
				if(back==1)
				{
					system("cls");
					mainmenu();
				}
				else
				{
					system("cls");
					mainmenu();
				}
				break;
			case 2:
					system("cls");
					cout<<"These are the avaialable options:-\n";
					r.flights();
					break;
				case 3:
				system("cls");
						cout<<"\t\t\t\t\t________GET YOUR TICKET_____________\n\n";
						t.Bill();
						cout<<"Your ticket is printed, you can collect it...Press 1 to display your ticket: ";
						cin>>back;
						if(back==1)
						{
							t.dispBill();
							cout<<"\n\nPress any key to go back to the main menu: ";
							cin>>back;
							if(back==1)
							{
								system("cls");
								mainmenu();
							}
							else
							{
								system("cls");
								mainmenu();
							}
						}
						else
							mainmenu();
						break;
					case 4:
							cout<<"\n\n\t________________Thank you__________\n";
							exit(0);
							break;
						default:
								cout<<"Invalid input, Please try again!\n";
								mainmenu();
	}
}
int main ()
{
	Management obj;
	return 0;
}
