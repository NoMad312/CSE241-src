#include <iostream>

using namespace std;

struct Date
{
  int month;
  int day;
  int year;
};

struct Person
{
  string name;
  Date birthday;
};

void printDate(const Date& date) {
  cout << date.month << '/' << date.day << '/' << date.year << '\n';
}

void printPerson(const Person& person) {
  cout << "Name: " << person.name << '\n';
  cout << "Birthday: ";
  printDate(person.birthday);
}

int main() {
  Person person = {"Jeehoon", {1,1,2000}};
  printPerson(person);
}
