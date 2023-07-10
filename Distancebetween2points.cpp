// Using simple Approach

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//   int x1, y1, x2, y2;
//   int dist;
//   cout << "Enter the value of x1 and y1" << endl;
//   cin >> x1 >> y1;
//   cout << "Enter the value of x2 and y2" << endl;
//   cin >> x2 >> y2;
//   cout << "The Point of x1 and y1 are ("<<x1<<","<<y1<<")"<< endl;
//   cout << "The Point of x2 and y2 are ("<<x2<<","<<y2<<")"<< endl;
//   cout << "Distance between these points are " << endl;
//   dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//   cout <<dist<< endl;
//   return 0;
// }

// Using Constructors

// #include<iostream>
// #include<math.h>
// using namespace std;

// class Distance
// { int a,b,c,d;
//   public:
//           void Distance::setPoint(int,int,int,int)
//           {
//             a = x1;
//             b = y1;
//             c = x2;
//             d = y2;
//           }

//           void Distance::enterPoint()
//           {
//             cout<<"The point of x1 and y1 is ("<<a<<","<<b<<")"<<endl;
//             cout<<"The point of x2 and y2 is ("<<c<<","<<d<<")"<<endl;
//           }

//           int Distance::distance()
//           {
//             int dist = sqrt(pow(c-a,2) + pow(d-b,2));
//             return dist;

//           }

//           void Distance::displayPoint()
//           {
//             cout<<"Distance between points are"<<distance<<endl;
//           }
// };
// int main(){
//  Distance x,y,d;
//  x.setPoint(8,8);
//  y.setPoint(7,7);

//  x.enterPoint();
//  y.enterPoint();

//  d.distance();
//  d.displayPoint();
//   return 0;
// }