#
# Download and place this file into your git repository. 
# Rename it to 'Makefile' (without quotes)
#
# wget http://www.phys.uconn.edu/phys2200/downloads/Makefile.sample
# mv Makefile.sample Makefile
#
# or
#
# wget http://www.phys.uconn.edu/phys2200/downloads/Makefile.sample -O Makefile
#

EDITOR = /usr/bin/gedit
INDENT = /usr/bin/indent

CC        = clang
LDFLAGS   = -O -lm
CFLAGS    = -Weverything -Wextra -pedantic $(LDFLAGS)

.SUFFIXES:
.SUFFIXES:  .c .o .h

.PHONY: edit clean veryclean

target    = fbhw4

$(target) : $(target).c

edit : $(target).c
	$(EDITOR) $<
	$(INDENT) $<

clean : 
	rm -f *.o
	rm -f *.*~

veryclean : clean
	rm  -f $(target)