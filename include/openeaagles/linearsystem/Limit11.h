//------------------------------------------------------------------------------
// Limit11 function
//------------------------------------------------------------------------------
#ifndef __oe_linearSys_Limit11_H__
#define __oe_linearSys_Limit11_H__

#include "openeaagles/linearSys/LimitFunc.h"

namespace oe {
namespace linearSys {

//------------------------------------------------------------------------------
// Class: Limit11
// Base class:  Object -> ScalerFunc -> LimitFunc -> Limit11
//
// Description: Limits between -1 and 1, inclusive
//
//------------------------------------------------------------------------------
class Limit11 : public LimitFunc {
    DECLARE_SUBCLASS(Limit11,LimitFunc)

public:
   Limit11();
};

} // End linearSys namespace
} // End oe namespace

#endif