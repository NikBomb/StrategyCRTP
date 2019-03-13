#pragma once
#include "FlyBehaviour.hpp"
#include <iostream>
#include <string>

class NormalFly : public FlyBehaviour<NormalFly> {
  friend class FlyBehaviour<NormalFly>;

private:
  std::string message = "I believe I can fly";
};
