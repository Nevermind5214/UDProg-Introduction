#include "./my.h"
#include "../../std_lib_facilities.h"

void print_foo()
{
    cout << "foo=" << foo << endl;
}

void print(int i)
{
    cout << "i=" << i << endl;
}

void swap_v(int a,int b)
{
  int temp;
  temp = a;
  a=b;
  b = temp;
}

void swap_r(int& a,int& b)
{
  int temp;
  temp = a;
  a=b;
  b = temp;
}

/*void swap_cr(const int& a,const int& b)  nem jó mert konstans
{
  int temp;
  temp = a;
  a=b;
  b = temp;
}*/