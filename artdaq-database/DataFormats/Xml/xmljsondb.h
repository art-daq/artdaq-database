#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_XML_XMLJSONDB_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_XML_XMLJSONDB_H_

#include <string>

namespace artdaq {
namespace database {

namespace xmljson {
bool xml_to_json(std::string const&, std::string&);
bool json_to_xml(std::string const&, std::string&);
namespace debug {
void XmlJson();
}
}  // namespace xmljson

namespace xml {
namespace debug {
void XmlReader();
void XmlWriter();
}  // namespace debug
}  // namespace xml

}  // namespace database
}  // namespace artdaq
#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_XML_XMLJSONDB_H_
