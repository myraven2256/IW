file(
COPY
  ${CMAKE_SOURCE_DIR}/bin/iw4mp.pdb
DESTINATION
  ${ZYNAMIC_OUT}
)

add_subdirectory(OpenIW)
