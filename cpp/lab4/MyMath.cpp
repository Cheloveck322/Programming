#include "MyMath.h"

int MyMath::add(int a, int b)
{
    ++m_counter;
    return a + b;
}

int MyMath::sub(int a, int b)
{
    ++m_counter;
    return a - b;
}

int MyMath::mult(int a, int b)
{
    ++m_counter;
    return a * b;
}

int MyMath::div(int a, int b)
{
    ++m_counter;
    return a / b;
}

int MyMath::getCounter() const
{
    return m_counter;
}