#pragma once
#include "FlyBehaviour.hpp"
#include "NormalFly.hpp"
#include <memory>

template <typename F> class Duck {
  std::unique_ptr<FlyBehaviour<F>> flyBehaviour = std::make_unique<F>();

public:
  void fly() { flyBehaviour->fly(); };
};
