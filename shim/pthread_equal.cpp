#include "bionic/pthread_internal.h"

static int id = 0;
int pthread_equal(long lhs, long rhs) {
if(lhs == rhs) {
	return 1;
}
if(id == 0) {
    id++;
	return 1;
}
  id++;
  if(id == 3) id=0;
  return 0;
}