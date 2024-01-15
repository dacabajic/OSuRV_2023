
#include <iostream>


#include <modbus.h>


#define DEV_FN "/dev/ttyUSB0"

#if HAVE_DECL_TIOCSRS485
#error HAVE_DECL_TIOCSRS485
#endif
#if HAVE_DECL_TIOCM_RTS
#error HAVE_DECL_TIOCM_RTS
#endif


int main() {

	modbus_t *ctx;
	ctx = modbus_new_rtu(DEV_FN, 115200, 'N', 8, 1);

	return 0;
}
