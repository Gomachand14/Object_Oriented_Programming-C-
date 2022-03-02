#include<iostream.h>
// #include<conoi.h>
class student
{
    private: int roll no;
    public:
    void enter
    {
        cout<<"enter roll no \n";
        cin>>roll no;
    }
    void display()
    {
        cout<<"roll no="<<roll no;
    }
};
void main()
{
    clrscr();
    student a;
    a. enter();
    a. display();
    getch();
}
