cet_make_library(
  SOURCE
  storage_providers.cpp
  LIBRARIES
  artdaq-database::SharedCommon
)


if(WITH_MONGODB)
  add_subdirectory(MongoDB)
endif()
add_subdirectory(FileSystemDB)
add_subdirectory(UconDB)

install_headers()
install_source()
