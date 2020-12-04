#include <iostream>
using namespace std;



template <typename it> it Transpose(it begin, it end) {

it _begin= begin;
it _end= end;

if ((_end-_begin) %2 !=0 || (_end-_begin)==0 )  return begin;
else    
    while(_begin != _end) {
        iter_swap(_begin, _begin + 1);
        _begin += 2;
}
return _begin;
}

        
      
template <typename itO,typename itN,typename f> itN Transform2 (itO beginO, itO endO, itN beginN, f func) {

    itO _endO;

    if (endO-beginO) %2 !=0) { _endO= endO-1; } // size of the first conteiner is odd, so- ignore the last element
    else _endO=endO; // size of the first conteiner is even

    while (beginO!=_endO) {
        auto res= func(*beginO , *(beginO + 1));
        *beginN=res;
        beginO=beginO+2;
        ++beginN;
    }
        return beginN;


    }






 