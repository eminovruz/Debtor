#pragma once

#pragma once


class DateTime
{
private:
    int day;
    string month;
    int year;
public:

    DateTime() = default;

    DateTime(string month, int day, int year) {
        this->month = month;
        this->day = day;
        this->year = year;
    }
   

    int get_day()  const { return day; }
    int get_year() const  { return year; }
    string get_month() const  { return month; }

    friend ostream& operator<<(ostream& out, const DateTime& d);
};

ostream& operator<<(ostream& out, const DateTime& d) {
    out << d.get_day() << endl;
    out << d.get_month() << endl;
    out << d.get_year() << endl;

    return out;
}

class Debtor
{
    string fullname;
    DateTime birthDay;
    string phone;
    string email;
    string address;
    int debt;
public:
    
    Debtor() = default;


    Debtor(string fullname, DateTime birthDay, string phone, string email, string address, int debt)
    {
        this->fullname = fullname;
        this->birthDay = birthDay;
        this->phone = phone;
        this->email = email;
        this->address = address;
        this->debt = debt;
    }


    string get_FullName() const {
        return fullname;
    }

    DateTime get_Birthday() const { return birthDay; }

    string get_Phone() const { return phone; }
                       const
    string get_Email() const { return email; }

    string get_Address() const { return address; }

    int get_Debt() const { return debt; }


    friend ostream& operator<<(ostream& out, const Debtor& d);
};

ostream& operator<<(ostream& out, const Debtor& d) {
    out << d.get_FullName() << endl;
    out << d.get_Birthday() << endl;
    out << d.get_Address() << endl;
    out << d.get_Email() << endl;
    out << d.get_Debt() << endl;
    out << d.get_Phone() << endl;

    return out;
};
