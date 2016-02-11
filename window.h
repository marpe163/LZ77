#ifndef WINDOW_H
#define WINDOW_H
#include <iostream>
class window
{
public:
    window(int s= 16,int w=7);
    ~window();
    int shift_left(int step_size);
    int sizes;
    int sizew;
  //  int slots_left; // to see how many characters should be shifted in
//    static const int total_size=sizes+sizew;
//    char label[25]; //set to s+w
    char* array;
   // bool stream_left; //boolean to notify when

    int size(){
        return sizes+sizew;
    }
    void print()
    {
        for (int i=0; i<sizes+sizew;i++)
        {
            std::cout<<this->array[i];
        }
        std::cout << "\n";
    }
    int find(int length) //return -1 if could not be found, otherwise the index.
    {
        for (int j=0; j<sizes;j++)
        {
            for(int i = 0;i<length;i++)
            {
                if(array[sizes - 1 - j + i]!=array[sizes+i])
                {
                    break;
                }
                if(array[sizes - 1 - j + i]==array[sizes+i] && i==length-1)
                {
                    return sizes-1-j;
                }
            }
        }
        return -1;

    }
   /* void add_char(char new_char)//to be used in shift left to continuously add new chars when others are shifted out.
    {
        array[sizes+sizew]=new_char;
        slots_left--;
    }
    bool open_file(String file_name) //t.e.x.
    {

    }*/
};

#endif // WINDOW_H
