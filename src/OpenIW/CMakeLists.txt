file(GLOB_RECURSE OpenIW RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_executable(OpenIW
  ${OpenIW}
  stdafx.cpp
  stdafx.hpp
)

target_include_directories(OpenIW
PRIVATE .
  "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)/Include"
)

target_link_directories(OpenIW
PRIVATE
  "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)/Lib/x86"
)

target_link_libraries(OpenIW
  Zynamic
)

target_link_options(OpenIW
PRIVATE
  /DYNAMICBASE:NO /NXCOMPAT:NO /SAFESEH:NO /INCREMENTAL:NO /LARGEADDRESSAWARE /LAST:.text
)

target_precompile_headers(OpenIW
PRIVATE
  stdafx.hpp
)

target_compile_options(OpenIW
PRIVATE
  /MP # Enable parallel (aka multi-processor, aka multi-core) build.
  /Zi # Enable symbolic debugging information.
  /FIstdafx.hpp # Force include stdafx.
)

set_target_properties(OpenIW
PROPERTIES
  PDB_OUTPUT_DIRECTORY     "${ZYNAMIC_OUT}$<0:>"
  ARCHIVE_OUTPUT_DIRECTORY "${ZYNAMIC_OUT}$<0:>"
  LIBRARY_OUTPUT_DIRECTORY "${ZYNAMIC_OUT}$<0:>"
  RUNTIME_OUTPUT_DIRECTORY "${ZYNAMIC_OUT}$<0:>"
  VS_DPI_AWARE "PerMonitor"
)

target_vcxproj_filters(OpenIW)
