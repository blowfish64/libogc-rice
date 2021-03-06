#ifndef __NUNCHUK_H__
#define __NUNCHUK_H__

#include "wiiuse_internal.h"

#ifdef __cplusplus
extern "C" {
#endif

int nunchuk_handshake(struct wiimote_t* wm, struct nunchuk_t* nc, ubyte* data, uword len);
void nunchuk_disconnected(struct wiimote_t* wm, struct nunchuk_t* nc);
int nunchuk_event(struct wiimote_t* wm, struct nunchuk_t* nc, ubyte* msg, ubyte len);

#ifdef __cplusplus
}
#endif

#endif
