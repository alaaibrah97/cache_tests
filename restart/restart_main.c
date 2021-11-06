#include "util.h"

#define DATA_SIZE = 10000
#define Stride = 16

int arry[DATA_SIZE];
int num_iters = 0;

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
  int cur_time = 0, last_time = 0;
  while ( (cur_time <= last_time) || (last_time == 0) )
  {
    num_iters++;
    last_time = cur_time;
    int time1, time2;
    time1 = read_csr(mcycle);
    for (i = 0; i < DATA_SIZE; i+=Stride)
    {
      arry = (int*)*arry;
      for (j=0; j<num_iters; j++)
        arry = do_dummy(arry)
    }
    time2 = read_csr(mcycle);
    cur_time = time2-time1;
  }


  printf("Performance = %ld \n", last_time - (num_iters-1)/(DATA_SIZE/Stride));

  return 0; 
}

