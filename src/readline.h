/* readline.h */

/*
 * This file is part of CliFM
 * 
 * Copyright (C) 2016-2023, L. Abramovich <leo.clifm@outlook.com>
 * All rights reserved.

 * CliFM is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CliFM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
*/

#ifndef __READLINE_H
#define __READLINE_H

__BEGIN_DECLS

int  alt_rl_prompt(const char *, const char *);
int  initialize_readline(void);
int  is_quote_char(const char);
char **my_rl_completion(const char *, int, int);
char *my_rl_path_completion(const char *, int);
int  rl_get_y_or_n(const char *);
char *rl_no_hist(const char *);
int  tab_complete(int);

__END_DECLS

#endif /* __READLINE_H */
