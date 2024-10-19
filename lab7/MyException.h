#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

class MyException
{
public:
    enum exceptions
    {
        less_1850,
        more_current_year,
        negative,
        all_exception
    };
};

#endif