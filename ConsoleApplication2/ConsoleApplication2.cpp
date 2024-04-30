#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(int r) : radius(r) {
        cout << "***평면 원 계산기 접속***" << endl << endl;
    }
    ~Circle() {
        cout << "평면 원 계산기 종료..." << endl << endl;
    }
    double area() {
        return radius * radius * 3.14;
    }
    double circum() {
        return radius * 2 * 3.14;
    }
};

class Cylinder {
private:
    int radius;
    int height;
public:
    Cylinder(int r, int h) : radius(r), height(h) {
        cout << "***원기둥 계산기 접속***" << endl << endl;
    }
    ~Cylinder() {
        cout << "원기둥 계산기 종료..." << endl << endl;
    }

    double volume() {
        return 3.14 * radius * radius * height;
    }
    double area() {
        return 2 * 3.14 * radius * (radius + height);
    }
};

class Cone {
private:
    int radius;
    int height;
public:
    Cone(int r, int h) : radius(r), height(h) {
        cout << "***원뿔 계산기 접속***" << endl << endl;
    }
    ~Cone() {
        cout << "원뿔 계산기 종료..." << endl << endl;
    }
    double volume() {
        return 1.0 / 3 * 3.14 * radius * radius * height;
    }
    double area() {
        return radius * radius * 3.14 + radius * 3.14 * sqrt(radius * radius + height * height);
    }
};

class Orb {
private:
    int radius;
public:
    Orb(int r) : radius(r) {
        cout << "***구 계산기 접속***" << endl << endl;
    }
    ~Orb() {
        cout << "구 계산기 종료..." << endl << endl;
    }
    double volume() {
        return 4.0 / 3 * 3.14 * radius * radius * radius;
    }
    double area() {
        return 4 * 3.14 * radius * radius;
    }
};

int main() {
    int choice = 0;
    while (choice != 8) {
        cout << "원하는 계산을 선택하세요" << endl;
        cout << "1. 원의 넓이 계산" << endl;
        cout << "2. 원의 둘레 계산" << endl;
        cout << "3. 원기둥의 부피 계산" << endl;
        cout << "4. 원기둥의 겉넓이 계산" << endl;
        cout << "5. 원뿔의 부피 계산" << endl;
        cout << "6. 구의 부피 계산" << endl;
        cout << "7. 구의 겉넓이 계산" << endl;
        cout << "8. 종료" << endl;
        cout << "선택: ";
        cin >> choice;
        cout << endl;

        int r, h;
        switch (choice) {
        case 1:
            cout << "반지름 입력: ";
            cin >> r;
            cout << endl;
            {
                Circle circle(r);
                cout << "원의 넓이: " << circle.area() << endl;
            }
            break;
        case 2:
            cout << "반지름 입력: ";
            cin >> r;
            cout << endl;
            {
                Circle circle(r);
                cout << "원의 둘레: " << circle.circum() << endl;
            }
            break;
        case 3:
            cout << "반지름 입력: ";
            cin >> r;
            cout << "높이 입력: ";
            cin >> h;
            cout << endl;
            {
                Cylinder cylinder(r, h);
                cout << "원기둥의 부피: " << cylinder.volume() << endl;
            }
            break;
        case 4:
            cout << "반지름 입력: ";
            cin >> r;
            cout << "높이 입력: ";
            cin >> h;
            cout << endl;
            {
                Cylinder cylinder(r, h);
                cout << "원기둥의 겉넓이: " << cylinder.area() << endl;
            }
            break;
        case 5:
            cout << "반지름 입력: ";
            cin >> r;
            cout << "높이 입력: ";
            cin >> h;
            cout << endl;
            {
                Cone cone(r, h);
                cout << "원뿔의 부피: " << cone.volume() << endl;
            }
            break;
        case 6:
            cout << "반지름 입력: ";
            cin >> r;
            cout << endl;
            {
                Orb orb(r);
                cout << "구의 부피: " << orb.volume() << endl;
            }
            break;
        case 7:
            cout << "반지름 입력: ";
            cin >> r;
            cout << endl;
            {
                Orb orb(r);
                cout << "구의 겉넓이: " << orb.area() << endl;
            }
            break;
        case 8:
            cout << "프로그램을 종료합니다." << endl;
            break;
        default:
            cout << "잘못된 숫자입니다." << endl;
        }
        cout << endl;
    }
    return 0;
}
