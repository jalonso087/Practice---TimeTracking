#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <Windows.h>


//create a class for the clock to hold and display time
class main_clock
{
public:
	
	std::time_t time_val = std::time(0);
	std::tm* now = std::localtime(&time_val);

	//function to display current time
	void current_time(void)
	{
		//variable to hold current time


		//int h = now->tm_hour - 12;
		//int m = now->tm_min;
		//int s = now->tm_sec;

		struct tm newtime;
		time_t new_now = time(0);
		localtime_s(&newtime, &new_now);
		int hour = newtime.tm_hour - 12;
		int min = newtime.tm_min;
		int sec = newtime.tm_sec;

		//std::cout << h << ":" << m << ":" << s;

		std::cout
			<< "\nCurrent Time"
			<< std::endl;

		std::cout
			<< hour
			<< ":"
			<< min
			<< ":"
			<< sec
			<< std::endl;

	}

	//function to display current date
	void current_date(void)
	{
			
		int year = (now->tm_year + 1900);
		int day = now->tm_mday;
		int month = now->tm_mon + 1;

			std::cout 
				<< "\nTodays' Date" 
				<< std::endl;

			std::cout
				<< month
				<< "/"
				<< day
				<< "/"
				<< year
				<< std::endl;

	}

};

//create a class for the stopwatch functionality
class main_stopwatch : public main_clock
{
public:
	//variable for start time
	//std::tm* start_time = main_clock::now;

	//variable for stop time
	//std::tm* stop_time = main_clock::now;

	//variable time delta of system time at current time - start time
	//long time_delta = start_time - stop_time;
	

};

//create a class for the menu and save/load ability
class main_saveload
{
public:
	//variable for path to .txt file
	std::string path = "C:\\C++";

	//function to display menu
	int main_menu(void)
	{
		int choice = 0;

		std::cout
			<< "\nMain Menu\n"
			<< "1. Display Current Date\n"
			<< "2. Display Current Time\n"
			<< "3. Start Stopwatch\n"
			<< "4. Exit\n"
			<< "Selection: ";
		std::cin
			>> choice;

		return choice;

	}

	//function to save data to above .txt file
	

	//function to load data to above .txt file


};



int main(void) 
{
	//boolean for displaying system time
	//should always be on until program exit
	bool active = true;

	main_clock clock;
	main_saveload mainScreen;

	while(active)
	{
		int user_choice = mainScreen.main_menu();

		while (user_choice < 1 or user_choice > 4)
		{

			std::cout
				<< "Your choice is invalid.\n"
				<< "Please try again.\n";

			user_choice = mainScreen.main_menu();

		}

		int start_time_h = 0, start_time_m = 0, start_time_s = 0;

		switch (user_choice)
		{
		case(1):
			clock.current_date();
			break;
		case(2):
			clock.current_time();
			break;
		case(3):
			
			break;
		case(4):
			active = false;
			break;
		}
		//main_stopwatch stopwatch;
		//std::cout << clock.time_val << std::endl;
		//std::cout << stopwatch.start_time << std::endl;
		//Sleep(10000);
		//std::cout << stopwatch.stop_time << std::endl;

	}
	return 0;
}