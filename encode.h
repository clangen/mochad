/*
 * Copyright 2010-2011 Brian Uechi <buasst@gmail.com>
 *
 * This file is part of mochad.
 *
 * mochad is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * mochad is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mochad.  If not, see <http://www.gnu.org/licenses/>.
 */

int processcommandline(int fd, char *aLine);

void cm15a_encode(int fd, unsigned char * buf, size_t buflen);

// ADDED HERE S Porter FROM GLOBAL.H, MADE "extern"
// to stop multiple definition errors 02/04/22
extern int Cm19a;
extern int PollTimeOut;

/* 1 bit per house code, 1=RF to PL, 0=off, default all house codes on */
extern unsigned short RfToPl16;

extern unsigned short RfToRf16;

