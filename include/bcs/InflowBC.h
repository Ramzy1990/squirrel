#ifndef INFLOWBC_H
#define INFLOWBC_H

#include "IntegratedBC.h"

class InflowBC;

template <>
InputParameters validParams<InflowBC>();

class InflowBC : public IntegratedBC
{
public:
  InflowBC(const InputParameters & parameters);

protected:
  const Real & _uu;
  const Real & _vv;
  const Real & _ww;
  const Real & _inlet_conc;
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();
};

#endif // INFLOWBC_H
