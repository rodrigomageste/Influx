#ifndef CCARTERTRACY_H
#define CCARTERTRACY_H

#include "cbaseclass.h"
#include "cradialaquifer.h"


class CCarterTracy : public CBaseClass
{
public:
	    CCarterTracy();
	    CCarterTracy(CRadialAquifer*);
	    ~CCarterTracy();

    double  calcWe();

protected:
    double  red;
    double  u;

private:
    CRadialAquifer* aquifer;
};

#endif // CCARTERTRACY_H
