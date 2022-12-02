#include <iostream>

class DateClass // members are private by default
{
    int m_month; // private by default, can only be accessed by other members
    int m_day;   // private by default, can only be accessed by other members
    int m_year;  // private by default, can only be accessed by other members

public:
    void setDate(int month, int day, int year) // public, can be accessed by anyone
    {
        // setDate() can access the private members of the class because it is a member of the class itself
        m_month = month;
        m_day = day;
        m_year = year;
    }

    void print() // public, can be accessed by anyone
    {
        std::cout << m_month << "/" << m_day << "/" << m_year << std::endl;
    }
};

int main()
{
    DateClass birthDate;
    birthDate.setDate(7, 28, 1992); // okay, because setDate() is public
    birthDate.print(); // okay, because print() is public


    DateClass dddDate;
    dddDate.setDate(9, 16, 19945);
    birthDate.print();
    dddDate.print();

    return 0;
}