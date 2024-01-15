

CPPFLAGS+=-I/usr/include/modbus
LIBS+=-lmodbus

test_libmodbus: test_libmodbus.o
	${CXX} -o $@ $^ ${LDFLAGS} ${LIBS} 
