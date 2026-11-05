if(WITH_MONGODB)
  set(MONGO_DISPATCH_SOURCE dispatch_mongodb.cpp)
  set(MONGO_PROVIDER_LIB artdaq-database::StorageProviders_MongoDB)
else()
  set(MONGO_DISPATCH_SOURCE dispatch_mongodb_disabled.cpp)
endif()

cet_make_library(
	SOURCE
${MONGO_DISPATCH_SOURCE}
configuration_dbproviders.cpp
dboperation_exportimport.cpp
dboperation_findcompositions.cpp
dboperation_managealiases.cpp
dboperation_manageconfigs.cpp
dboperation_managedocument.cpp
dboperation_metadata.cpp
dboperation_searchcollection.cpp
detail_exportimport.cpp
detail_findcompositions.cpp
detail_managealiases.cpp
detail_manageconfigs.cpp
detail_managedocument.cpp
detail_metadata.cpp
detail_searchcollection.cpp
dispatch_filedb.cpp
dispatch_signatures.cpp
dispatch_ucondb.cpp
enable_trace.cpp
Multitasker.cpp
options_operation_base.cpp
options_operation_bulkoperations.cpp
options_operation_managealiases.cpp
options_operation_manageconfigs.cpp
options_operation_managedocument.cpp
shared_helper_functions.cpp
  LIBRARIES
  artdaq-database::DataFormats_Json
  artdaq-database::DataFormats_Xml
  artdaq-database::JsonDocument
  artdaq-database::BasicTypes
  artdaq-database::StorageProviders_FileSystemDB
  artdaq-database::StorageProviders_UconDB
  ${MONGO_PROVIDER_LIB}
  Boost::program_options
  -lpthread
  )


install_headers()
install_source()
