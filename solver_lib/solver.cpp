#include "solver.h"

#include <stdexcept>
#include <cmath> // для sqrtf
void solve(float a, float b, float c, float& x1, float& x2)
{
    float d = (b * b) - (4 * a * c);

    if (d < 0)
    {
        throw std::logic_error{"error: discriminant < 0"};
    }

    x1 = (-b - sqrtf(d)) / (2 * a); // !!! не компилировалось с std:: -
    x2 = (-b + sqrtf(d)) / (2 * a); // функция лежит в глобальной области видимости
}
