//-------------------------------------------------------------------------------
//
// Oscar Villagrana
// Utils
//
//-------------------------------------------------------------------------------




#include <iostream>
#include <stdint.h>
#include <vector>
#include <limits>             // Sanitize input
// #include <map>
using namespace std;


//-------------------------------------------------------------------------------
// Interface Decleration
//-------------------------------------------------------------------------------



template <typename T> void disp_v(vector<T> & v);
template <typename T> void msg( T & m );
template <typename T> void msg( const char * m, const T & v );



//-------------------------------------------------------------------------------
// Utils Implementation
//-------------------------------------------------------------------------------


template <typename T> 
void msg( T & m ) { 
   std::flush(cout);
   cout << m << endl; 
}
template <typename T> 
void msg( const char * m, const T & v ) { cout << m << ": " << v << endl; }


// TODO: utils / ints used
struct preciseInts
{         
   // signed integers precise bits
   int8_t SmallInt = 0;                       //has max of 127
   int16_t MediumInt;
   int32_t LargeInt;
   int64_t HugeInt;

   //unsigned precise integers
   uint8_t SmallUInt = 0;                       //has max of 127
   uint16_t MediumUInt;
   uint32_t LargeUInt;
   int64_t HugeUInt;

};



//-------------------------------------------------------------------------------
// Multimap
//-------------------------------------------------------------------------------


// template <typename T>
// T getElem(multimap)
//    for (auto elem : games) {
//       if(elem.first == Asterisks) { cout << "0" << endl;}
//       // cout << elem.second << '(' << elem.first << ')' << endl;
//    }


//-------------------------------------------------------------------------------
// Utils Tests
//-------------------------------------------------------------------------------


// struct vs class

// struct a {
//   int id = 0;
//   enum b {
//     c
//   };
//   string name = "d";
// };

  
// Utils / integral sizes
//-----------------------

// uint8_t umax = 255;    cout << int(umax) << endl;
// int8_t imax = 127;     cout << int(imax) << endl;
// int8_t imin = -128;    cout << int(imin) << endl;



//----------------------------------------------------------------------------------
// Sanitize  Input
//----------------------------------------------------------------------------------


// Sanitize Int
// Returns int if within given range, else returns negative
int HandleInputIntRange( int min, int max)
{

   int n = 0;

   for (;;) {

      string line;

      // std::cin.clear();
      // std::cin.ignore(10000, '\n');
      getline(cin, line);

      // convert string to int
      try { n = stoi(line); }
      catch (const exception& e) { n = -1; }

      // if (std::cin.fail()) {
      //    std::cin.clear();
      //    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      //    continue;
      // }

      // valid range
      if (n < min) { n = -1; }
      if (n > max) { n = -1; }

      return n;
   }
}

 
// Sanitize String
string HandleInputStrRange( int start, int end)
{
   string n;

   string a(end, '\0');

   for (;;) {

      std::getline(std::cin, n);

      for ( int i = start; i < end; i++ )
      {
         a[i] = n[i];
      }

      if (std::cin.fail()) {
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         continue;
      }

      return a;
   }
}
 

bool HandleInputBool()
{ 
   // std::cin.clear();
   // std::cin.ignore(10000, '\n');

   string input;
   getline(cin,input);
   if( input == "n") { return false; }
   else { return true; }
}; 



