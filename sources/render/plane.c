/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 16:03:57 by jibanez           #+#    #+#             */
/*   Updated: 2015/05/13 14:37:55 by jibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"

float		intersect_plane(t_object const object, t_ray const ray)
{
	float	b;
	float	c;

	(void)object;
	/*b = ray.dir.z;
	c = ray.o.z;
	return (solve_quadratic(0, b, c));*/
	b = ray.dir.z;
	c = -(ray.o.z);
	return (c / b);
}
