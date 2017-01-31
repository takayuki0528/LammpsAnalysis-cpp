#ifndef PROP_SYSTEMDRIFT_H
#define PROP_SYSTEMDRIFT_H

#include "pointers.h"

namespace Bistro_NS {

class Prop_SystemDrift : protected Pointers {
  // 必要なプロパティ名
  std::vector<std::string> property_request;
public:
  // Constructor & Destructor
  Prop_SystemDrift(Bistro *bstr) : Pointers(bstr) {}
  // Functions
  void calculate_property(class Ingredient *);
  std::vector<std::string> get_property_request() { return property_request; }
};

}

#endif
