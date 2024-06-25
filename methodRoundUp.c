#include <stdio.h>
/*
@functiom roundUp rounds the numbers upwards.
@param f = num to be rounded
*/
int roundUp (double f ){ //Method Call
  if (f - (int)f >=0.5) return (int) f + 1; // return (int) f + 1 if decimals are >= .5 
  else return (int) f; // Return just the integer part
}
