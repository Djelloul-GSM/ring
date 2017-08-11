#include "ring.h"


/*
	OpenGL 1.1 Extension
	Copyright (c) 2017 Mahmoud Fayed <msfclipper@yahoo.com>
*/


#include <GL/glew.h>
#include <GL/glut.h>

RING_FUNC(ring_get_gl_zero)
{
	RING_API_RETNUMBER(GL_ZERO);
}

RING_FUNC(ring_get_gl_false)
{
	RING_API_RETNUMBER(GL_FALSE);
}

RING_FUNC(ring_get_gl_logic_op)
{
	RING_API_RETNUMBER(GL_LOGIC_OP);
}

RING_FUNC(ring_get_gl_none)
{
	RING_API_RETNUMBER(GL_NONE);
}

RING_FUNC(ring_get_gl_texture_components)
{
	RING_API_RETNUMBER(GL_TEXTURE_COMPONENTS);
}

RING_FUNC(ring_get_gl_no_error)
{
	RING_API_RETNUMBER(GL_NO_ERROR);
}

RING_FUNC(ring_get_gl_points)
{
	RING_API_RETNUMBER(GL_POINTS);
}

RING_FUNC(ring_get_gl_current_bit)
{
	RING_API_RETNUMBER(GL_CURRENT_BIT);
}

RING_FUNC(ring_get_gl_true)
{
	RING_API_RETNUMBER(GL_TRUE);
}

RING_FUNC(ring_get_gl_one)
{
	RING_API_RETNUMBER(GL_ONE);
}

RING_FUNC(ring_get_gl_client_pixel_store_bit)
{
	RING_API_RETNUMBER(GL_CLIENT_PIXEL_STORE_BIT);
}

RING_FUNC(ring_get_gl_lines)
{
	RING_API_RETNUMBER(GL_LINES);
}

RING_FUNC(ring_get_gl_line_loop)
{
	RING_API_RETNUMBER(GL_LINE_LOOP);
}

RING_FUNC(ring_get_gl_point_bit)
{
	RING_API_RETNUMBER(GL_POINT_BIT);
}

RING_FUNC(ring_get_gl_client_vertex_array_bit)
{
	RING_API_RETNUMBER(GL_CLIENT_VERTEX_ARRAY_BIT);
}

RING_FUNC(ring_get_gl_line_strip)
{
	RING_API_RETNUMBER(GL_LINE_STRIP);
}

RING_FUNC(ring_get_gl_line_bit)
{
	RING_API_RETNUMBER(GL_LINE_BIT);
}

RING_FUNC(ring_get_gl_triangles)
{
	RING_API_RETNUMBER(GL_TRIANGLES);
}

RING_FUNC(ring_get_gl_triangle_strip)
{
	RING_API_RETNUMBER(GL_TRIANGLE_STRIP);
}

RING_FUNC(ring_get_gl_triangle_fan)
{
	RING_API_RETNUMBER(GL_TRIANGLE_FAN);
}

RING_FUNC(ring_get_gl_quads)
{
	RING_API_RETNUMBER(GL_QUADS);
}

RING_FUNC(ring_get_gl_quad_strip)
{
	RING_API_RETNUMBER(GL_QUAD_STRIP);
}

RING_FUNC(ring_get_gl_polygon_bit)
{
	RING_API_RETNUMBER(GL_POLYGON_BIT);
}

RING_FUNC(ring_get_gl_polygon)
{
	RING_API_RETNUMBER(GL_POLYGON);
}

RING_API void ringlib_init(RingState *pRingState)
{
	ring_vm_funcregister("get_gl_zero",ring_get_gl_zero);
	ring_vm_funcregister("get_gl_false",ring_get_gl_false);
	ring_vm_funcregister("get_gl_logic_op",ring_get_gl_logic_op);
	ring_vm_funcregister("get_gl_none",ring_get_gl_none);
	ring_vm_funcregister("get_gl_texture_components",ring_get_gl_texture_components);
	ring_vm_funcregister("get_gl_no_error",ring_get_gl_no_error);
	ring_vm_funcregister("get_gl_points",ring_get_gl_points);
	ring_vm_funcregister("get_gl_current_bit",ring_get_gl_current_bit);
	ring_vm_funcregister("get_gl_true",ring_get_gl_true);
	ring_vm_funcregister("get_gl_one",ring_get_gl_one);
	ring_vm_funcregister("get_gl_client_pixel_store_bit",ring_get_gl_client_pixel_store_bit);
	ring_vm_funcregister("get_gl_lines",ring_get_gl_lines);
	ring_vm_funcregister("get_gl_line_loop",ring_get_gl_line_loop);
	ring_vm_funcregister("get_gl_point_bit",ring_get_gl_point_bit);
	ring_vm_funcregister("get_gl_client_vertex_array_bit",ring_get_gl_client_vertex_array_bit);
	ring_vm_funcregister("get_gl_line_strip",ring_get_gl_line_strip);
	ring_vm_funcregister("get_gl_line_bit",ring_get_gl_line_bit);
	ring_vm_funcregister("get_gl_triangles",ring_get_gl_triangles);
	ring_vm_funcregister("get_gl_triangle_strip",ring_get_gl_triangle_strip);
	ring_vm_funcregister("get_gl_triangle_fan",ring_get_gl_triangle_fan);
	ring_vm_funcregister("get_gl_quads",ring_get_gl_quads);
	ring_vm_funcregister("get_gl_quad_strip",ring_get_gl_quad_strip);
	ring_vm_funcregister("get_gl_polygon_bit",ring_get_gl_polygon_bit);
	ring_vm_funcregister("get_gl_polygon",ring_get_gl_polygon);
}
