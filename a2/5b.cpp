#include<iostream>
       #include<conio.h>
       using namespace std;

       class ClassA
       {
              public:
              int a;
              ClassA(){cout<<"Class A\n";}
              ~ClassA(){cout<<"Class A\n";}
       };

       class ClassB : virtual public ClassA
       {
              public:
              int b;
              ClassB(){cout<<"Class B\n";}
              ~ClassB(){cout<<"Class B\n";}
       };
       class ClassC : virtual public ClassA
       {
              public:
              int c;
              ClassC(){cout<<"Class C\n";}
              ~ClassC(){cout<<"Class C\n";}
       };

       class ClassD : public ClassB, public ClassC
       {
              public: int d;
              ClassD(){cout<<"Class D\n";}
              ~ClassD(){cout<<"\n\nClass D\n";}
       };

       int main()
       {

		  ClassD obj;

		  obj.a = 10;

		  obj.b = 20;
		  obj.c = 30;
		  obj.d = 40;

		  cout<< "\n A : "<< obj.a;
		  cout<< "\n B : "<< obj.b;
		  cout<< "\n C : "<< obj.c;
		  cout<< "\n D : "<< obj.d;

	   }