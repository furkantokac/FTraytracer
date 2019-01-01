#ifndef UTILS_H
#define UTILS_H

#include <math.h>

#define DOUBLE_PRECISION 0.000000001

namespace Utils
{

bool
cmp(const double num1,
    const double num2,
    const double precision = DOUBLE_PRECISION)
{
        return abs(num1 - num2) < precision;
}

}
#endif // UTILS_H
