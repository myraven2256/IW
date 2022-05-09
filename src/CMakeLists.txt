set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# auto-generated with https://github.com/OpenIW/fake_pdb.git
file(
COPY
  ${CMAKE_SOURCE_DIR}/bin/iw4mp.pdb
DESTINATION
  ${ZYNAMIC_OUT}
)

add_subdirectory(OpenIW)
