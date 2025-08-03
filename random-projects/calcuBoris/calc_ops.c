#include <math.h>
#include "calc_ops.h"

float add(float x, float y)
    {
        return x + y;
    }
    
    float subtract(float x, float y)
    {
        return x - y;
    }
    
    float multiply(float x, float y)
    {
        return x * y;
    }
    
    float divide(float x, float y)
    {
        return x / y;
    }

    int is_integer(float x)
    {
        return fabs(x - (int)x) < 0.000001;
    }