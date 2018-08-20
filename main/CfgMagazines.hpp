class CfgMagazines
{
	class VehicleMagazine;
	class CA_LauncherMagazine;
	class CA_Magazine;
	
	// СНАРЯДЫ
	class fow_30Rnd_88mm_AP : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_PzGr39_KwK36_AP";
	};	
	class fow_30Rnd_88mm_HE : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_SprGr_KwK36_HE";
	};
	
	// Японский мелкий
	class fow_49Rnd_37mm_APHE : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_S_37L57_M74";
	};
	class fow_49Rnd_37mm_HE : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_S_37L57_M63";
	};
	
	// Шерман
	class fow_40Rnd_75mm_M48_HE : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_M42A1_M1_HE";
	};
	class fow_30Rnd_75mm_M61_APCBC : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_T45_M1_APCR";		
	};
	class fow_27Rnd_75mm_M72_AP : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_M61_M1_AP";
	};
	
	// Стюарт
	class fow_40Rnd_37mm_M63_HE : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_S_37L57_M63";
	};
	class fow_30Rnd_37mm_M74_AP : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_S_37L57_M74";
	};
	class fow_27Rnd_37mm_M51_APC : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_S_37L57_M51";
	};
	
	// Кромвель + пушка
	class fow_10Rnd_57mm_APCBC : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_M61_M1_AP";
	};	
	class fow_20Rnd_57mm_AP : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_M61_M1_AP";
	};	
	class fow_10Rnd_57mm_APDS : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_M61_M1_AP";
	};	
	class fow_30Rnd_57mm_HE : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_M42A1_M1_HE";
	};
	class fow_10Rnd_57mm_APCR : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_T45_M1_APCR";		
	};
	
	// PZ V
	class fow_30Rnd_75mm_pzgr4042_APCR : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_PzGr4042_KwK42_APCR";
	};	
	class fow_30Rnd_75mm_pzgr3942_APCBC_HE : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_PzGr3942_KwK42_AP";
	};	
	class fow_30Rnd_75mm_sprg42_HE : VehicleMagazine {
		tracersEvery = 0;
		ammo = "LIB_SprGr42_KwK42_HE";
	};
	
	// броневик 222
	class fow_20Rnd_20mm_HE : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_S_20L55_SprGr";
	};		
	class fow_20Rnd_20mm_AP : VehicleMagazine {
		tracersEvery = 1;
		ammo = "LIB_S_20L55_PzGr";
	};	
	
	// ГРАНАТОМЁТЫ
	class fow_1Rnd_m6a1 : CA_LauncherMagazine {
		displayName = "M6A1 AT Rocket";
		ammo = "LIB_60mm_M6"; 
		mass = 25;
	};	
	class fow_1Rnd_pzfaust_30_klein : CA_Magazine {
		ammo = "LIB_PzFaust_30m"; 
	};
	class fow_1Rnd_pzfaust_30 : fow_1Rnd_pzfaust_30_klein {
		ammo = "LIB_PzFaust_30m"; 
	};
	class fow_1Rnd_pzfaust_60 : fow_1Rnd_pzfaust_30 {
		ammo = "LIB_PzFaust_60m"; 
	};
	class fow_1Rnd_pzfaust_100 : fow_1Rnd_pzfaust_30 {
		ammo = "LIB_PzFaust_100m"; 
	};	

	// ПУЛИ
	class fow_50Rnd_M1919 : VehicleMagazine {
		tracersEvery = 5;
	};
	class fow_250Rnd_vickers : VehicleMagazine {
		tracersEvery = 7;
	};	
	class fow_30Rnd_303_bren_mounted : VehicleMagazine {
		tracersEvery = 3;
	};	
	class fow_250Rnd_792x57 : VehicleMagazine {
		tracersEvery = 7;
	};
};