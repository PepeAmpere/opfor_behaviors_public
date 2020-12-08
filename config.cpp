#include "\vbs2\basic_defines.hpp"
#define __CurrentDir__ \core\addons\plugins\opfor_behaviors_public

//Class necessary for VBS to load the new addon correctly
class CfgPatches
{
	class vbs2_vbs_plugins_opfor_behaviors_public
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {
			vbs2_editor,
			vbs2_people,
			vbs2_vbs_plugins_generic_behaviors_public
		};
		modules[] =
		{
			vbs_core_content_module
		};
	};
};

// Adds btset to list of btsets which are loaded automatically
class CfgBehaviorTrees
{
	class opfor_behaviors_public //this is an arbitrary className, it needs to be unique though
	{
		path = "\core\addons\plugins\opfor_behaviors_public\data\opfor_behaviors_public\opfor_behaviors_public.btset"; //This is the relative path to the BT-set file to load
		name = "opfor_behaviors_public"; // This is the btset name duplicated in the configuration
	};
};
