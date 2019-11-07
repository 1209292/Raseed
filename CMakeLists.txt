cmake_minimum_required(VERSION 3.5)

project(Raseed)

set(CMAKE_CXX_STANDARD 11)

SET(SOURCE_FILES main.cpp subscriber.hpp subscriber.cpp raseedDatabase.hpp raseedDatabase.cpp subscriberWallet.hpp subscriberWallet.cpp raseedAccount.hpp raseedAccount.cpp)
add_executable(Raseed ${SOURCE_FILES})
