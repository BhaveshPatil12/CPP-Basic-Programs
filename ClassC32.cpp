#include<iostream>
using namespace std;
class Box
{
   public:
    float Volume(void)
    {
       return length*breadth*height;
    }
    void Length(float l )
    {
       length=l;
    }
    void Breadth(float b)
    {
       breadth=b;
    }
    void Height(float h)
    {
        height=h;
    }
    Box operator+(const Box& b)
    {
       Box box;
       box.length = this->length + b.length;
       box.breadth = this->breadth + b.breadth;
       box.height = this->height + b.height;
       return box;
    }
   private:
        float length;
        float breadth;
        float height;
};
int main()
{
   Box Box1;
   Box Box2;
   Box Box3;
   float volume = 0.0;
   Box1.Length(6.0);
   Box1.Breadth(7.0);
   Box1.Height(5.0);
   Box2.Length(12.0);
   Box2.Breadth(13.0);
   Box2.Height(10.0);
   volume = Box1.Volume();
   cout<<"Volume of Box1 : "<<volume<<endl;
   volume = Box2.Volume();
   cout<<"Volume of Box2 : "<<volume<<endl;
   Box3 = Box1 + Box2;
   volume = Box3.Volume();
   cout<<"Volume of Box3 : "<<volume<<endl;
   return 0;
}