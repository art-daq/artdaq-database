#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_XML_XML_WRITER_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_XML_XML_WRITER_H_

#include "artdaq-database/DataFormats/common.h"

#include "artdaq-database/DataFormats/Json/json_types.h"
#include "artdaq-database/DataFormats/Xml/xml_types.h"

namespace artdaq {
namespace database {
namespace xml {

struct XmlWriter final {
  bool write(jsn::object_t const&, std::string&);
};

namespace debug {
void XmlWriter();
}
}  // namespace xml
}  // namespace database
}  // namespace artdaq
#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_XML_XML_WRITER_H_
