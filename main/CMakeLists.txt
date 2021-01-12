#[In this CMake file you have to put every source file to be include on the compilation process as you can below]


idf_component_register( SRCS            "blink.c"
                                        "../components/leds/leds.c"
                                        "../components/tasks/tasks.c"

                        INCLUDE_DIRS    "../components")