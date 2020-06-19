/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 3.44 %
// MAE = 18 
// WCE% = 8.79 %
// WCE = 45 
// WCRE% = 4100.00 %
// EP% = 98.44 %
// MRE% = 82.31 %
// MSE = 446 
// PDK45_PWR = 0.010 mW
// PDK45_AREA = 26.8 um2
// PDK45_DELAY = 0.22 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t add8se_7F3(const uint64_t B,const uint64_t A)
{
   uint64_t dout_23, dout_26, dout_28, dout_29, dout_30, dout_31, dout_39, dout_41, dout_57, dout_58, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_23=((B >> 4)&1)|((B >> 3)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_39=dout_29&dout_26;
   dout_41=dout_28|dout_39;
   dout_57=dout_31&dout_41;
   dout_58=dout_30|dout_57;
   dout_64=dout_29^dout_26;
   dout_65=dout_31^dout_41;
   dout_66=dout_31^dout_58;

   O = 0;
   O |= (0&1) << 0;
   O |= (((A >> 0)&1)&1) << 1;
   O |= (0&1) << 2;
   O |= (((A >> 3)&1)&1) << 3;
   O |= (((A >> 4)&1)&1) << 4;
   O |= (dout_23&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}