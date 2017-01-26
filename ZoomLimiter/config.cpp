class CfgPatches
{
	class IFA3_FOW_Compat_ZoomLimiter
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.00;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
	class Rifle_Base_F;
	class fow_rifle_base : Rifle_Base_F {
			opticsZoomMin = 0.4;
			opticsZoomInit = 1;
			opticsZoomMax = 0.4;
	};
};
