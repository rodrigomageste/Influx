#ifndef CAQUIFER_H
#define CAQUIFER_H

#include <vector>
#include "sfluid.h"

class CAquifer
{
public:
		    CAquifer();
		    ~CAquifer();
    enum    Model   { Infinite, Sealed, Constant };

    virtual bool    isLinear() const = 0;

    virtual void    manualEntry();
    virtual void    fileEntry();

    virtual double  getU() const = 0; ///< U = Constante de Influxo de Água do Aquífero

    double	    getH() const;
    double	    getPi() const;
    double	    getPo() const;
    SFluid	    getFluid() const;
    SRock	    getRock() const;

    void	    setH(double);
    void	    setPi(double);
    void	    setPo(double);

    Model	    model;

protected:
    double h;	///< Height (thickness)
    double pi;	///< Initial pressure
    double po;	///< Reservoir contact pressure

    SFluid fluid;
    SRock  rock;

    std::vector<double> p; ///< Pressure log
    std::vector<double> t; ///< Time log
};

#endif // CAQUIFER_H
