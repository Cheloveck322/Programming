#ifndef MYMATH_H
#define MYMATH_H

class MyMath
{
public:
    MyMath() = default;

    static int add(int a, int b);

    static int sub(int a, int b);

    static int mult(int a, int b);

    static int div(int a, int b);

    int getCounter() const;

private:
    static inline int m_counter{ 0 };
};

#endif