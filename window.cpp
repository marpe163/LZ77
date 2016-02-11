#include "window.h"

window::window(int s,int w)
{
    //saker som förut
    sizes=s;
    sizew=w;
    array = new char[sizes+sizew];
    array[0] = 'a';
    array[1] = 'a';
    array[2] = 'a';
    array[3] = 'b';
    array[4] = 'c';
    array[5] = 'a';
    array[6] = 'a';
    array[7] = 'b';
    array[8] = 'a';

}
 int window::shift_left(int step_size){
     int shifted_out=0;
     for (int i=0; i<sizes+sizew - step_size;i++)
     {

         this->array[i]=this->array[i+step_size];
         std::cout << (i+step_size);
     }
     for (int j =sizes+sizew-step_size; j < sizes+sizew; j++)
     {

        std::cout << "\n overwriting index" << j << "\n";
         this->array[j]='u'; //shift in shit
        shifted_out++;
      }
     // this->slots_left=this->slots_left+shifted_out; // notify us that we have more room after shifting out shit.
     return shifted_out;
}


window::~window()
{
    delete[] array;
}
