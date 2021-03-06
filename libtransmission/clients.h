/*
 * This file Copyright (C) 2009-2010 Mnemosyne LLC
 *
 * This file is licensed by the GPL version 2. Works owned by the
 * Transmission project are granted a special exemption to clause 2(b)
 * so that the bulk of its code can remain under the MIT license.
 * This exemption does not extend to derived works not owned by
 * the Transmission project.
 *
 * $Id$
 */

#ifndef __TRANSMISSION__
 #error only libtransmission should #include this header.
#endif

#ifndef TR_CLIENTS_H
#define TR_CLIENTS_H

/**
 * @brief parse a peer-id into a human-readable client name and version number
 * @ingroup utils
 */
void tr_clientForId( char * buf, size_t buflen, const void * peer_id );

#endif
