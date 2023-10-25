project(module)

set(HEADER_FILES
        Gregorian.h
        Julian.h
        Human.h
        AirPlane.h
        FightPlane.h
        Server.h
        ServerClient.h
)

set(SOURCE_FILES
        Gregorian.cpp
        Julian.cpp
        Human.cpp
        AirPlane.cpp
        FightPlane.cpp
        Server.cpp
        ServerClient.cpp


)

add_library(module STATIC ${SOURCE_FILES} ${HEADER_FILES})