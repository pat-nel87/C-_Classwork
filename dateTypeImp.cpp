#include <iostream>
#include <iomanip>
#include "dateType.h"

using namespace std;

 void dateType::setDate(int month, int day, int year)
{
  if (month <= 12) {
    dMonth = month;
  }
  else {
    dMonth = 1;    
    } 
  if (day <= 31) {
    if (dMonth == 2) {
      dDay = 1;
    }
    else 
      dDay = day;
  }
  if (year <= 2021) {
    dYear = year;
  }

}

int dateType::getDay() const
{
  return dDay;
}

int dateType::getMonth() const
{
  return dMonth;
}

int dateType::getYear() const
{
  return dYear;
}

void dateType::printDate() const
{
  cout << dMonth << "-"
        << dDay << "-" << dYear;
}

bool dateType::isLeapYear() 
{
  if (dYear % 4 == 0) {
    //cout << endl << "this is a leap year" << endl;
    return true;   
  }
  if (dYear % 100 == 0) {
    //cout << endl << "this is a leap year" << endl;
    return true;
  }
  if (dYear % 400 == 0) {
    //cout << endl << "this is a leap year" << endl;
    return true;
  }
  return false;
}
dateType::dateType(int m , int d, int y)
{

  setDate(m, d, y);

}; 


