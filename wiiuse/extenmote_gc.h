/*
 *	wiiuse
 *
 *	Written By:
 *		Michael Laforest	< para >
 *		Email: < thepara (--AT--) g m a i l [--DOT--] com >
 *
 *	Copyright 2006-2007
 *
 *	This file is part of wiiuse.
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *	$Header: $
 *
 */

/**
 *	@file
 *	@brief Extenmote GC expansion device.
 */

#ifndef EXTENMOTE_GC_H_INCLUDED
#define EXTENMOTE_GC_H_INCLUDED

#include "wiiuse_internal.h"

#ifdef __cplusplus
extern "C" {
#endif

int extenmote_gc_handshake(struct wiimote_t* wm, struct extenmote_gc_t* gc, ubyte* data, uword len);

void extenmote_gc_disconnected(struct wiimote_t* wm, struct extenmote_gc_t* gc);

int extenmote_gc_event(struct wiimote_t* wm, struct extenmote_gc_t* gc, ubyte* msg, ubyte len);

#ifdef __cplusplus
}
#endif

#endif // EXTENMOTE_GC_H_INCLUDED
