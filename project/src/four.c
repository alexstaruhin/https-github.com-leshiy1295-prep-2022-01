#include <iostream>

#include "four.h"

int prime_num(int number){
bool res=false;
for(int i= 1; i < number; i++){
   if(number % i == 0 && i!=1){
       res=true;
       break;
   }
}
if(res==true){
return 1;
}
else{
return 0;
}
}
