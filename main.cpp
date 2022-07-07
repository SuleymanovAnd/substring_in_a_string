#include <iostream>

bool substr ( char *x, char *z){
    int countX = 0;
    int countZ = 0;

   for (int i = 0; *(x+i) != '\0'; i++) {countX ++;}
   for (int i = 0; *(z+i) != '\0' ; i++) {countZ ++;}

   for (int i =0; i < countX; i++){
       if (*(x+i) == *(z)){
           for (int j =0; j<countZ;j++){
               if (*(x+i+j) != *(z+j)){break;}
               if (j == countZ-1){ return true;}
           }
       }
   }
   return false;
}

int main() {
    char* a = "Hello world";

    char* b = "wor";

    char* c = "banana";

    std::cout << substr(a,b) << " " << substr(a,c);
}
