#include<iostream>
using namespace std;
class rectangle{
int width, height;
public:
    rectangle (){
    width = 0;
    height = 0;
    }
rectangle(int, int);
int get_width();
int get_height();

rectangle add(rectangle);
rectangle operator+(rectangle);
friend rectangle operator+(int, rectangle);

rectangle subtract(rectangle);
rectangle operator-(rectangle);
friend rectangle operator-(int, rectangle);

rectangle multiply(rectangle);
rectangle operator*(rectangle);
friend rectangle operator*(int, rectangle);

rectangle divide(rectangle);
rectangle operator/(rectangle);
friend rectangle operator/(int, rectangle);

friend ostream &operator<<(ostream &output, const rectangle &r){
output <<"Width: "<<r.width<<" Height: "<<r.height;
return output;
}


friend istream &operator>>(istream & input,  rectangle &r){
input>>r.width>>r.height;
return input;
}
};

rectangle::rectangle(int x, int y){
width = x;
height = y;
}
int rectangle::get_width(){

return width;
}
int rectangle::get_height(){
return height;
}

//ADDITION
rectangle rectangle::add(rectangle r){
rectangle temp(0,0);
temp.width= this->width + r.width;
temp.height= this->height + r.height;
return temp;
}
rectangle rectangle::operator+(rectangle r1){
rectangle temp(0,0);
temp.width= this->width + r1.width;
temp.height= this->height + r1.height;
return temp;
}
rectangle operator+(int i, rectangle r){
rectangle temp(0,0);
temp.width= i + r.width;
temp.height= i + r.height;
return temp;
}

//SUBTRACTION
rectangle rectangle::subtract(rectangle r){
rectangle temp(0,0);
temp.width= this->width - r.width;
temp.height= this->height - r.height;
return temp;
}
rectangle rectangle::operator-(rectangle r1){
rectangle temp(0,0);
temp.width= this->width - r1.width;
temp.height= this->height - r1.height;
return temp;
}
rectangle operator-(int i, rectangle r){
rectangle temp(0,0);
temp.width= i - r.width;
temp.height= i - r.height;
return temp;
}

//Multiplication
rectangle rectangle::multiply(rectangle r){
rectangle temp(0,0);
temp.width= this->width * r.width;
temp.height= this->height * r.height;
return temp;
}
rectangle rectangle::operator*(rectangle r1){
rectangle temp(0,0);
temp.width= this->width * r1.width;
temp.height= this->height * r1.height;
return temp;
}
rectangle operator*(int i, rectangle r){
rectangle temp(0,0);
temp.width= i * r.width;
temp.height= i * r.height;
return temp;
}

//Division

rectangle rectangle::divide(rectangle r){
rectangle temp(0,0);
temp.width= this->width / r.width;
temp.height= this->height / r.height;
return temp;
}
rectangle rectangle::operator/(rectangle r1){
rectangle temp(0,0);
temp.width= this->width / r1.width;
temp.height= this->height / r1.height;
return temp;
}
rectangle operator/(int i, rectangle r){
rectangle temp(0,0);
temp.width= i / r.width;
temp.height= i / r.height;
return temp;
}

int main(){
rectangle r1(3,4);
rectangle r2(5,6);
rectangle pat;
rectangle r3= r1.add(r2);
cout<<"Width: "<<r3.get_width()<<" Height: "<<r3.get_height()<<endl;
r3=r1+r2;
cout<<"Width: "<<r3.get_width()<<" Height: "<<r3.get_height()<<endl;
r3= 2+r1;
cout<<"Width: "<<r3.get_width()<<" Height: "<<r3.get_height()<<endl;

//SUBTRACTION
cout <<endl<<endl<<"SUBTRACTION"<<endl<<endl;
rectangle r4(3,4);
rectangle r5(5,6);
rectangle r6= r4.subtract(r5);
cout<<"Width: "<<r6.get_width()<<" Height: "<<r6.get_height()<<endl;
r6=r4-r5;
cout<<"Width: "<<r6.get_width()<<" Height: "<<r6.get_height()<<endl;
r6= 2-r4;
cout<<"Width: "<<r6.get_width()<<" Height: "<<r6.get_height()<<endl;


//MULTIPLICATION
cout <<endl<<endl<<"MULTIPLCATION"<<endl<<endl;
rectangle r7(3,4);
rectangle r8(5,6);
rectangle r9= r7.multiply(r8);
cout<<"Width: "<<r9.get_width()<<" Height: "<<r9.get_height()<<endl;
r9=r7*r8;
cout<<"Width: "<<r9.get_width()<<" Height: "<<r9.get_height()<<endl;
r9= 2*r7;
cout<<"Width: "<<r9.get_width()<<" Height: "<<r9.get_height()<<endl;

//Division

cout <<endl<<endl<<"DIVISION"<<endl<<endl;
rectangle ra(12,4);
rectangle rb(4,2);
rectangle rc= ra.divide(rb);
cout<<"Width: "<<rc.get_width()<<" Height: "<<rc.get_height()<<endl;
rc=ra/rb;
cout<<"Width: "<<rc.get_width()<<" Height: "<<rc.get_height()<<endl;
rc= 2/ra;
cout<<"Width: "<<rc.get_width()<<" Height: "<<rc.get_height()<<endl;

cout<<"Enter the value of rectangle"<<endl;
cin>>pat;
cout <<"1st Rectangle : "<<r1<<endl;
cout <<"2nd Rectangle : "<<r2<<endl;
cout <<"3rd Rectangle : "<<r3<<endl;
cout <<"4th Rectangle : "<<pat<<endl;

return 0;
}
