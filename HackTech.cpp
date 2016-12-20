#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <cstdio>

using namespace std; //Much more efficient than puting it in every. single. method.
int kill ()
{
	system("color C");
	cout << "Finding host...\n";
	getch();
	cout << "Host found.\n";
	getch();
	cout << "Killing...\n";
	getch();
	cout << "Target PC neutralised\n";
	system("color A");
}
int ipget()
{
	cout << "IPID == 42.0.0.198\n";
}

int gainadmin()
{
	cout << "ADMIN PRIVLEGES GAINED.\n";
}
int nethack()
{
	cout << "Uploading Payload...\n";
	getch(); //Waits for user input
	cout << "Payload Uploaded\n";
}
int breach()
{
	cout << "Breaching...\n";
	getch(); //Waits for user input
	cout << "Network ID A72540284703778NB has been breached.\n";
}

int main()
{
	//Hacktech: the successor to hack
	//Written by Hardy Coble Gardner
	system("color A");
	std::string COMTYPE; //Magikz. Plz no Mess wit
	cout << "Welcome to Hack.TECH() Va4011b2\n";
	int trigger{1};
	while(trigger == 1) //Used to start loops and what not. not to be confused with TRIGGERED!!!!111!!1
	{
		cout << "ENTER COMMAND: ";
		cin >> COMTYPE;
		if(COMTYPE == "breach")
		{
			breach();
		}
		else if(COMTYPE == "info")
		{
			cout << "Version: 0.1\n";
			cout << "Written by Hardy C Gardner\n";
			cout << "IF this person isn't Hardy C Gardner, tell them they're a massive Jahangus and deserve to die of papercuts."; //So true.
		}
		else if (COMTYPE == "nethack")
		{
			nethack();
		}
		else if (COMTYPE == "exit") //Breaks the loop, thereby stopping the program
		{
			break;
		}
		else if (COMTYPE == "gain.admin")
		{
			gainadmin();
		}
		else if (COMTYPE == "polska") //Shhh of many secretz
		{
			cout << "MAKE OF HAILINGS GORIUS POLSKA. OF KURWA, BROTHER IN POLSKA. MAKE KILLINGS OF CYKA BLYAT RUSIA. KURWA KURWA KURWA.\n";
		}
		else if (COMTYPE == "kill")
		{
			kill();
		}
		else if (COMTYPE == "ip.get")
		{
			ipget();
		}
		else
		{
			cout << "Bad command or file.";
		}
		
	}
	return 0;
}