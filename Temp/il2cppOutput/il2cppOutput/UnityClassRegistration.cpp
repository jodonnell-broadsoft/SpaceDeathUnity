struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

}

void RegisterAllClasses()
{
	//Total: 58 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//9. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//10. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//11. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//12. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//13. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//14. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//15. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//16. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//17. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//18. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//21. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//22. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//23. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//24. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//25. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//26. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//27. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//28. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//29. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//30. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//31. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//32. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//33. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//34. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//35. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//36. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//37. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//38. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//39. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//40. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//41. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//42. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//43. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//44. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//45. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//46. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//47. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//48. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//49. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//50. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//51. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//52. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//53. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//54. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//55. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//56. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//57. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
