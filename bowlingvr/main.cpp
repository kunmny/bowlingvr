//#include "Application.h"
#include "TestState.h"
int main(int argc, char* argv[])
{
	Application *application = new Application();
	SetState<TestState>(application);
	while (application->Run());
	delete application;
	return 0;
}