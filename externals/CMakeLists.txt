include(FetchContent)

FetchContent_Declare(zynamic
  GIT_REPOSITORY https://github.com/OpenIW/zynamic.git
  GIT_TAG main
)

set(ZYNAMIC_OUT "C:/Program Files (x86)/Steam/steamapps/common/Call of Duty Modern Warfare 2" CACHE PATH "Steam target out directory." FORCE)
set(ZYNAMIC_APP "Call of Duty Modern Warfare 2" CACHE STRING "Steam target application name.")
set(ZYNAMIC_SRC "iw4mp" CACHE STRING "Steam target executable name.")

FetchContent_MakeAvailable(Zynamic)
