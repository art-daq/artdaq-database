#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_CONFIGURATIONDB_SEARCH_FILTER_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_CONFIGURATIONDB_SEARCH_FILTER_H_

#include "artdaq-database/ConfigurationDB/common.h"

#include <tuple>

namespace artdaq {
namespace database {
namespace configuration {

class filters {
 public:
  using filter_type = std::istream;
  filter_type& filter() { return std::get<filter_type&>(filters); };

 private:
  std::tuple<filter_type&> filters;
};

}  // namespace configuration
}  // namespace database
}  // namespace artdaq

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_CONFIGURATIONDB_SEARCH_FILTER_H_
