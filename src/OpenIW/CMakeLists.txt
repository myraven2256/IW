file(GLOB_RECURSE OpenIW RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_executable(OpenIW
  ${OpenIW}
  stdafx.cpp
  stdafx.hpp
)

set_target_properties(OpenIW
PROPERTIES
    PDB_OUTPUT_DIRECTORY "${CMAKE_INSTALL_PREFIX}$<0:>"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_INSTALL_PREFIX}$<0:>"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_INSTALL_PREFIX}$<0:>"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_INSTALL_PREFIX}$<0:>"
)

set_property(TARGET OpenIW 
PROPERTY 
  VS_DPI_AWARE "PerMonitor"
)


target_include_directories(OpenIW
PRIVATE
  .
)

target_precompile_headers(OpenIW
PRIVATE
  stdafx.hpp
)

target_compile_options(OpenIW
PRIVATE
  /FIstdafx.hpp
)

target_link_options(OpenIW
PRIVATE
  /DYNAMICBASE:NO /NXCOMPAT:NO /SAFESEH:NO /INCREMENTAL:NO /LARGEADDRESSAWARE /LAST:.text
)

target_link_libraries(OpenIW
  Zynamic
)

target_create_vcxproj_filters(OpenIW)
