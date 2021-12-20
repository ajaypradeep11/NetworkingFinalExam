#include "globalThings.h"

cFlyCamera* g_pFlyCamera = NULL;

//glm::vec3 g_cameraEye = glm::vec3(0.0f, 0.0f, +4.0f);
//glm::vec3 g_cameraAt = glm::vec3(0.0f, 0.0f, 0.0f);

char Mesh_charArray[65][50];

cVAOManager* g_pVAOManager = NULL;
cShaderManager* g_pShaderManager = NULL;

std::string g_tictactow[3][3];
cMesh* g_tictactow_meshX[3][3];
cMesh* g_tictactow_meshO[3][3];



cLightManager* g_pTheLights = NULL;
// This got moved into the light manager class
//extern cLightHelper* g_pTheLightHelper;

// List of objects to draw
std::vector< cMesh* > g_vec_pMeshes;
std::vector< cMesh* > g_vec_pEnemy;
std::vector< cMesh* > g_vec_pEnemyTimeSkip;
std::vector<iGameObject*> g_vec_pEnemysShip;
cMesh* g_Missile;
cMesh* g_UFO;
\
cMesh* g_pDebugSphere = NULL;
bool g_bShowDebugShere = true;
cGameManager* g_GameManager;


cBasicTextureManager* g_pTextureManager = new cBasicTextureManager();
bool canfireWeapon = true;
bool swingBool = false;
bool bIsWireframe = false;
bool fireWeapon = false;
bool Player1 = false;
bool Player2 = false;
bool insideLoop = false;
unsigned int g_selectedObject = 0;
unsigned int g_selectedLight = 0;

std::vector<glm::vec3> leftWall;
std::vector<glm::vec3> rightWall;
std::vector<glm::vec3> backWall;
std::vector<glm::vec3> frontWall;

// This will be printed in the title bar
std::string g_TitleText = "";





bool g_FindObjectByUniqueID(unsigned int uniqueID_toFind, cMesh*& theObjectIFound);



cMesh* g_findObjectByUniqueID(unsigned int uniqueID_toFind)
{
    for ( unsigned int index = 0; index != ::g_vec_pMeshes.size(); index++ )
    {
        if ( ::g_vec_pMeshes[index]->getUniqueID() == uniqueID_toFind )
        {
            return ::g_vec_pMeshes[index];
        }
    }
    return NULL;
}

bool g_findObjectByUniqueID( unsigned int uniqueID_toFind, cMesh &theObjectIFound )
{
    for ( unsigned int index = 0; index != ::g_vec_pMeshes.size(); index++ )
    {
        if ( ::g_vec_pMeshes[index]->getUniqueID() == uniqueID_toFind )
        {
            // Dereferences and returns a stack based copy
            theObjectIFound = *(::g_vec_pMeshes[index]);
            return true;
        }
    }
    return false;
}

bool g_FindObjectByUniqueID(unsigned int uniqueID_toFind, cMesh* &theObjectIFound)
{
    for ( unsigned int index = 0; index != ::g_vec_pMeshes.size(); index++ )
    {
        if ( ::g_vec_pMeshes[index]->getUniqueID() == uniqueID_toFind )
        {
            // Returns a pointer to the object
            theObjectIFound = ::g_vec_pMeshes[index];
            return true;
        }
    }
    return false;
}

// If not found, return NULL (0)
cMesh* g_findObjectByFriendlyName(std::string NametoFind)
{
    for ( unsigned int index = 0; index != ::g_vec_pMeshes.size(); index++ )
    {
        cMesh* pMeshToTest = ::g_vec_pMeshes[index];

        // Is functionally the same thing as using a reference:
        //cMesh& meshToTest = g_vecMeshes[index];

        if ( pMeshToTest->friendlyName == NametoFind )
        {
            return pMeshToTest;
        }
    }
    // DIDN'T find it, return NULL
    return NULL;
}

cMesh* g_FindObjectByUniqueID(unsigned int uniqueID_toFind)
{
    for ( unsigned int index = 0; index != ::g_vec_pMeshes.size(); index++ )
    {
        cMesh* pMeshToTest = ::g_vec_pMeshes[index];

        // Is functionally the same thing as using a reference:
        //cMesh& meshToTest = g_vecMeshes[index];

        if ( pMeshToTest->getUniqueID() == uniqueID_toFind )
        {
            return pMeshToTest;
        }
    }
    // DIDN'T find it, return NULL
    return NULL;
}


