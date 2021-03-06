/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 10.42 %
// MAE = 853 
// WCE% = 34.07 %
// WCE = 2791 
// WCRE% = 125.20 %
// EP% = 96.48 %
// MRE% = 66.45 %
// MSE = 12108.165e2 
// PDK45_PWR = 0.00089 mW
// PDK45_AREA = 7.0 um2
// PDK45_DELAY = 0.04 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul8x5u_280(const uint64_t A /* 8-bit unsigned operand */, const uint64_t B /* 5-bit unsigned operand */)
{
   uint64_t dout_34, dout_42, dout_172;
   uint64_t O;

   dout_34=((A >> 4)&1)&((B >> 2)&1);
   dout_42=((A >> 6)&1)&((B >> 3)&1);
   dout_172=((B >> 4)&1)&((A >> 7)&1);

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_34&1) << 1;
   O |= (dout_172&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (0&1) << 5;
   O |= (0&1) << 6;
   O |= (dout_34&1) << 7;
   O |= (0&1) << 8;
   O |= (dout_172&1) << 9;
   O |= (dout_42&1) << 10;
   O |= (0&1) << 11;
   O |= (dout_172&1) << 12;
   return O;
}
