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
    float x,y,c,r;
    point pt,pt2;
    printf("Center of Circle: ");
    cin>>x>>y;
    pt.xPosition = x;
    pt.yPosition = y;
    printf("Radius of Circle: ");
    cin>>r;
    Circle circle(pt, r);
    printf("Point to Check: ");
    cin>>x>>y;
    pt2.xPosition = x;
    pt2.yPosition = y;
    printf("Area of Circle is ");
    cout<< circle.area()<<endl;
    cout<<"Distance from Center to Point ("<< pt2.xPosition << ", " << pt2.yPosition << ") is "<< circle.distanceFromCenter(pt2)<<endl;
    if (circle.contains(pt2) == 0){
        printf("This point is not in this circle.");
    }else{
        printf("This circle contains this point.");
    }
    
    return 0;
}