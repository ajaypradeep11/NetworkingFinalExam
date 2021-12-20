#include "globalThings.h"


bool g_StartUp(GLFWwindow* pWindow)
{

	::g_pFlyCamera = new cFlyCamera();

	// Create the shader manager
	::g_pShaderManager = new cShaderManager();

	::g_pTheLights = new cLightManager();

	::g_pVAOManager = new cVAOManager();


	return true;
}
