set(CMAKE_CXX_STANDARD 17)

add_compile_options(
  /MP # Enables parallel builds.
  $<$<CONFIG:Debug>:/Zi> # Produces a separate PDB file that contains all the symbolic debugging information.
)

file(
COPY
  ${CMAKE_SOURCE_DIR}/bin/iw4mp.pdb
DESTINATION
  ${CMAKE_INSTALL_PREFIX}
)

add_subdirectory(OpenIW)
FetchContent_MakeAvailable(Zynamic)
