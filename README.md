# Template ESP_IDF and CEEDLING

Directories in this folder are:

-template_idf_ceedling_project

	-Components
		- Leds
			-Include
				-leds.h
			-Test
				-test_leds.c
			-leds.c
		- Tasks
			-Include
				-tasks.h
			-Test
			
			-tasks.c
	-Main
		- blink.c
		- CMakeList.txt
		- Component.mk
		- Kconfig.projbuild
	-Test
		-Support
		-.gitkeep
	
	-CMakeList.txt
	-Makefile
	-project.yml
	-sdkconfig
	-sdkconfig.defaults


To use this template you need to:

1) Clone esp-idf inside a folder that can be called esp/ . https://github.com/espressif/esp-idf.

So you will have this directories.
-esp
   -esp-idf

2) Install ceedling, you can follow the steps on their website. http://www.throwtheswitch.org/ceedling

After having all installed, you can clone this repo on the folder esp/ and then use it.

Easy steps to use are:

- Go to esp-idf folder. Open a terminal and use ./install.sh once this finish, use . ./export.sh and go to your template folder. Try this commands on the terminal:

1) idf.py build
2) idf.py flash OR idf.py flash monitor





