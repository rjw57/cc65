/*****************************************************************************/
/*                                                                           */
/*				    loop.h				     */
/*                                                                           */
/*				Loop management				     */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/* (C) 1998-2000 Ullrich von Bassewitz                                       */
/*               Wacholderweg 14                                             */
/*               D-70597 Stuttgart                                           */
/* EMail:        uz@musoftware.de                                            */
/*                                                                           */
/*                                                                           */
/* This software is provided 'as-is', without any expressed or implied       */
/* warranty.  In no event will the authors be held liable for any damages    */
/* arising from the use of this software.                                    */
/*                                                                           */
/* Permission is granted to anyone to use this software for any purpose,     */
/* including commercial applications, and to alter it and redistribute it    */
/* freely, subject to the following restrictions:                            */
/*                                                                           */
/* 1. The origin of this software must not be misrepresented; you must not   */
/*    claim that you wrote the original software. If you use this software   */
/*    in a product, an acknowledgment in the product documentation would be  */
/*    appreciated but is not required.                                       */
/* 2. Altered source versions must be plainly marked as such, and must not   */
/*    be misrepresented as being the original software.                      */
/* 3. This notice may not be removed or altered from any source              */
/*    distribution.                                                          */
/*                                                                           */
/*****************************************************************************/



#ifndef LOOP_H
#define LOOP_H



/*****************************************************************************/
/*	  	  		     data		     		     */
/*****************************************************************************/



typedef struct LoopDesc LoopDesc;
struct LoopDesc {
    LoopDesc* 	Next;
    unsigned 	StackPtr;
    unsigned	Loop;
    unsigned	Label;
    unsigned	linc;
    unsigned	lstat;
};



/*****************************************************************************/
/*	   	  		     code		     		     */
/*****************************************************************************/



LoopDesc* AddLoop (unsigned sp, unsigned loop, unsigned label,
	     	   unsigned linc, unsigned lstat);
/* Create and add a new loop descriptor */

LoopDesc* CurrentLoop (void);
/* Return a pointer to the descriptor of the current loop */

void DelLoop (void);
/* Remove the current loop */



/* End of loop.h */

#endif



