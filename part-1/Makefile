

PROG = cflask
SRC = cflask.c

DFLAGS = -DUSE_WEBSOCKET -DUSE_IPV6

TOP = ../
INCDIR = include/
LIBDIR = lib/
OBJDIR = obj/
SRCDIR = src/
TSTDIR = test/
CC     = cc
LINK   = cc
RM     = /bin/rm -f
STRIP  = strip
OBJEXT = .o
LIBEXT = .a
EXEEXT =
OFLAG  = -o
XFLAG  = -o
AR     = ar
ARQC   = qc 
ARQ    = q
RANLIB = ranlib
LIBS   = -lpthread -lm

CFLAGS=	-Wall \
	-Wextra \
	-Wstrict-prototypes \
	-Wshadow \
	-Wpointer-arith \
	-Wformat-security \
	-Winit-self \
	-Wcast-qual \
	-Wcast-align \
	-Wwrite-strings \
	-Wnested-externs \
	-Wredundant-decls \
	-Werror \
	-O3 \
	-funsigned-char \
	-I${TOP}/${INCDIR}

LIBS = -lpthread -lm

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC) $(LIBS)

${CC} -c ${CPPFLAGS} ${CFLAGS} ${DFLAGS} ${OFLAG}$@ $<

cc -o hello -I../../include   hello.c libcivetweb.a -lpthread -ldl

cc -c -Wall -Wextra -Wstrict-prototypes -Wshadow -Wpointer-arith -Wformat-security -Winit-self -Wcast-qual -Wcast-align -Wwrite-strings -Wnested-externs -Wredundant-decls -Werror -O3 -funsigned-char -Iinclude/ -DUSE_STACK_SIZE=102400 -otest/obj/testmime.o test/testmime.c

${LINK} ${XFLAG}testmime${EXEEXT}		\
		${TSTDIR}${OBJDIR}testmime${OBJEXT}	\
		${LIBDIR}libhttp${LIBEXT}		\
		${LIBS}
cc -otestmime		\
	test/obj/testmime.o	\
	lib/libhttp.a		\
	-lpthread -lm


clean:
	rm -f $(PROG)

.PHONY: all clean