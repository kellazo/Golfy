#ifndef __LIGHT__
#define __LIGHT__

#include "Color.h"
#include "glmath.h"
//#include "Math.h"

struct Light
{
	Light();

	void Init();
	void SetPos(float x, float y, float z);
	void Active(bool active);
	void Render();

	Color ambient;
	Color diffuse;
	vec3 position;
	//math::float3 position;

	int ref;
	bool on;
};

#endif