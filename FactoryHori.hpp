#ifndef __FACTORYHORI_HPP_INCLUDED__
#define __FACTORYHORI_HPP_INCLUDED__

#include "Factory.hpp"
//#include "complexvector.hpp"
//#include "complexvector1.hpp"



  class FactoryHori : public Factory {
  public:
    CCompexVector* Create() {
      return new CCompexVectorHori();
    }

    FactoryHori() = default;
    ~FactoryHori() = default;
  };



#endif // __FACTORYHORI_HPP_INCLUDED__
