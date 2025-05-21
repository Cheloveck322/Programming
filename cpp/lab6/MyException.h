#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

enum exceptions
    {
        less_1850,
        more_current_year,
        negative,
        all_exception
    };

class MyException: public std::exception
{
public:
    explicit MyException(const exceptions& ex)
        : m_except { ex }
    {
    }

    MyException() = default;

    const char* what() const throw() override
    {
        switch (m_except)
        {
        case less_1850:
            return "I don't drust you.";
        case more_current_year:
            return "You are not borned now.";
        case negative:
            return "You entered negative number.";

        default:
            return "Vsye okey.";
        }
    }

    MyException& whatError(const exceptions& ex)
    {
        m_except = ex;
        return *this;
    }
    
private:
    exceptions m_except;
};

#endif