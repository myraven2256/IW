file(GLOB_RECURSE OpenIW RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_executable(OpenIW
  ${OpenIW}
  stdafx.cpp
  stdafx.hpp
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

target_create_vcxproj_filters(OpenIW)
