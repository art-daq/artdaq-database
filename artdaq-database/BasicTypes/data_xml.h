#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_XML_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_XML_H_

#include "artdaq-database/BasicTypes/common.h"

#include <string>

#ifdef TRACE_NAME
#undef TRACE_NAME
#endif

#define TRACE_NAME "BTPS:XmlData_H"

namespace artdaq {
namespace database {
namespace basictypes {

struct JsonData;

struct XmlData final {
  explicit XmlData(std::string);

  XmlData() = default;

  explicit XmlData(JsonData const&);
  operator JsonData() const;
  operator std::string const&() const;

  static constexpr auto type_version() { return "V100"; }

  std::string xml_buffer;
};

std::istream& operator>>(std::istream&, artdaq::database::basictypes::XmlData&);
std::ostream& operator<<(std::ostream&, artdaq::database::basictypes::XmlData const&);

}  // namespace basictypes
}  // namespace database
}  // namespace artdaq

template <>
inline TraceStreamer& TraceStreamer::operator<<(const artdaq::database::basictypes::XmlData& r) {
  std::ostringstream s;
  s << r;
  msg_append(s.str().c_str());
  return *this;
}

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_XML_H_
