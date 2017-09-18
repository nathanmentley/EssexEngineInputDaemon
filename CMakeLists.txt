#files

file(GLOB EssexEngineInputDaemon_HEADERS
    "src/Daemons/InputDaemon/*.h"
)
file(GLOB EssexEngineInputDaemon_SRC
    ${EssexEngineInputDaemon_HEADERS}
    "src/Daemons/InputDaemon/*.cpp"
)

#setup headers

file(COPY ${EssexEngineInputDaemon_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineInputDaemon/")

#setup build

add_library(EssexEngineInputDaemon SHARED ${EssexEngineInputDaemon_SRC})
target_link_libraries(EssexEngineInputDaemon EssexEngineCore)