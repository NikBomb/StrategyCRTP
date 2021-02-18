#pragma once
#include <iostream>
#include <string>
template <typename T> struct crtp {
  T &underlying() { return static_cast<T &>(*this); }
  T const &underlying() const { return static_cast<T const &>(*this); }
};

template <typename T> class FlyBehaviour : crtp<T> {

public:
  void fly() { std::cout << this->underlying().message << std::endl;  }

  virtual ~FlyBehaviour(){}
};

// A useless comment
