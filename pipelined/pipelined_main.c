#include "util.h"

#define DATA_SIZE = 10000
#define Stride = 16

int arry[DATA_SIZE];
int tmp = 0;

int do_dummy(int tmp)
{
    return tmp - 0;
}

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{

  int time1, time2;
  time1 = read_csr(mcycle);
  for (i = 0; i < DATA_SIZE; i+=Stride)
  {
    tmp+ = arry[i];
  }
  time2 = read_csr(mcycle);
  btime = time2-time1;
  printf("Done %ld\n", DATA_SIZE/btime);
  tmp = do_dummy(tmp)   //to stop compiler from deleting dead code
  // Check the results
  return 0; 
}