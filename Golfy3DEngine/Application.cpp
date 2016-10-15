#include "Application.h"

Application::Application()
{
	

	// The order of calls is very important!
	// Modules will Init() Start() and Update in this order
	// They will CleanUp() in reverse order

	// Main Modules
	

	// Scenes
	

	// Renderer last!
	
}

Application::~Application()
{
	
}

bool Application::Init()
{
	bool ret = true;

	// Call Init() in all modules
	

	// After all Init calls we call Start() in all modules
	LOG("Application Start --------------");
	

	
	return ret;
}

// ---------------------------------------------
void Application::PrepareUpdate()
{
	
}

// ---------------------------------------------
void Application::FinishUpdate()
{
}

// Call PreUpdate, Update and PostUpdate on all modules
update_status Application::Update()
{
	update_status ret = UPDATE_CONTINUE;
	PrepareUpdate();

	
	return ret;
}

bool Application::CleanUp()
{
	bool ret = true;
	
	return ret;
}
