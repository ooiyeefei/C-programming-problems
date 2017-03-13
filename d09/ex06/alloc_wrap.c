/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc-wrap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:04:36 by kyork             #+#    #+#             */
/*   Updated: 2016/08/18 22:07:29 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>

void	*malloc(size_t sz)
{
	void	*(*libc_malloc)(size_t);
	void	*addr_alloc;

	libc_malloc = dlsym(RTLD_NEXT, "malloc");
	addr_alloc = libc_malloc(sz);
	printf("malloc(%ld) = %p\n", sz, addr_alloc);
	return (addr_alloc);
}

void	free(void *p)
{
	void	(*libc_free)(void*);

	libc_free = dlsym(RTLD_NEXT, "free");
	printf("free(%p)\n", p);
	libc_free(p);
}
