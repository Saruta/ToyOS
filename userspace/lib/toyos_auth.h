/* vim: tabstop=4 shiftwidth=4 noexpandtab
 * This file is part of ToyOS and is released under the terms
 * of the NCSA / University of Illinois License - see LICENSE.md
 * Copyright (C) 2013-2014 Kevin Lange
 */

#ifndef _TOYOS_AUTH_H
#define _TOYOS_AUTH_H

int toyos_auth_check_pass(char * user, char * pass);
void toyos_auth_set_vars(void);

#endif /* _toyos_AUTH_H */
