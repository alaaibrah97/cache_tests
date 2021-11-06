#include "util.h"

#define DATA_SIZE = 10000
#define Stride = 16

int arry[DATA_SIZE];

int do_dummy(int tmp)
{
    return tmp - 0;
}

void init_mem (void)
{
  for (i = 0; i < (DATA_SIZE-Stride); i+=Stride)
  {
    arry[i] = &arry[i+Stride];
  }
}

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{

  init_mem();
  int time1, time2;
  time1 = read_csr(mcycle);
  for (i = 0; i < DATA_SIZE; i+=Stride)
  {
    arry = (int*)*arry;
  }
  time2 = read_csr(mcycle);
  btime = time2-time1;
  printf("Done %ld\n", DATA_SIZE/btime);
  printf("Done\n",);
  arry = do_dummy(arry)   //to stop compiler from deleting dead code

  return 0; 
}

