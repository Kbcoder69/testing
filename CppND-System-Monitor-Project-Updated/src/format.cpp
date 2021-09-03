#include <cstdlib>
#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  //Modified
  long hval, mval, sval;
  char result[9];  // 8 characters + end
  sval = seconds % 60;
  mval = (seconds - sval) / 60;
  hval = (mval - mval % 60) / 60;
  mval = mval % 60;

  sprintf(result, "%02ld:%02ld:%02ld", hval, mval, sval);
  return std::string(result);
}
