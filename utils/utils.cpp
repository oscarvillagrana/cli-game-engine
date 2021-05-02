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
void msg( T & m ) { cout << m << endl; }
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
// Utils Tests
//-------------------------------------------------------------------------------


  
// Utils / integral sizes
//-----------------------

// uint8_t umax = 255;    cout << int(umax) << endl;
// int8_t imax = 127;     cout << int(imax) << endl;
// int8_t imin = -128;    cout << int(imin) << endl;


//----------------------------------------------------------------------------------
// Sanitize  Input
//----------------------------------------------------------------------------------


// Sanitize Int
int HandleInputIntRange( int i, int j)
{
   int n = 0;

   for (;;) {

      std::cin >> n;

      if (std::cin.fail()) {
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         continue;
      }

      // number range
      if (n < i || n > j) {
         continue;
      }

      return n;

   }

}
 