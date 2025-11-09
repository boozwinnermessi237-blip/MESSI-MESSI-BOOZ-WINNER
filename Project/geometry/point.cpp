#include "point.h"
#include <cmath>
#include <sstream>

Point2f MakeP2f(float x, float y) {
    Point2f p;
    p.x = x;
    p.y = y;
    return p;
}

Point2f Translate(const Point2f& p, float dx, float dy) {
    return MakeP2f(p.x + dx, p.y + dy);
}

Point2f Translate(const Point2f& p, const Vector2f& v) {
    return MakeP2f(p.x + v.x, p.y + v.y);
}

Point2f Scale(const Point2f& p, float sx, float sy) {
    return MakeP2f(p.x * sx, p.y * sy);
}

Point2f Scale(const Point2f& p, const Vector2f& s) {
    return MakeP2f(p.x * s.x, p.y * s.y);
}

Point2f Rotate(const Point2f& p, float angleDeg) {
    float rad = angleDeg * 3.14159265f / 180.0f;
    return MakeP2f(
        p.x * cos(rad) - p.y * sin(rad),
        p.x * sin(rad) + p.y * cos(rad)
    );
}

std::string ToString(const Point2f& p) {
    std::ostringstream oss;
    oss << "(" << p.x << ", " << p.y << ")";
    return oss.str();
}
