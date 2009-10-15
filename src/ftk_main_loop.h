/*
 * File: ftk_main_loop.h    
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   main loop.
 *
 * Copyright (c) 2009  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2009-10-03 Li XianJing <xianjimli@hotmail.com> created
 *
 */
#ifndef FTK_MAIN_LOOP_H
#define FTK_MAIN_LOOP_H

#include "ftk_sources_manager.h"

struct _FtkMainLoop;
typedef struct _FtkMainLoop FtkMainLoop;

FtkMainLoop* ftk_main_loop_create(FtkSourcesManager* sources_manager);
Ret  ftk_main_loop_run(FtkMainLoop* thiz);
Ret  ftk_main_loop_quit(FtkMainLoop* thiz);
Ret  ftk_main_loop_add_source(FtkMainLoop* thiz, FtkSource* source);
Ret  ftk_main_loop_remove_source(FtkMainLoop* thiz, FtkSource* source);
void ftk_main_loop_destroy(FtkMainLoop* thiz);

#endif/*FTK_MAIN_LOOP_H*/

