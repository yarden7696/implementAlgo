#include <iostream>
using namespace std;
#include <vector>

   template <typename it> bool Fib(it begin, it end) { 
    
   auto _endVal= *(end-1);
   int sub_size= end-begin;
   int currVal=2;
   int firstE=1;
   int secondE=1;
   std::vector<int> fib{1,1}; // in this vector we will create a fibonachi 
                             // vectot that run until the last element of the "*(end-1)"
   while (currVal <= _endVal) {
      fib.push_back(currVal);
       currVal=currVal+secondE;
          secondE=currVal-secondE;
   }
   auto itVec=fib.end()-sub_size; 
   for(int i=1; i<=sub_size; i++){
       if( *itVec != *begin) return false;
           ++begin;
           ++itVec;
   }
        return true;
    }


    template <typename it> it Transpose(it begin, it end) {

    it _begin= begin;
    it _end= end;

    if ((_end -_begin) % 2 !=0 || (_end-_begin)==0 )  _begin=begin;
    else {   
        while(_begin != _end) {
            iter_swap(_begin, _begin + 1);
            _begin += 2;
    }
  }
    return _begin;
    }

         
   template <typename itO,typename itN,typename f> itN Transform2 (itO beginO, itO endO, itN beginN, f func) {

       itO _endO;

       if ((endO-beginO) % 2 !=0) { _endO= endO-1; } // size of the first conteiner is odd, so- ignore the last element
       else _endO=endO; // size of the first conteiner is even

       while (beginO!=_endO) {
           auto res= func(*beginO , *(beginO + 1));
           *beginN=res;
           beginO=beginO+2;
           ++beginN;
       }
           return beginN;
       }
