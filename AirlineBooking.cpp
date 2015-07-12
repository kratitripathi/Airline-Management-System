//Project on Kingfisher Airlines Management System
//***********************************************************************
//Preprocessor Directives
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<stdio.h>
#include<graphics.h>
#include<iomanip.h>
#include<stdlib.h>
#include<time.h>

//The class which contains all the variables and functions required to acces them
class flight
{
	int fno;
	char origin[25];
	char destin[25];
	int dd,dm,dy;
	int rd,rm,ry;
	long int f,facost,fccost,ficost;
	long int b,bacost,bccost,bicost;
	long int e,eacost,eccost,eicost;
	long int func()
	{randomize();
	long int tick=random(5000);
	return tick;}
	long int tno,fare;
	char fname[25],lname[25];
	char gender;
	int ud,um,uy,infant,child,adult;
	char uclass, meal[25];
	char age;

	public:
	void getdetails()//To obtain the flight details from the administrator
	{
		cout<<"\nENTER FLIGHT DETAILS:";
		cout<<"\n~~~~~~~~~~~~~~~~~~~~";
		cout<<"\nFlight number: IT";cin>>fno;
		cout<<"Origin: ";gets(origin);
		cout<<"Destination: ";gets(destin);
		cout<<"Departure date (dd mm yyyy): ";cin>>dd>>dm>>dy;
		cout<<"Return date (dd mm yyyy): ";cin>>rd>>rm>>ry;
		cout<<"Number of seats in First class: ";cin>>f;
		cout<<"Fare per Adult, Child and Infant: ";cin>>facost>>fccost>>ficost;
		cout<<"Number of seats in Business class: ";cin>>b;
		cout<<"Fare per Adult, Child and Infant: ";cin>>bacost>>bccost>>bicost;
		cout<<"Number of seats in Economy class: ";cin>>e;
		cout<<"Fare per Adult, Child and Infant: ";cin>>eacost>>eccost>>eicost;
	}
	 void displaydetails()//Displays the Flight details
	{      	cout<<"\n\nFLIGHT DETAILS";
		cout<<"\n~~~~~~~~~~~~~~";
		cout<<"\nFlight number                     : IT"<<fno;
		cout<<"\nOrigin                            : "<<origin;
		cout<<"\nDestination                       : "<<destin;
		cout<<"\nDeparture date (dd-mm-yyyy)       : "<<dd<<"-"<<dm<<"-"<<dy;
		cout<<"\nReturn date date (dd-mm-yyyy)     : "<<rd<<"-"<<rm<<"-"<<ry;
		cout<<"\nNumber of seats in First class    : "<<f;
		cout<<"\nFare per Adult, Child and Infant  : "<<facost<<", "<<fccost<<", "<<ficost;
		cout<<"\nNumber of seats in Business class : "<<b;
		cout<<"\nFare per Adult, Child and Infant  : "<<bacost<<", "<<bccost<<", "<<bicost;
		cout<<"\nNumber of seats in Economy class  : "<<e;
		cout<<"\nFare per Adult, Child and Infant  : "<<eacost<<", "<<eccost<<", "<<eicost;
	}
	int getfno()
	{return fno;}
	int gettno()
	{return tno;}

	void modify()//Modifies Required Flight Details
	{
		char yorn='n';
		char origin1[25];
		char destin1[25];
		long int f1,b1,e1;
		cout<<"\n\nEnter new details: ";
		cout<<"\n\nNew Origin: (Enter '.' to retain old one)";gets(origin1);
		if(strcmp(origin1,".")!=0)
		strcpy(origin,origin1);
		cout<<"New Destination: (Enter '.' to retain old one)";gets(destin1);
		if(strcmp(destin1,".")!=0)
		strcpy(destin,destin1);
		cout<<"Do you want to change the departure date?(y/n) ";
		cin>>yorn;
		if(yorn=='y'||yorn=='Y')
		{cout<<"\nEnter new date (dd mm yyyy): ";cin>>dd>>dm>>dy;}
		cout<<"Do you want to change the return date?(y/n) ";
		cin>>yorn;
		if(yorn=='y'||yorn=='Y')
		{cout<<"Enter new date (dd mm yyyy): ";cin>>rd>>rm>>ry;}
		cout<<"New number of seats in First class: (Enter -1 to retain old one) ";cin>>f1;
		if(f1!=-1){f=f1;}
		cout<<"Do you want to change the Fare per Adult, Child and Infant?(y/n) :";
		cin>>yorn;
		if(yorn=='y'||yorn=='Y')
		{cout<<"New Fare per Adult, Child and Infant: ";cin>>facost>>fccost>>ficost;}
		cout<<"New number of seats in Business class: (Enter -1 to retain old one) ";cin>>b1;
		if(b1!=-1){b=b1;}
		cout<<"Do you want to change the Fare per Adult, Child and Infant?(y/n) :";
		cin>>yorn;
		if(yorn=='y'||yorn=='Y')
		{cout<<"New Fare per Adult, Child and Infant: ";cin>>bacost>>bccost>>bicost;}
		cout<<"New number of seats in Economy class: (Enter -1 to retain old one) ";cin>>e1;
		if(e1!=-1){e=e1;}
		cout<<"Do you want to change the Fare per Adult, Child and Infant?(y/n) :";
		cin>>yorn;
		if(yorn=='y'||yorn=='Y')
		{cout<<"New Fare per Adult, Child and Infant: ";cin>>eacost>>eccost>>eicost;}
		cout<<"\nDetails modified! :)\n";
	}
	void displayschedule()//Displays the Flight Details in the form of a schedule
	{
		cout<<"\n";
		cout<<setw(7)<<"IT"<<fno;
		cout<<setw(12)<<origin;
		cout<<setw(15)<<destin;
		cout<<setw(7)<<dd<<"-"<<dm<<"-"<<dy;
		cout<<setw(7)<<rd<<"-"<<rm<<"-"<<ry;
	}

	void getdata()//Gets the User's Details
	{
		int mealchoice;
		cout<<"\n\nPlease enter your details:\n";
		cout<<"\nFirst name: ";gets(fname);
		cout<<"Last name: ";gets(lname);
		cout<<"Gender(M/F): ";cin>>gender;
		cout<<"Date of Birth (dd mm yyyy): ";cin>>ud>>um>>uy;
		cout<<"Class(f/b/e): ";cin>>uclass;
		cout<<"\nMeal Request (Choose 1-3):\n1.Child meal\n2.Adult vegetarian meal\n3.Adult non-vegetarian meal\nYour choice: ";
		ch:
		cin>>mealchoice;
		switch(mealchoice)
		{
			case 1:strcpy(meal,"Child meal");
			       break;
			case 2:strcpy(meal,"Adult Vegetarian meal");
				break;
			case 3:strcpy(meal,"Adult Non-vegetarian meal ");
				break;
			default:cout<<"\nWrong choice! Choose something frm 1-3.\n";
				goto ch;
		}
		cout<<"\nChoose Category (a/c/i):";
		cout<<"\nInfant (below 2 yrs)";
		cout<<"\nChild (2-12 yrs)";
		cout<<"\nAdult(12 yrs and above)\n";
		cin>>age;
		tno=func();
	}
	void book()//Prints the booked ticket on the screen
	{

		cout<<"\n________________________________________________________________________________";
		cout<<"--------------------------------------------------------------------------------";
		cout<<"\n\t\t\t\t     TICKET";
		cout<<"\n\n\t\t     Ticket number    : "<<tno;
		cout<<"\n\t\t     Name             : "<<fname<<" "<<lname;
		cout<<"\n\t\t     Gender           : "<<gender;
		cout<<"\n\t\t     Date of birth    : "<<ud<<"-"<<um<<"-"<<uy;
		cout<<"\n\t\t     Flight number    : IT"<<fno;
		cout<<"\n\t\t     Departure        : "<<origin<<"; "<<dd<<"-"<<dm<<"-"<<dy;
		cout<<"\n\t\t     Destination      : "<<destin;
		cout<<"\n\t\t     Return           : "<<rd<<"-"<<rm<<"-"<<ry;
		cout<<"\n\t\t     Class            : "<<uclass;
		cout<<"\n\t\t     Meal             : "<<meal;
		if(uclass=='f'||uclass=='F')
		       {if(age=='a'||age=='A')
			fare=facost;
			else if(age=='c'||age=='C')
			fare=fccost;
			else
			fare=ficost;}
		else if(uclass=='b'||uclass=='B')
			{if(age=='a'||age=='A')
			fare=bacost;
			else if(age=='c'||age=='C')
			fare=bccost;
			else
			fare=bicost;}
		else
			{if(age=='a'||age=='A')
			fare=eacost;
			else if(age=='c'||age=='C')
			fare=eccost;
			else
			fare=eicost;}
		cout<<"\n\t\t     Total fare       : INR "<<fare;
		cout<<"\n\n________________________________________________________________________________";
		cout<<"--------------------------------------------------------------------------------";

	}
};

//Global Variables
flight f1,f2;
ifstream fin;
ofstream fout;

//Prototypes of functions for carrying out administrator and user operations
void adminmode();
void usermode();
void main()//Main Function
{
	clrscr();
	textcolor(WHITE);//Sets the text colour as white
	textbackground(RED);//Sets the background colour as red
	int choice=0;
	do
	{

		clrscr();
		cout<<"\n\n\t\t\t    KINGFISHER AIRLINES...\n\n\t\tFew Things Connect India Like Kingfisher Does!\n";
		cout<<"\n\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\t  ***** WELCOME TO KINGFISHER AIRLINES BOOKING SYSTEM ***** \n";
		cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n\n\t\t\t";
		cout<<"\n\t\t\t                           ";
		cout<<"\n\t\t\t      MAIN MENU :)         ";
		cout<<"\n\t\t\t      ~~~~~~~~~            ";
		cout<<"\n\t\t\t                           ";
		cout<<"\n\t\t\t    Choose a mode:         ";
		cout<<"\n\t\t\t                           ";
		cout<<"\n\t\t\t    1.Administrator mode   ";
		cout<<"\n\t\t\t                           ";
		cout<<"\n\t\t\t    2.User mode            ";
		cout<<"\n\t\t\t                           ";
		cout<<"\n\t\t\t    3.Exit                 ";
		cout<<"\n\t\t\t                           ";
		cout<<"\n\t\t\t";
		cout<<"\t\n\n\n\t\t\tYour choice please: ";
		cin>>choice;
		switch(choice)
		{
			case 1:adminmode();
				break;
			case 2:usermode();
				break;
			case 3:exit(1);
				break;
			default:cout<<"\n\t\t\tWrong choice!! Choose an option from 1-3.\n";
				cin>>choice;
				break;
		}

	}while(choice<3);
	getch();
 }

//Function containing all Administrator operations
void adminmode()
{
	textcolor(WHITE);
	textbackground(BLUE);
	int adminchoice;
	char ch='y',*password;
	int fnum;
	//Loop to provide Access only if the password is correct within 3 attempts
	for(int i=2;i>=0;i--)
		{	password=getpass("\n\t\t\tEnter the Administrator Password: ");
			if(strcmp(password,"admin")==0)
			{
				cout<<"\n\t\t\tCorrect Password!";
				cout<<"\n\t\t\tPlease wait";
				delay(700);cout<<". ";delay(700);cout<<". ";delay(700);cout<<". ";delay(700);
				break;
			}
			else
			{
				cout<<"\n\t\t\tOops! Wrong password.\n";
				cout<<"\t\t\t"<<i<<" attempt(s) left to enter the correct password\n";
				if(i==0)
				{
					cout<<"\n\t\t\t:( Sorry! You are not permitted to logon this mode!\n\t\t\tReturning to the main menu...";
					delay(1000);
					return;
				}
			}
		}
	do
	{
	clrscr();

		cout<<"\n\n\n\n\n\t\t\t*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*";
		cout<<"\n\t\t\t*                             *";
		cout<<"\n\t\t\t#    ADMINISTRATOR MENU :)    #";
		cout<<"\n\t\t\t*    ~~~~~~~~~~~~~~~~~~       *";
		cout<<"\n\t\t\t#                             #";
		cout<<"\n\t\t\t* What would you like to do?  *";
		cout<<"\n\t\t\t#                             #";
		cout<<"\n\t\t\t*    1.Add Flight Details     *";
		cout<<"\n\t\t\t#    2.Display Flight Details #";
		cout<<"\n\t\t\t*    3.Search Flight Details  *";
		cout<<"\n\t\t\t#    4.Modify Flight Details  #";
		cout<<"\n\t\t\t*    5.Delete Flight Details  *";
		cout<<"\n\t\t\t#    6.View all tickets       #";
		cout<<"\n\t\t\t*    7.Return to Main Menu    *";
		cout<<"\n\t\t\t#                             #";
		cout<<"\n\t\t\t*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*";
		cout<<"\t\n\n\n\t\t\tYour choice please: ";
	cin>>adminchoice;
	switch(adminchoice)
	{
		case 1 :fout.open("flight.dat",ios::app|ios::binary);
			char ans='y';
			while(ans=='y' || ans=='Y')
			{
				clrscr();
				f1.getdetails();
				fout.write((char*)&f1, sizeof(f1));
				cout<<"\nFlight added!";
				cout<<"\nWant to add more Flights?(y/n) ";
				cin>>ans;
			}
			fout.close();
			break;
		case 2 :clrscr();
			fin.open("flight.dat",ios::in|ios::binary);
			if(!fin)
			{
				cout<<"\n\n\nEither there is a problem in opening the file or no flight record has been added yet!!\n";
				break;
			}
			while(!fin.eof())
			{
				fin.read((char*)&f1 , sizeof(f1));
				if(fin.eof())
				break;
				f1.displaydetails();
			}
			fin.close();
			break;
		case 3 :clrscr();
			char found='n';
			fin.open("flight.dat",ios::in|ios::binary);
			if(!fin)
			{
				cout<<"\n\n\nEither there is a problem in opening the file or no flight record has been added yet!!\n";
				break;
			}
			cout<<"\n\n\nEnter Flight number to be searched for: IT";
			cin>>fnum;
			while(!fin.eof())
			{
				fin.read((char*)&f1 , sizeof(f1));
				if(fin.eof())
				break;
				if(f1.getfno()==fnum)
				{
					f1.displaydetails();
					found='y';
					break;
				}
			}
			if(found=='n')
				cout<<"\nUhuh! Flight number not found in the file!!";
			fin.close();
			break;

		case 4 :clrscr();
			fstream fio;
			fio.open("flight.dat",ios::in|ios::out|ios::binary);
			found='f';long pos;
			cout<<"\nEnter the Flight Number whose details have to be modified: IT";
			cin>>fnum;
			fio.seekg(0,ios::beg);
			while(fio.read((char*)&f1, sizeof(f1)))
			{
				pos=fio.tellg();
				if(f1.getfno()==fnum)
				{
					f1.displaydetails();
					f1.modify();
					fio.seekp(pos-sizeof(f1),ios::beg);
					fio.write((char*)&f1, sizeof(f1));
					found='t';
					break;
				}

			}
			if(found=='f')
				cout<<"\nFlight not found!!";
			fio.close();
			cout<<"\nNow the file contains:\n";
			fio.open("flight.dat",ios::in|ios::binary);
			while(!fio.eof())
			{
				fio.read((char*)&f1, sizeof(f1));
				if(fio.eof())
				break;
				f1.displaydetails();
			}
			fio.close();
			getch();
			break;
		case 5 :clrscr();
			fin.open("flight.dat",ios::in|ios::binary);
			fout.open("temp.dat",ios::out|ios::binary);
			found='f';
			char confirm='n';
			cout<<"\n\n\nEnter the Flight number whose details have to be deleted: IT";
			cin>>fnum;
			while(!fin.eof())
			{
				fin.read((char*)&f1, sizeof(f1));
				if(fin.eof())
				break;
				if(f1.getfno()==fnum)
				{
					f1.displaydetails();
					found='t';
					cout<<"\n\nAre you sure you want to delete this flight's details?(y/n): ";
					cin>>confirm;
					if(confirm=='n')
						fout.write((char*)&f1, sizeof(f1));
				}
				else
					fout.write((char*)&f1, sizeof(f1));
			}
			if(found=='n')
			cout<<"\nFlight not found!!\n";
			fin.close();
			fout.close();
			remove("flight.dat");
			rename("temp.dat" , "flight.dat");
			fin.open("flight.dat",ios::in|ios::binary);
			cout<<"\n\nNow the file Contains:\n";
			while(!fin.eof())
			{
				fin.read((char*)&f2, sizeof(f2));
				if(fin.eof())
				break;
				f2.displaydetails();
			}
			fin.close();
			break;
		case 6: clrscr();
			fin.open("user.dat",ios::in|ios::binary);
			if(!fin)
			{
				cout<<"\n\n\nEither there is a problem in opening the file or no flight record has been added yet!!\n";
				break;
			}
			while(!fin.eof())
			{
				fin.read((char*)&f1 , sizeof(f1));
				if(fin.eof())
				break;
				f1.book();
				cout<<"\n\tPlease wait for the next ticket to appear...";
				delay(5000);

			}
			fin.close();
			break;
		case 7: cout<<"\n\t\t\tReturning to Main menu. Please wait";
			delay(700);cout<<". ";delay(700);cout<<". ";delay(700);cout<<". ";delay(700);
			textcolor(WHITE);
			textbackground(RED);
			return;
		default:cout<<"\n\t\t\tWrong choice!! Select something from 1-6.";
		}
	cout<<"\n\nDo you want to continue in Admin Mode?(y/n) ";
	cin>>ch;

	}while(ch=='y'||ch=='Y');
}

//Function containing all the User Operations
void usermode()
{
	textcolor(BLACK);
	textbackground(GREEN);
	int choice; char answer='y';
	do
	{	clrscr();
		cout<<"\n\n\n\n\n________________________________________________________________________________";
		cout<<"\n\t\t\t  USER MODE  ";
		cout<<"\n________________________________________________________________________________";
		cout<<"\n\n\n\n\n\t\t\t*@*@*@*@*@*@*@*@*@*@*@*@*@*@*@*@";
		cout<<"\n\t\t\t*                              *";
		cout<<"\n\t\t\t@  Welcome to User Mode!       @";
		cout<<"\n\t\t\t*  What would you like to do?  *";
		cout<<"\n\t\t\t@                              @";
		cout<<"\n\t\t\t*    1.View All Flights        *";
		cout<<"\n\t\t\t@    2.Book a Flight           @";
		cout<<"\n\t\t\t*    3.Find a previous booking *";
		cout<<"\n\t\t\t@    4.Cancel a ticket         @";
		cout<<"\n\t\t\t*    5.Return to main menu     *";
		cout<<"\n\t\t\t@                              @";
		cout<<"\n\t\t\t*@*@*@*@*@*@*@*@*@*@*@*@*@*@*@*@";
		cout<<"\t\n\n\n\t\t\tYour choice please: ";
	userstart:
	cin>>choice;
	switch(choice)
	{
		case 1: clrscr();
			choice1:
			fin.open("flight.dat",ios::in|ios::binary);
			if(!fin)
			{
				cout<<"\n\n\nEither there is a problem in opening the file or no flight record has been added yet!!\n";
				break;
			}
			cout<<"\n\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<"\n\t  ***** KINGFISHER AIRLINES FLIGHT SCHEDULE ***** \n";
			cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<"\n\n\n\n________________________________________________________________________________";
			cout<<"--------------------------------------------------------------------------------\n";
			cout<<"Flight No.";
			cout<<setw(12)<<"Origin";
			cout<<setw(15)<<"Destination";
			cout<<setw(15)<<"Departure";
			cout<<setw(15)<<"Return";
			cout<<"\n________________________________________________________________________________";
			cout<<"--------------------------------------------------------------------------------\n";
			while(!fin.eof())
			{
				fin.read((char*)&f1 , sizeof(f1));
				if(fin.eof())
				break;
				f1.displayschedule();
			}
			cout<<"\n________________________________________________________________________________\n";
			fin.close();
			break;
		case 2: clrscr();
			char found='n',ans1='y';
			int fnum;

			do
			{
				fin.open("flight.dat",ios::in|ios::binary);
				clrscr();
				cout<<"\n\tEnter the flight number you want to book: IT";cin>>fnum;
				while(!fin.eof())
				{
				fin.read((char*)&f1 , sizeof(f1));
				if(fin.eof())
				break;
				if(f1.getfno()==fnum)
				{
					fout.open("user.dat",ios::app|ios::binary);
					f1.getdata();
					fout.write((char*)&f1, sizeof(f1));
					found='y';
					f1.book();
					break;
				}

			 }
			if(found=='n')
				cout<<"\nUhuh! Flight number not found in the file!!";
			fin.close();
			fout.close();
			cout<<"\n\nDo you want to book more tickets?\n";
			cin>>ans1;
			}while(ans1=='y'||ans1=='Y');

			break;

		case 3: int tnum;
			clrscr();
			cout<<"\n\n\tEnter your ticket number: ";
			cin>>tnum;
			char found1='n';
			fin.open("user.dat",ios::in|ios::binary);
			if(!fin)
			{
				cout<<"\n\n\nEither there is a problem in opening the file or no flight record has been added yet!!\n";
				break;
			}
			while(!fin.eof())
			{
				fin.read((char*)&f1 , sizeof(f1));
				if(fin.eof())
				break;
				if(f1.gettno()==tnum)
				{
					f1.book();
					found1='y';
					break;
				}
			}
			if(found1=='n')
				cout<<"\nUhuh! Ticket number not found in the file!!";
			fin.close();
			break;
		case 4: clrscr();
			fin.open("user.dat",ios::in|ios::binary);
			fout.open("temp.dat",ios::out|ios::binary);
			found='f';
			char confirm='n';
			cout<<"\n\n\nEnter the ticket number which you want to cancel: ";
			cin>>tnum;
			while(!fin.eof())
			{
				fin.read((char*)&f1, sizeof(f1));
				if(fin.eof())
				break;
				if(f1.gettno()==tnum)
				{
					f1.book();
					found='t';
					cout<<"\n\nAre you sure you want to cancel this ticket?(y/n): ";
					cin>>confirm;
					if(confirm=='n')
						fout.write((char*)&f1, sizeof(f1));
					else
						cout<<"\nThe ticket has been cancelled succesfully!\n";
				}
				else
					fout.write((char*)&f1, sizeof(f1));
			}
			if(found=='n')
			cout<<"\nTicket not found!!\n";
			fin.close();
			fout.close();
			remove("user.dat");
			rename("temp.dat" , "user.dat");
			fin.close();
			break;
		case 5: cout<<"\n\t\t\tPlease wait";
			delay(700);cout<<". ";delay(700);cout<<". ";delay(700);cout<<". ";delay(700);
			textcolor(WHITE);
			textbackground(RED);
			return;

		default:cout<<"\nWrong choice!!\n";
			break;
	}
	cout<<"\n\n\n\nDo you want to continue in User Mode? (y/n) ";cin>>answer;
	}while(answer=='y'||answer=='Y');
}
//END of Program

