//-------------------------------------------------------------------------------
//
// Oscar Villagrana
// Utils
//
// TODO: Go Again / handle empty input
//-------------------------------------------------------------------------------

#pragma region utils_declaration


#ifndef UTILS
#define UTILS


#include <iostream>
#include <stdint.h>
#include <vector>
#include <limits>             // Sanitize input
#include <unistd.h>           // for sleep func
// #include <map>
using namespace std;




namespace utils
{


   //-------------------------------------------------------------------------------
   // Interface Decleration
   //-------------------------------------------------------------------------------



   template <typename T> void disp_v(vector<T> & v);
   template <typename T> void msg( T & m );
   template <typename T> void msg( const char * m, const T & v );



   //-------------------------------------------------------------------------------
   // Utils Implementation
   //-------------------------------------------------------------------------------


   // // TODO: refactor without Game
   // template <typename T> void disp_v(vector<T> & v)
   // {
   //   if(!v.size()) return;
     
   //   if(typeid(T) == typeid(ge::Game))
   //   {
   //     for( ge::Game i : v ){
   //       cout << i.name() << endl;
   //     }
   //   }

   //   // if(typeid(T) == typeid(bool)) { for(bool e : v) { cout << ( e ? "T" : "F" ) << " "; }}
   //   // else { for(T e : v) { cout << e << " ";}}

   //   cout << endl;
   // }

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




   //----------------------------------------------------------------------------------
   // Sanitize  Input
   //
   // TODO: handle returns like getline does
   //----------------------------------------------------------------------------------

  
   //-------------------------
   // With Strings
   //-------------------------

   // Sanitize Int
   // Returns int if within given range, else returns negative
   int HandleInputIntRange( string msg, int min, int max)
   {

      int n = 0;

      for (;;) 
      {

         string line;

         // std::cin.clear();
         // std::cin.ignore(10000, '\n');
         // getline(cin, line);
         cout << msg; cin >> line;

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
   string HandleInputStrRange( string msg, int start, int end)
   {
      string n;

      string a(end, '\0');

      for (;;) 
      {

         // std::getline(std::cin, n);
         cout << msg; cin >> n;

         for ( int i = start; i < end; i++ )
         {
            a[i] = n[i];
         }

         if (std::cin.fail()) 
         {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
         }

         return a;
      }
   }
    
   // TODO: Go Again / handle empty input
   bool HandleInputBool(string msg)
   { 
      string input;

      // std::cin.clear();
      // std::cin.ignore(10000, '\n');
      // getline(cin,input);

      cout << msg; cin >> input;

      if( input == "n") { return false; }
      else { return true; }
   }; 


   //-----------------------------
   // Without Strings / DEPRECATED
   //-----------------------------


   // Sanitize Int
   // Returns int if within given range, else returns negative
   int HandleInputIntRange( int min, int max)
   {

      int n = 0;

      for (;;) 
      {

         string line;

         // std::cin.clear();
         // std::cin.ignore(10000, '\n');
         
         getline(cin, line);                 // not sure if works right

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

      for (;;) 
      {

         std::getline(std::cin, n);

         for ( int i = start; i < end; i++ )
         {
            a[i] = n[i];
         }

         if (std::cin.fail()) 
         {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
         }

         return a;
      }
   }
    

   bool HandleInputBool()
   { 
      string input;

      // std::cin.clear();
      // std::cin.ignore(10000, '\n');
      // getline(cin,input);                    // this does not work atm

      cin >> input;
      
      if( input == "n") { return false; }
      else { return true; }
   }; 



   //-------------------------------------------------------------------------------
   // Utils Tests
   //-------------------------------------------------------------------------------

   void utils_test()
   {


      // Utils / Templates
      //-----------------------

      enum bools { YES, NO };

      msg("msg str", "o" );
      msg( "o" );
      bools a = NO;
      msg("msg goAgain", a );
      msg( a );
      const int b = 5;
      msg("msg int", b );
      msg( b );
      const char c = 'o';
      msg("msg char", c );
      msg( c );


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


   }

}

#pragma endregion
#endif // GE_DEF