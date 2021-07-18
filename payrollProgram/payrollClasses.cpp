#include <iostream>
#include <string>

using namespace std;

class UserInput
{
    public:
    	static int inputYear()
    	{
    		int year = 0;

            do
            {
                cout << "\nPlease enter the year: ";
                cin.clear();
                cin.ignore(1024, '\n');
                cin >> year;
            } while (!cin.good());
    		return year;
    	}
        
        static int getMonth()
        {
            int month = 0;

            cout << "Please enter the month: ";
            cin >> month;
            while (!cin.good() || month < 1 || month > 12)
            {
                cout << "An invalid month was entered. \nPlease enter a number between 1 and 12";
                cin.clear();
                cin.ignore(1024, '\n');
                cin >> month;
            }
            return month;
        }
        
        static void inputEmployeeHours(List<Staff> myStaff)
        {
            for (int i = 0; i < myStaff.Count; i++)
            {
                try
                {
                    Console.WriteLine("\nEnter hours for {0}", myStaff[i].nameOfStaff);
                    myStaff[i].hoursWorked = Int32.Parse(Console.ReadLine());
                    myStaff[i].calculatePay();
                    Console.WriteLine(myStaff[i].ToString());
                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message);
                    i--;
                }
            }
        }
};




class Staff
{
    private:
    	int hoursWorked;
    	float hourlyRate,
    	      totalPay,
    	      basicPay;
    	string name;

    public:



};


