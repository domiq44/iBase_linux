/*===========================================================================*
 *                                                                           *
 *  sfltron.h - Tracing functions                                            *
 *                                                                           *
 *  Copyright (c) 1991-2009 iMatix Corporation                               *
 *                                                                           *
 *  ------------------ GPL Licensed Source Code ------------------           *
 *  iMatix makes this software available under the GNU General               *
 *  Public License (GPL) license for open source projects.  For              *
 *  details of the GPL license please see www.gnu.org or read the            *
 *  file license.gpl provided in this package.                               *
 *                                                                           *
 *  This program is free software; you can redistribute it and/or            *
 *  modify it under the terms of the GNU General Public License as           *
 *  published by the Free Software Foundation; either version 2 of           *
 *  the License, or (at your option) any later version.                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public                *
 *  License along with this program in the file 'license.gpl'; if            *
 *  not, write to the Free Software Foundation, Inc., 59 Temple              *
 *  Place - Suite 330, Boston, MA 02111-1307, USA.                           *
 *                                                                           *
 *  You can also license this software under iMatix's General Terms          *
 *  of Business (GTB) for commercial projects.  If you have not              *
 *  explicitly licensed this software under the iMatix GTB you may           *
 *  only use it under the terms of the GNU General Public License.           *
 *                                                                           *
 *  For more information, send an email to info@imatix.com.                  *
 *  --------------------------------------------------------------           *
 *===========================================================================*/
/*  ----------------------------------------------------------------<Prolog>-
    Synopsis:   Provides functions for a programmer who needs to insert
                long-term tracing code in software.  The tracing code is
                activated and disactivated at run-time, for instance when
                problems are suspected.
 ------------------------------------------------------------------</Prolog>-*/

#ifndef SFLTRON_INCLUDED               /*  Allow multiple inclusions        */
#define SFLTRON_INCLUDED

/*  Function prototypes                                                      */

#ifdef __cplusplus
extern "C" {
#endif

void  enable_trace        (void);
void  disable_trace       (void);
void  push_trace          (Bool new_state);
void  pop_trace           (void);
void  set_trace_file      (const char *filename, char mode);
void  trace               (const char *format, ...);

#ifdef __cplusplus
}
#endif


/*  External variables                                                       */

extern Bool  TraceState;                /*  TRUE or FALSE                    */
extern FILE *TraceFile;                 /*  Current trace output file        */

#endif
