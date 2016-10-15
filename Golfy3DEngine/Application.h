#ifndef __APPLICATION_H__
#define __APPLICATION_H__


#include "Globals.h"


class Application
{
public:
	

private:

	
	float	dt;
	

public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

private:

	
	void PrepareUpdate();
	void FinishUpdate();
};


#endif
