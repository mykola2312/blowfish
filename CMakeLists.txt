cmake_minimum_required(VERSION 3.18)
project(blowfish)

set(SOURCES
	blowfish.c
)

set(HEADERS
	blowfish.h
)

add_library(blowfish ${SOURCES} ${HEADERS})
target_include_directories(blowfish PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)
