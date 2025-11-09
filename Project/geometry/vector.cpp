#include "vector.h"
#include "point.h"
#include <sstream>

Vector2f MakeV2f(float x, float y) {
    Vector2f v;
    v.x = x;
    v.y = y;
    return v;
}

Vector2f MakeV2f(const Point2f& a, const Point2f& b) {
    return MakeV2f(b.x - a.x, b.y - a.y);
}

Vector2f Add(const Vector2f& a, const Vector2f& b) {
    return MakeV2f(a.x + b.x, a.y + b.y);
}

Vector2f Sub(const Vector2f& a, const Vector2f& b) {
    return MakeV2f(a.x - b.x, a.y - b.y);
}

Vector2f Scale(const Vector2f& v, float s) {
    return MakeV2f(v.x * s, v.y * s);
}

float Dot(const Vector2f& a, const Vector2f& b) {
    return a.x * b.x + a.y * b.y;
}

float Length(const Vector2f& v) {
    return std::sqrt(v.x * v.x + v.y * v.y);
}

Vector2f Normalize(const Vector2f& v) {
    float len = Length(v);
    if (len == 0) return MakeV2f(0,0);
    return MakeV2f(v.x / len, v.y / len);
}

Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t) {
    return MakeV2f(a.x + (b.x - a.x) * t, a.y + (b.y - a.y) * t);
}

float Determinant(const Vector2f& a, const Vector2f& b) {
    return a.x * b.y - a.y * b.x;
}

std::string ToString(const Vector2f& v) {
    std::ostringstream oss;
    oss << "(" << v.x << ", " << v.y << ")";
    return oss.str();
}
