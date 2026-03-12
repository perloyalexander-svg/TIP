#include <iostream>

using namespace std;

class Point2D {
private:
    int c1, c2;
    static int pointCount;
public:
    Point2D(int x, int y) {
        c1 = x;
        c2 = y;
        pointCount++;

        cout << "the point creation constructor was called "<< "x: "<< x <<" y: "<< y <<  endl;
    }
    Point2D(const Point2D& other) {
        c1 = other.c1;
        c2 = other.c2;
        pointCount++;

        cout << "the point copy constructor was called "<< "x: "<< other.c1 << " y: "<< other.c2 << endl;
    }
    static int getPointCount() {
        return pointCount;
    }
};
int Point2D::pointCount = 0;

int main() {
    Point2D p1(1, 2);
    Point2D p2(p1);
    Point2D p3 = p2;

    cout << "Number of points" << Point2D::getPointCount() << endl;
}
