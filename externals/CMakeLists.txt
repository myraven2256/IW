include(FetchContent)

FetchContent_Declare(zynamic
  GIT_REPOSITORY https://github.com/OpenIW/zynamic.git
  GIT_TAG main
)

set(ZYNAMIC_APP "Call of Duty Modern Warfare 2")
set(ZYNAMIC_SRC "iw4mp")
set(ZYNAMIC_OUT "C:/Program Files (x86)/Steam/steamapps/common/Call of Duty Modern Warfare 2")

FetchContent_MakeAvailable(Zynamic)
