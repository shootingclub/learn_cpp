project(module)

set(HEADER_FILES
        Gregorian.h
        Julian.h
        Human.h
        AirPlane.h
        FightPlane.h
)

set(SOURCE_FILES
        Gregorian.cpp
        Julian.cpp
        Human.cpp
        AirPlane.cpp
        FightPlane.cpp

)

add_library(module STATIC ${SOURCE_FILES} ${HEADER_FILES})