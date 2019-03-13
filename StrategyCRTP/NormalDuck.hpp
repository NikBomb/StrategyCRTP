#pragma once
#include "FlyBehaviour.hpp"
#include "IFly.hpp"
#include "NormalFly.hpp"
#include <memory>

template <typename F> class Duck {
  std::shared_ptr<FlyBehaviour<F>> flyBehaviour = std::make_shared<F>();

public:
  void fly() { flyBehaviour->fly(); };
};
