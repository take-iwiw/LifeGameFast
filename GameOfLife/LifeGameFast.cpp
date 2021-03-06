#include <stdio.h>
#include "WindowManager.h"
#include "WorldContext.h"
#include "ControllerView.h"

#include "FileAccessor.h"

int main(int argc, char *argv[])
{
	WindowManager::getInstance()->init();
	ControllerView::getInstance();		// create and show controller view

	//new WorldContext(200, 300, 0, 0, 0, 1920, 1080);
	new WorldContext();

	WindowManager::getInstance()->startLoop();
	// never reaches here

	return 0;
}
