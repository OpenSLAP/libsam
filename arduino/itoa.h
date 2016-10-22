/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _ITOA_
#define _ITOA_

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

#if 0

extern void itoa( int n, char s[] ) ;

#else

// VESUVIUS: newer version of newlib include a stdlibc++ and stdlib impl
//           meaning we should not define these as extern becuase stdlib does that.
//           similarly, in the .c file we do not need to implement it.
#if __NEWLIB__ == 2 && __NEWLIB_MINOR__ < 2
extern char* utoa( unsigned long value, char *string, int radix ) ;
extern char* itoa( int value, char *string, int radix ) ;
#endif


extern char* ltoa( long value, char *string, int radix ) ;
extern char* ultoa( unsigned long value, char *string, int radix ) ;
#endif /* 0 */

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif // _ITOA_
