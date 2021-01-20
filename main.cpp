#include<iostream>
using namespace std;


class Point {
public:

    Point(int a);
    Point();
    Point operator +(Point p);
    int point;

    void setx(int a);
    void output();

private:

    int x;
};

void Point::setx(int a){
    x=a;
};

Point::Point(int a):point(a){
}


Point::Point(){
}

Point Point::operator+(Point p) {
    Point p1(0);
    p1=x+p.x;
    return p1;

}

void Point::output(){
    cout<<x;
}

class PP:public Point{
public:

    void setc();
private:
    int c;
};

void PP::setc(){
    cin>>c;
}



using namespace std;

int main() {

    PP p1,p2;

    p1.setx(2);
    p2.setx(3);

    Point p3; lm

    p3=p1+p2;

    p3.output();

    p3.setx(3);


    return 0;
}
