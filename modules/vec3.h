#ifndef VEC3_H
#define VEC3_H


class Vec3
{
public:
        Vec3();
        Vec3(const Vec3 &newVec);
        Vec3(double newX, double newY, double newZ);

        double length2(); // length square
        double length();
        double distanceTo(const Vec3 vec);
        bool isEqualTo(const Vec3 vec);
        double dot(const Vec3 vec);

        void add(const Vec3 vec);
        void sub(const Vec3 vec);
        void mult(const double num);
        void div(double num);
        void cross(const Vec3 vec);
        void normalize();

        Vec3 getAdd(const Vec3 vec);
        Vec3 getSub(const Vec3 vec);
        Vec3 getMult(double num);
        Vec3 getDiv(double num);
        Vec3 getCross(const Vec3 vec);
        Vec3 getNormalize();

        Vec3 operator+(const Vec3 &vec) const;
        Vec3 operator-(const Vec3 &vec) const;
        Vec3 operator*(const double num) const;
        void operator+=(const Vec3 &vec);
        void operator-=(const Vec3 &vec);

        // getters - setters
        double getX() const { return x; }
        double getY() const { return y; }
        double getZ() const { return z; }

        void setX(double newX) { x = newX; }
        void setY(double newY) { y = newY; }
        void setZ(double newZ) { z = newZ; }

private:
        double x, y, z;
};

#endif // VEC3_H
