project(module)

set(HEADER_FILES
        Gregorian.h
        Julian.h
        Human.h
)

set(SOURCE_FILES
        Gregorian.cpp
        Julian.cpp
        Human.cpp
)

add_library(module STATIC ${SOURCE_FILES} ${HEADER_FILES})