
set(MAIN_SRC
  main.cpp
  enginebox.h
  enginebox.cpp
  engineidle.h
  engineidle.cpp
  enginerunninghigh.h
  enginerunninghigh.cpp
  enginerunninglow.h
  enginerunninglow.cpp
  enginestate.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

