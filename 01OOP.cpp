#include<iostream>
using namespace std;
class mango;
class apple
{
    int x;

public:
    void getdata()
    {
        cout << "enter value of x";
        cin >> x;
    }
    friend void add(apple, mango);
};

class mango
{
    int y;

public:
    void getdata2()
    {
        cout << "y=?" << endl;
        cin >> y;
        friend void add(apple, mango);
    };


    void add(apple a1, mango m1)
    {
        int sum = a1.x + m1.y
           cout<<"sum=" << sum;
          
    }


    int main()
    {
        system("cls");
apple obj1;
mango obj2;
obj1.getdata1();
obj2.getdata2();
add(obj1,obj2);
getch();
    }
