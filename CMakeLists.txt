cmake_minimum_required(VERSION 3.16)

project(keychaintest VERSION "0.0.0" LANGUAGES CXX)

# CMake things ---------------------------------------------------------------
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FeatureSummary)


# Qt things ---------------------------------------------------------------
set(QT_MINIMUM_VERSION "5.15.0")

find_package(Qt5 "${QT_MINIMUM_VERSION}" COMPONENTS REQUIRED
                Core
                Gui
                Widgets
)


# Compile && Link ---------------------------------------------------------
add_executable(keychaintest
    main.cpp
    mainview.cpp
)

target_link_libraries(keychaintest PRIVATE 
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        # ----------------------
)


# INSTALL ----------------------------------------------------------------
install(TARGETS keychaintest RUNTIME DESTINATION "${CMAKE_INSTALL_PREFIX}/bin")


# --------------------------------------------------------------------------
feature_summary(WHAT ALL INCLUDE_QUIET_PACKAGES FATAL_ON_MISSING_REQUIRED_PACKAGES)

