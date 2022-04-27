set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(
  /MP # Enables parallel builds.
  /Wall # Displays all warnings displayed by /W4.
  /WX # Treats all compiler warnings as errors.
  /external:W0 #  Sets the default warning level to n (a value from 0 to 4) for external headers.
  /external:anglebrackets # Treats all headers enclosed in angle brackets (< >), as external headers.
  $<$<CONFIG:Debug>:/Zi> # Produces a separate PDB file that contains all the symbolic debugging information.
  /wd4100 # 'identifier': unreferenced formal parameter
  /wd4471 # 'enumeration': a forward declaration of an unscoped enumeration must have an underlying type (int assumed)
  /wd4505 # 'function': unreferenced local function has been removed
  /wd6387 # <argument> may be <value>: this does not adhere to the specification for the function <function name>: Lines: x, y
)

add_subdirectory(OpenIW)
