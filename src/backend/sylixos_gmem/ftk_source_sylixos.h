/*
 * File: ftk_source_input.h
 * Author:  Han.hui <sylixos@gmail.com>
 * Brief:   source to handle /dev/input/xx
 *
 * Copyright (c) 2009 - 2010  Li XianJing <xianjimli@hotmail.com>
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
 * 2009-10-03 Han.hui <sylixos@gmail.com> created
 *
 */
#ifndef FTK_SOURCE_SYLIXOS_H
#define FTK_SOURCE_SYLIXOS_H

#include "ftk_event.h"
#include "ftk_source.h"

#ifndef FTK_DEFAULT_TOUCH
#define FTK_DEFAULT_TOUCH       "/dev/input/touch0"
#endif

#ifndef FTK_DEFAULT_KEYBOARD
#define FTK_DEFAULT_KEYBOARD    "/dev/input/keyboard0"
#endif

#ifndef FTK_DEFAULT_MOUSE
#define FTK_DEFAULT_MOUSE       "/dev/input/mouse0"
#endif

FtkSource* ftk_source_sylixos_input_create(void);

#endif  /*FTK_SOURCE_SYLIXOS_H*/
