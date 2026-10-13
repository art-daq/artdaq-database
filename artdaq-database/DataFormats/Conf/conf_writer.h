#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_CONF_CONF_WRITER_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_CONF_CONF_WRITER_H_

#include "artdaq-database/DataFormats/common.h"

#include "artdaq-database/DataFormats/Conf/conf_types.h"
#include "artdaq-database/DataFormats/Json/json_types.h"

namespace artdaq {
namespace database {
namespace conf {

namespace fcl = artdaq::database::conf;
namespace jsn = artdaq::database::json;

struct ConfWriter final {
  bool write(jsn::object_t const&, std::string&);
};

namespace debug {
void ConfWriter();
}
}  // namespace conf
}  // namespace database
}  // namespace artdaq
#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_CONF_CONF_WRITER_H_
