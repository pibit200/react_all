#include<bits/stdc++.h>
using namespace std;

//Abstraction


// class Shape
// {
//     public:
//     virtual double area()=0;
// };


// class circle:public Shape{
//  private:
//  double radius;

//  public:
//  circle(double r){
//     radius=r;
//  }

//  double area() override {
//         return 3.14159 * radius * radius;
//     }

// };


// int main()
// {
//     Shape* sp=new circle(6.0);
//     int x= sp->area();
//     cout<<x<<endl;
// }





// Encapsulation

// class Bank{
//     private:
//     int balance;
//     public:
//     Bank(int b)
//     {
//         balance=b;
//     }

//     void addbalance(int num)
//     {
//         balance+=num;
//     }

//     void debitmoney(int num)
//     {
//         balance-=num;
//     }

//     int getbalance()
//     {
//         return balance;
//     }
// };


// int main()
// {
//     Bank ini_bal(1000);

//     ini_bal.addbalance(500);
//     ini_bal.debitmoney(20);

//     cout<<(ini_bal.getbalance())<<endl;


// }


// Inheritance

// class iphone3{
//    public:
//    void calling()
//    {
//       cout<<"I am calling *****"<<endl;
//    }

//    void texting()
//    {
//     cout<<"I am texting ****"<<endl;
//    }

// };
// class iphone6: public iphone3{
// public:
   
//   void internet()
//   {
//     cout<<"I am using internet"<<endl;
//   }

// };

// int main()
// {
//     iphone6* test=new iphone6;



//      test->internet();
   
// }



//polymorphism

// #include <iostream>

// class Shape {
// public:
//     virtual void draw() const {
//         std::cout << "Drawing a shape." << std::endl;
//     }
// };

// class Circle : public Shape {
// public:
//     void draw() const override {
//         std::cout << "Drawing a circle." << std::endl;
//     }
// };

// class Rectangle : public Shape {
// public:
//     void draw() const override {
//         std::cout << "Drawing a rectangle." << std::endl;
//     }
// };

// int main() {
//     Shape* shapes[3];

//     shapes[0] = new Shape();       
//     shapes[1] = new Circle();      
//     shapes[2] = new Rectangle();   

//     for (int i = 0; i < 3; i++) {
//         shapes[i]->draw();
//     }

    
//     return 0;
// }


// public access modifier
// class Circle
// {
//     public: 
//         double radius;
         
//         double  compute_area()
//         {
//             return 3.14*radius*radius;
//         }
     
// };
 
// int main()
// {
//     Circle obj;
     
//     obj.radius = 5.5;
     
//     cout << "Radius is: " << obj.radius << "\n";
//     cout << "Area is: " << obj.compute_area();
//     return 0;
// }


//protected modifier

// class account{
//     protected:
//     int balance;
// };

// class child:public account{
// public:

// void setBalance(int num){
//     balance=num;
// }

// void getbalance()
// {
//     cout<<balance<<endl;
// }

// };


// int main()
// {
//     child* ch=new child;
//     ch->setBalance(100);
//     ch->getbalance();
// }

//friend class 


// class base{

//     public:
//     int x;

//     private:
//     int y;

//     protected:
//     int z;
    
//     public:
//     base(int x,int y,int z)
//     {
//         this->x=x;
//         this->y=y;
//         this->z=z;
//     }

//     friend class derived;
// };


// class derived{
//  public:
//    void display(base t)
//    {
//     cout<<t.x<<endl;
//     cout<<t.y<<endl;
//     cout<<t.z<<endl;
//    }


// };

// int main()
// {
  
   
//     base b(10,20,30);
   
//      derived d;
//    d.display(b);
  
    
// }


//friend function

// class base{
//     private:
//     int x;
//     int y;
     
//      public:
//      base()
//      {
//         x=20;
//         y=30;
//      }

//      friend void derived(base b);

// };


// void derived(base b)
// {
//   cout<<b.x<<" "<<b.y<<endl;
// }

// int main()
// {
   
//    base b;
//    derived(b);

//    return 0;


// }




//parameterized constructor

// class constru{
//     public:
//     int x,y;
     
//     public:
//     constru(int x,int y)
//     {
//         this->x=x;
//         this->y=y;
//     }
//     void display()
//     {
//        cout<<x<<" "<<y<<endl;
//     }
// };


// int main()
// {
//     constru c(10,20);
//     c.display();

// } 


//copy constructor

// class copyconstructor{

//   private:
//   int x,y;
  
//   public:
//   copyconstructor(int x,int y)
//   {
//     this->x=x;
//     this->y=y;
//   }

//   copyconstructor(copyconstructor& o)
//   {
//      x=o.x;
//      y=o.y;
//   }

//   void display()
//   {
//     cout<<x<<" "<<y<<endl;
//   }
  
  
// };
// int main()
// {
//     copyconstructor obj1(10,20);

//     // obj1.display();

//     copyconstructor obj2(obj1);
     
//     obj2.display();
    
    

// }


//shallow copy & deep copy


// class car{
//   public:
//   string carname;
//   vector<string> colors;
  
//    car(string carname,vector<string> colors)
//    {
//     this->carname=carname;
//     this->colors=colors;
//    }

// };


// int main()
// {
//     vector<string> colors={"red","blue"};

    
//     car honda("honda",colors);

//     car deep_copy=honda;

//     deep_copy.colors.push_back("green");

//     for(auto it:honda.colors)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;

//     for(auto it:deep_copy.colors)
//     {
//         cout<<it<<" ";
//     }
// cout<<endl;


//     car* shallow_copy=&honda;
    
//     shallow_copy->colors.push_back("green");

    
//      for(auto it:honda.colors)
//     {
//         cout<<it<<" ";
//     }
// cout<<endl;
//     for(auto it:shallow_copy->colors)
//     {
//         cout<<it<<" ";
//     }
// cout<<endl;

// }


// static variable

// class emp
// {
//     public:
//     int id;
//     static int count;

//    void setData(int x)
//    {
//     id=x;
//     count++;
//    }

//    void getData()
//    {
//     cout<<id<<" "<<count<<endl;
//    }

// };

// int emp::count;

// int main()
// {
//     emp* n1 = new emp();

//     n1->setData(1);
//     n1->getData();

// emp* n2 = new emp();

//     n2->setData(2);
//     n2->getData();

// emp* n3 = new emp();

//     n3->setData(3);
//     n3->getData();


// }


// static functions

// class emp
// {
//     public:
//     int id;
//     static int count;

//    void setData(int x)
//    {
//     id=x;
//     count++;
//    }

//    void getData()
//    {
//     cout<<id<<" ";
//    }

//    static void getcount()
//    {
//     cout<<count<<endl;
//    }

// };

// int emp::count;

// int main()
// {
//     emp* n1 = new emp();

//     n1->setData(1);
//     n1->getData();
//     emp::getcount();

// emp* n2 = new emp();

//     n2->setData(2);
//     n2->getData();
//    emp::getcount();


// emp* n3 = new emp();

//     n3->setData(3);
//     n3->getData();
//    emp::getcount();



// }


// final keyword -> 1. prevent the class from inhertiting  2. prevent the virtual funtion of base class to be overriden in derived class


// class fun{
//     public:

//    virtual void abc() final
//     {
//         cout<<"parent"<<endl;
//     }
// };

// class derived:public fun{
// public:

// void abc() override
// {
//     cout<<"child"<<endl;
// }

// };

// int main()
// {

//     derived* d=new derived();
//     d->abc();
// }


// class fun final
// {
//     public:
//     void display()
//     {
//         cout<<"parent"<<endl;
//     }
// };

// class derived:public fun{
//     public:

// }


// runtime polymorphism

// class abc{
// public:
// int x=10;

// virtual void display()
// {
//     cout<<x<<endl;
// }
// };

// class def: public abc{
//     public:
//     int x=20;
//     void display() override
//     {
//         cout<<x<<endl;
//     }
// };

// int main()
// {
//     abc* obj1=new def();

//     obj1->display();
// }

// ambiguity in overloading or compile time polymophism 
// 1. type conversion
// 2. functions with default arguments
// 3. pass by reference

// 1.
// void fun(int i)  
// {  
//     std::cout << "Value of i is : " <<i<< std::endl;  
// }  
// void fun(float j)  
// {  
//     std::cout << "Value of j is : " <<j<< std::endl;  
// }  
// int main()  
// {  
//     fun(12);  
//     fun(1.2);  
//     return 0;  
// }  


// 2.

// void fun(int i)  
// {  
//     std::cout << "Value of i is : " <<i<< std::endl;  
// }  
// void fun(int a,int b=9)  
// {  
//     std::cout << "Value of a is : " <<a<< std::endl;  
//     std::cout << "Value of b is : " <<b<< std::endl;  
// }  
// int main()  
// {  
//     fun(12);  
   
//     return 0;  
// }  


// 3.
// int main()  
// {  
// int a=10;  
// fun(a); // error, which f()?  
// return 0;  
// }  
// void fun(int x)  
// {  
// std::cout << "Value of x is : " <<x<< std::endl;  
// }  
// void fun(int &b)  
// {  
// std::cout << "Value of b is : " <<b<< std::endl;  
// }  

// operator overloading

// class com{
//     public:
//     int real;
//     int img;
    
//      com(int r,int i)
//     {
//         real=r;
//         img=i;
//     }

//     com()
//     {
//         real=0;
//         img=0;
//     }

//     void print()
//     {
//         cout<<real<<" "<<img<<"i"<<endl;
//     }

//     com operator +(com c)
//     {
//         com temp;
//         temp.real=real+c.real;
//         temp.img=img+c.img;
//         return temp;
//     }

// };


// int main()
// {
//     com c1(3,5);
//     com c2(1,2);
//     com c3;
//     c3=c1+c2;

//     c3.print();
// }

// function overloading

// class abc
// {
//     public:
//     int add(int a,int b)
//     {
//         return a+b;
//     }
//     int add(int a,int b,int c)
//     {
//         return a+b+c;
//     }
// };

// int main()
// {
//     abc obj1;

//    int x= obj1.add(2,3);
//     int y=obj1.add(4,5,6);
//     cout<<x<<endl;
//     cout<<y<<endl;

// }


// inheritance

// class iphone3
// {
//     public:
//     void calling()
//     {
//         cout<<"Calling"<<endl;
//     }

// };

// class iphone6:public iphone3
// {
//     public:
//     void camera()
//     {
//         cout<<"CAMERA IS 108mp";
//     }
// };

// int main()
// { 
//     iphone6 ph;
//     ph.calling();

// }




