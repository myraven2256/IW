set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# build 1.0.159
file(
COPY
  ${CMAKE_SOURCE_DIR}/bin/IW4.exe
DESTINATION
  ${ZYNAMIC_OUT}
)

# auto-generated with https://github.com/OpenIW/fake_pdb.git
file(
COPY
  ${CMAKE_SOURCE_DIR}/bin/IW4.pdb
DESTINATION
  ${ZYNAMIC_OUT}
)

add_subdirectory(OpenIW)
