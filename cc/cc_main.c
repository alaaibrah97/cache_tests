#include "util.h"

#define DATA_SIZE = 1024
#define Stride = 16

int arry[DATA_SIZE];

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{


  int hartID;
  hartID = read_csr(hartid);
  int time1, time2;
  time1 = read_csr(mcycle);
  if (hartid != 1) {
    for (i = 0; i < (DATA_SIZE-Stride); i+=Stride)
    {
      arry = (int *)(*arry);
      *arry = (int)(arry+stride);
    }
  }
  time2 = read_csr(mcycle);
  btime = time2-time1;

  int time1_t, time2_t;
  time1_t = read_csr(mcycle);
  if (hartid == 1) {
    for (i = 0; i < (DATA_SIZE-Stride); i+=Stride)
    {
      arry = (int *)(*arry);
      *arry = (int)(arry+stride);
    }
  }
  time2_t = read_csr(mcycle);
  btime_t = time2_t-time1_t;

  printf("Done, Performane = %ld\n", btime2 - btime1);

  return 0; 
}

