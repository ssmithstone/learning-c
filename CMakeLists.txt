cmake_minimum_required(VERSION 3.9)
project(learning_c C)


set(CMAKE_C_STANDARD 99)

set(LEARNING_C_SRC src/c/main.c)

set(TEST_SRC_DIR test/c)

if ((EXISTS ${TEST_SRC_DIR}) AND (IS_DIRECTORY ${TEST_SRC_DIR}))
    message("We have test directory")
else ()
    message("No tests what is wrong with you")
endif ()

function(Hello_src _src)
    foreach (item ${_src})
        message("item => ${item}")
    endforeach (item)
endfunction()

Hello_src(${LEARNING_C_SRC})

add_executable(learning_c ${LEARNING_C_SRC}) # there is now a target called learning_c available to cmake

