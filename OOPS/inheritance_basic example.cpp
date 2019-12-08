#include<iostream>
using namespace std;
class shape{
    protected:
        int width;
        int height;
    public:
        void setwidth(int w)
        {
            width =w;
        }
        void setheight(int h)
        {
            height =h;
        }

};
class rectangle :public shape{
    public:
     int getarea(){
        return (width * height);
     }
};
int main(){
    rectangle rect;
    rect.setheight(7);
    rect.setwidth(5);
    cout<<"Total area:  "<<rect.getarea()<<endl;
}







