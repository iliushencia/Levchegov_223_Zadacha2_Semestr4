#ifndef __FACTORYVERT_HPP_INCLUDED__
#define __FACTORYVERT_HPP_INCLUDED__

#include "Factory.hpp"

  class FactoryVert : public Factory {
  public:
		CCompexVector* Create() {
      return new CCompexVectorVert();
    }

    FactoryVert() = default;
    ~FactoryVert() = default;
  };



#endif // __FACTORYVERT_HPP_INCLUDED__
