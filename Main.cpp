#include <iostream>
#include <chrono>
#include <ctime>
#include <string>

using namespace std;

//create a class for the clock to hold and display time
class main_clock
{
public:
	//variable to hold current system time
	std::time_t time_val = std::time(0);
	std::tm* now = std::localtime(&time_val);
	//function to display current time
	void current_time(void)
	{

		int hour = now->tm_hour + 1;
		int min = now->tm_min + 1;
		int sec = now->tm_sec;

		std::cout
			<< "Current Time"
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
				<< "Todays' Date" 
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
class main_stopwatch
{
	//variable for start time

	//variable for stop time
	
	//variable time delta of system time at current time - start time



};

//create a class to save/load data
class main_saveload
{
	//variable for path to .txt file

	//function to save data to above .txt file

	//function to load data to above .txt file


};



int main(void) 
{
	//boolean for displaying system time
	//should always be on until program exit
	main_clock clock;
	clock.current_date();
	clock.current_time();

	return 0;
}