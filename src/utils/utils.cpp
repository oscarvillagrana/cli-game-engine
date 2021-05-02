//-------------------------------------------------------------------------------
//
// Oscar Villagrana
// Utils Decleration
//
//-------------------------------------------------------------------------------




#include <iostream>
#include <vector>
#include <stdint.h>
#include <map>
// #include "utils/utils.cpp"
using namespace std;


//-------------------------------------------------------------------------------
//
// utils.h
// Interface Decleration
//
//-------------------------------------------------------------------------------



template <typename T> void disp_v(vector<T> & v);
template <typename T> void msg( T & m );
template <typename T> void msg( const char * m, const T & v );



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
//
// Utils Implementation
//
//-------------------------------------------------------------------------------
