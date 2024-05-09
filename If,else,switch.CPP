//Group 10 Calendar Activity 2
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

bool ISLEAPYEAR(int year);
int DAYSINMONTH(int month, int year);
int DAYSOFYEAR(int year, int month, int day);
void PRINTCALENDAR(int month, int day, int year);

int main() {
  char restart;

  do {
    int month, day, year;

    system("cls");
    system("Color 0F");
    cout << "\n\n";
    cout << setw (25);
    cout << "\t\t\t\t+-------------------------------+\n";
    cout << "--------------------------------| Calendar Group 10 Activity 2  |-----------------------------------\n";
    cout << "\t\t\t\t+-------------------------------+\n";
    bool validInput = false;
    while (!validInput) {
      cout << "Enter month (1-12): ";
      cin >> month;
      cout << "Enter day (1-31): ";
      cin >> day;
      cout << "Enter year (1900-2025): ";
      cin >> year;


      validInput = true;
    }


    PRINTCALENDAR(month, day, year);

    cout << endl << "Do you want to restart (y/n)? ";
    cin >> restart;
  } while (restart == 'y');

  return 0;
}


bool ISLEAPYEAR(int year) {
  return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}


int DAYSINMONTH(int month, int year) {
  switch (month) {
    case 1:
        case 3:
            case 5:
                case 7:
                    case 8:
                        case 10:
                            case 12:
      return 31;
    case 4:
        case 6:
            case 9:
                case 11:
      return 30;
    case 2:
      return ISLEAPYEAR(year) ? 29 : 28;
    default:
      return 0;
  }
}


int DAYSOFYEAR(int year, int month, int day) {

  int DAYSINMONTH[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  year -= month < 3;
  return (year + year / 4 - year / 100 + year / 400 + DAYSINMONTH[month - 1] + day) % 7;
}


void PRINTCALENDAR(int month, int day, int year) {

  int STARTINGDAY = DAYSOFYEAR(year, month, 1) % 7;


  string MONTHNAMES[] = {"\t\t JANUARY", "\t\t FEBRUARY", "\t\t MARCH", "\t\t APRIL", "\t\t MAY", "\t\t JUNE    ",
                         "\t\t JULY", "\t\t AUGUST", "\t\t SEPTEMBER", "\t\t OCTOBER", "\t\t NOVEMBER", "\t\t DECEMBER"};

  cout << "\n\n" << MONTHNAMES[month - 1] << " Year " << year << "\n" << endl;

  cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;

  for (int i = 0; i < STARTINGDAY; i++) {
    cout << "\t";
  }


  int DAYSINCURRENTMONTH = DAYSINMONTH(month, year);
  for (int CURRENTDAY = 1; CURRENTDAY <= DAYSINCURRENTMONTH; CURRENTDAY++) {

    if (CURRENTDAY == day) {
      cout << "[" << CURRENTDAY << "]\t";
    } else {
      cout << CURRENTDAY << "\t";
    }
    if ((CURRENTDAY + STARTINGDAY) % 7 == 0) {
      cout << endl;
    }
  }

  cout << endl;
}
