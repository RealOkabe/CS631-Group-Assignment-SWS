PROG=	sws
OBJS=	util.o sws.o handler.o cgi.o getuserdir.o readdirs.o logger.o
CFLAGS=	-Wall -Werror -Wextra -g

all: ${PROG}

depend:
	mkdep -- ${CFLAGS} *.c

${PROG}: ${OBJS}
	@echo $@ depends on $?
	${CC} -lm ${OBJS} -o ${PROG} ${LDFLAGS}

clean:
	rm -f ${PROG} ${OBJS}