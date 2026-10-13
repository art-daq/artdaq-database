#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_XML_FUSION_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_XML_FUSION_H_

#include "artdaq-database/BasicTypes/data_xml.h"

#include <boost/fusion/adapted/struct/adapt_struct.hpp>
#include <boost/fusion/include/adapt_struct.hpp>

#include <string>

namespace cfg = artdaq::database::basictypes;

BOOST_FUSION_ADAPT_STRUCT(cfg::XmlData, (std::string, xml_buffer))

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_XML_FUSION_H_
