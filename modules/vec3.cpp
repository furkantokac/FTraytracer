#include "vec3.h"
#include "utils.h"
#include <math.h>

Vec3::Vec3() :
        x(0), y(0), z(0)
{
}

Vec3::Vec3(const Vec3 &newVec) :
        x(newVec.getX()), y(newVec.getY()), z(newVec.getZ())
{
}

Vec3::Vec3(double newX, double newY, double newZ) :
        x(newX), y(newY), z(newZ)
{
}

double
Vec3::length2()
{
        double res = x*x + y*y + z*z;
        return res;
}

double
Vec3::length()
{
        double res = sqrt(length2());
        return res;
}

double
Vec3::distanceTo(const Vec3 vec)
{
        double res = sqrt(pow((x - vec.x), 2) +
                          pow((y - vec.y), 2) +
                          pow((z - vec.z), 2)
                          );
        return res;
}

bool
Vec3::isEqualTo(const Vec3 vec)
{
        if (Utils::cmp(x, vec.getX()) &&
            Utils::cmp(y, vec.getY()) &&
            Utils::cmp(z, vec.getZ()))
        {
                return true;
        }

        return false;
}

double Vec3::dot(const Vec3 vec)
{
        double res = (x * vec.x) + (y * vec.y) + (z * vec.z);
        return res;
}

void
Vec3::add(Vec3 vec)
{
        x += vec.x;
        y += vec.y;
        z += vec.z;
}

void
Vec3::sub(Vec3 vec)
{
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;
}

void
Vec3::mult(const double num)
{
        x *= num;
        y *= num;
        z *= num;
}

void
Vec3::div(double num)
{
        x /= num;
        y /= num;
        z /= num;
}

void
Vec3::cross(const Vec3 vec2)
{
        Vec3 vec1(*this);

        x = (vec1.getY() * vec2.getZ()) - (vec2.getY() * vec1.getZ());
        y = (vec2.getX() * vec1.getZ()) - (vec1.getX() * vec2.getZ());
        z = (vec1.getX() * vec2.getY()) - (vec2.getX() * vec1.getY());
}

void
Vec3::normalize()
{
        div(length());
}

Vec3
Vec3::getAdd(const Vec3 vec)
{
        Vec3 res(*this);
        res.add(vec);
        return res;
}

Vec3
Vec3::getSub(const Vec3 vec)
{
        Vec3 res(*this);
        res.sub(vec);
        return res;
}

Vec3
Vec3::getMult(const double num)
{
        Vec3 res(*this);
        res.mult(num);
        return res;
}

Vec3
Vec3::getDiv(double num)
{
        Vec3 res(*this);
        res.div(num);
        return res;
}

Vec3
Vec3::getCross(const Vec3 vec)
{
        Vec3 res(*this);
        res.cross(vec);
        return res;
}

Vec3
Vec3::getNormalize()
{
        Vec3 res(*this);
        res.normalize();
        return res;
}

Vec3
Vec3::operator+(const Vec3 &vec) const
{
        Vec3 res(x + vec.x, y + vec.y, z + vec.z);
        return res;
}

Vec3
Vec3::operator-(const Vec3 &vec) const
{
        Vec3 res(x - vec.x, y - vec.y, z - vec.z);
        return res;
}

Vec3 Vec3::operator*(const double num) const
{
}

void
Vec3::operator+=(const Vec3 &vec)
{
        add(vec);
}

void
Vec3::operator-=(const Vec3 &vec)
{
        sub(vec);
}
