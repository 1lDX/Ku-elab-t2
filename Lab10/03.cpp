#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
    private:
        point center;
        double radius;
    public:
        Circle(point c,double r){
            center = c;
            radius = r;
        }

        double area(){
            return (M_PI*(radius*radius));
        }

       double distanceFromCenter(point pt){
            return sqrt(pow(pt.xPosition - center.xPosition,2) + pow(pt.yPosition - center.yPosition,2));
       }

       int contains(point pt){
            double dis = distanceFromCenter(pt);
            if (dis > radius){
                return 0;
            }else{
                return 1;
            }
            
       }
};


int main(){
    point p;

    point p2;
    p.xPosition = 0;
    p.yPosition = 0;
    p2.xPosition = 10;
    p2.yPosition = 30;

    Circle circle(p,30);

    cout<<circle.contains(p2);

}