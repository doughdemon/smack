/*
 * This file is part of libsmack
 *
 * Copyright (C) 2011 Intel Corporation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * Authors:
 * Brian McGillion <brian.mcgillion@intel.com>
 * Jarkko Sakkinen <jarkko.sakkinen@intel.com>
 */

#include <sys/smack.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *label = NULL;

	if (smack_new_label_from_self(&label)) {
		perror("smack_new_label_from_self");
		return EXIT_FAILURE;
	}

	printf("%s", label);
	free(label);
	return EXIT_SUCCESS;
}
