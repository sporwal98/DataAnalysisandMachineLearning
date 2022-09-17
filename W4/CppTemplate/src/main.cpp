
// Using the new class
#include "MyClass.h"

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
using namespace std::chrono;
#include <cmath>
using namespace std;


bool isPrime(int n)
{//Check if n is prime
  bool res = 1;
  for(int i=2; i<=sqrt(n);i++)
    if(n%i == 0)
    {
      res = 0;
      break;
    }

  return res;
}
int main( /*int argc, char * argv[]*/ )
{/*
  // Create an instance of the class – just as we might have a variable that is an int, here we have a MyClass
  MyClass* anInstance = new MyClass( 17 );

  // Run the method of MyClass and print the result
  int result = anInstance->TestMethod( 13 );
  std::cout << "The result was " << result << std::endl;

  anInstance->ChgVal( 27 );

  result = anInstance->TestMethod( 13 );
  std::cout << "New result : " << result << std::endl;
  
  delete anInstance;

  for(int i = 0; i<10; i++)
  {
    if(i == 5)
      std::cout << "hello" << std::endl;
    else
      std::cout << i << std::endl;
  } 
  
  std::cout << "Vector" << std::endl;
  std::vector<int> myVector;
  myVector.push_back(1);
  
  myVector[5] = 6;
  int oneNumber = myVector[4];

  std::vector<int> myVec;
  for(int i = 0;i<10;i++)
    myVec.push_back(i);
 

  for(int i = 0; i<10; i++)
  {
    std::cout <<  myVec[i] << std::endl;
  } 
  
 

  std::cout << "Strings:" << std::endl;

  std::string myStr = "";
  for(int i = 0;i<10;i++)
  {
    if(i == 9)
      myStr += std::to_string(i);
    else
      myStr += std::to_string(i) + ", ";
  }
  std::cout << myStr << std::endl;

  std::string myString = "Hello ";
  myString += "World";
  if(myString == "Hello World")
    myString = std::to_string( 2 );


  std::cout << "Sum 3,5,7 till 2000" << std::endl;
  int sum = 0;
  for(int i = 1;i<2000;i++)
    if(i%3 == 0 || i%5 == 0 || i%7 == 0)
      sum+=i;
  std::cout << sum << std::endl;
    
  std::cout << "Fibonacci" << std::endl;
  int a = 0;
  int b = 1;
  int sumodd = 0;
  while(a<2000000)
  {
    if(a%2 == 1)
        sumodd+=a;
    b = a+b;
    a = b-a;
  }
  std::cout << "Odd fibo sum " << sumodd << std::endl;
  */

  //Setting up timer
  auto start = high_resolution_clock::now();
  auto stop = high_resolution_clock::now();
  auto diff = duration_cast<seconds>(stop-start);
  //Init numbers
  int n = 2;
  int large = 2;
  while(diff.count()<5)
  {
    if(isPrime(n))
      large = n;
    n++;
    //Measuring time
    stop = high_resolution_clock::now();
    diff = duration_cast<seconds>(stop-start);
  }
  std::cout << "Time elapsed(s): " << diff.count() << std::endl;
  std::cout << "Largest Prime Found: " << large << std::endl;
}

