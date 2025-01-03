#include "Vec2.h"
#include <cmath>

Vec2::Vec2()
{
}

Vec2::Vec2(float xin, float yin)
{
    x = xin;
    y = yin;
}

bool Vec2::operator==(const Vec2 &rhs) const
{
    return x == rhs.x && y == rhs.y;
}

bool Vec2::operator!=(const Vec2 &rhs) const
{
    return x != rhs.x || y != rhs.y;
}

Vec2 Vec2::operator+(const Vec2 &rhs) const
{
    return Vec2(x + rhs.x, y + rhs.y);
}

Vec2 Vec2::operator-(const Vec2 &rhs) const
{
    return Vec2(x - rhs.x, y - rhs.y);
}

Vec2 Vec2::operator*(const float val) const
{
    return Vec2(x * val, y * val);
}

Vec2 Vec2::operator/(const float val) const
{
    return Vec2(x / val, y / val);
}

Vec2 &Vec2::operator+=(const Vec2 &rhs)
{
    x += rhs.x;
    y += rhs.y;
    return *this;
}

Vec2 &Vec2::operator-=(const Vec2 &rhs)
{
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}

Vec2 &Vec2::operator*=(const float val)
{
    x *= val;
    y *= val;
    return *this;
}

Vec2 &Vec2::operator/=(const float val)
{
    x /= val;
    y /= val;
    return *this;
}

float Vec2::dist(const Vec2 &rhs) const
{
    return sqrt(pow(x - rhs.x, 2) + pow(y - rhs.y, 2));
}

float Vec2::length() const
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

void Vec2::normalize()
{
    float len = this->length();
    (*this) /= len;
}