#ifndef SCI_UNCERTAINSCI_TYPES_H
#define SCI_UNCERTAINSCI_TYPES_H

#include <variant>
#include <vector>

namespace TODO_REPLACE_WITH_EIGEN
{
  using Vector1D = std::vector<double>;
  using IntList = std::vector<int>;
  using Matrix2D = std::vector<std::vector<double>>;
  using Matrix3D = std::vector<std::vector<std::vector<double>>>;
  using XType = std::variant<int, double, Vector1D>;

  class np
  {
  public:
    static IntList arange(int k);
  };
}

namespace UncertainSCI
{
  using Function1D = std::function<double(double)>;
}

#endif
