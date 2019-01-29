class cfgWeapons
{
	class fow_rifle_base;
	class fow_rifleBolt_base;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class HMG_M2;
	class LIB_P38;
	class LIB_LAUNCHER;
	class LIB_RIFLE;
	class LIB_LMG;
	class LIB_SMG;
	class LIB_PISTOL;
	
	// Infantry weapons
	class fow_w_m1a1_bazooka : Launcher_Base_F {
		magazines[] = {"fow_1Rnd_m6a1","LIB_1Rnd_60mm_M6"};
	};
	class LIB_M1A1_Bazooka : LIB_LAUNCHER {
		magazines[] = {"fow_1Rnd_m6a1","LIB_1Rnd_60mm_M6"};
	};
	
	class fow_w_k98 : fow_rifleBolt_base {
		magazines[] = {"lib_5Rnd_792x57", "lib_5Rnd_792x57_t", "lib_5Rnd_792x57_sS", "lib_5Rnd_792x57_SMK","fow_5Rnd_792x57"};
	};
	class LIB_K98 : LIB_RIFLE {
		magazines[] = {"lib_5Rnd_792x57", "lib_5Rnd_792x57_t", "lib_5Rnd_792x57_sS", "lib_5Rnd_792x57_SMK","fow_5Rnd_792x57",};
	};
	
	class fow_w_mg42 : fow_rifle_base {
		magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","fow_50Rnd_792x57"};
	};
	class LIB_MG42 : LIB_LMG {
		magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","fow_50Rnd_792x57"};
	};
	class fow_w_mg34 : fow_rifle_base {
		magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","fow_50Rnd_792x57"};
	};
	class LIB_MG34 : LIB_LMG {
		magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","fow_50Rnd_792x57"};
	};	
	
	class fow_w_mp40 : fow_rifle_base {
		magazines[] = {"LIB_32rnd_9x19", "LIB_32rnd_9x19_t","fow_32Rnd_9x19_mp40"};
	};
	class LIB_MP40 : LIB_SMG {
		magazines[] = {"LIB_32rnd_9x19", "LIB_32rnd_9x19_t","fow_32Rnd_9x19_mp40"};
	};
	class LIB_MP38 : LIB_SMG {
		magazines[] = {"LIB_32rnd_9x19", "LIB_32rnd_9x19_t","fow_32Rnd_9x19_mp40"};
	};
	
	class fow_w_stg44 : fow_rifle_base {
		magazines[] = {"LIB_30rnd_792x33", "LIB_30rnd_792x33_t","fow_30Rnd_792x33"};
	};
	class LIB_MP44 : LIB_RIFLE {
		magazines[] = {"LIB_30rnd_792x33", "LIB_30rnd_792x33_t","fow_30Rnd_792x33"};
	};	
	
	class fow_w_m1_carbine : fow_rifle_base {
		magazines[] = {"LIB_15Rnd_762x33", "LIB_15Rnd_762x33_t","fow_15Rnd_762x33"};	
	};	
	class LIB_M1_Carbine : LIB_RIFLE {
		magazines[] = {"LIB_15Rnd_762x33", "LIB_15Rnd_762x33_t","fow_15Rnd_762x33"};	
	};
	
	class fow_w_m1_garand : fow_rifle_base {
		magazines[] = {"LIB_8Rnd_762x63", "LIB_8Rnd_762x63_t","fow_8Rnd_762x63"};
	};	
	class LIB_M1_Garand : LIB_RIFLE {
		magazines[] = {"LIB_8Rnd_762x63", "LIB_8Rnd_762x63_t","fow_8Rnd_762x63"};
	};	
	
	class fow_w_m1918a2 : fow_rifle_base {
		magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
	};	
	class LIB_M1918A2_BAR : LIB_LMG {
		magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
	};
	
	class fow_w_m1919 : fow_rifle_base {
		magazines[] = {"LIB_50Rnd_762x63","fow_30Rnd_762x63","fow_50Rnd_762x63"};
	};	
	class LIB_M1919A4 : LIB_LMG {
		magazines[] = {"LIB_50Rnd_762x63","fow_30Rnd_762x63","fow_50Rnd_762x63"};
	};	
	
	class fow_w_m1a1_thompson : fow_rifle_base {
		magazines[] = {"LIB_30Rnd_45ACP","LIB_30Rnd_45ACP_t","fow_30Rnd_45acp", "fow_30Rnd_45acp_T"};
	};	
	class LIB_M1A1_Thompson : LIB_SMG {
		magazines[] = {"LIB_30Rnd_45ACP","LIB_30Rnd_45ACP_t","fow_30Rnd_45acp", "fow_30Rnd_45acp_T"};
	};
	class LIB_M1928_Thompson : LIB_M1A1_Thompson {
		magazines[] = {"LIB_50Rnd_45ACP","LIB_30Rnd_45ACP","LIB_30Rnd_45ACP_t","fow_30Rnd_45acp", "fow_30Rnd_45acp_T"};
	};
	class LIB_M1928A1_Thompson : LIB_M1928_Thompson {
		magazines[] = {"LIB_50Rnd_45ACP","LIB_30Rnd_45ACP","LIB_30Rnd_45ACP_t","fow_30Rnd_45acp", "fow_30Rnd_45acp_T"};
	};
	
	class fow_w_m3 : fow_rifle_base {
		magazines[] = {"LIB_30Rnd_M3_GreaseGun_45ACP","fow_30Rnd_45acp", "fow_30Rnd_45acp_T"};
	};	
	class LIB_M3_GreaseGun : LIB_SMG {
		magazines[] = {"LIB_30Rnd_M3_GreaseGun_45ACP","fow_30Rnd_45acp", "fow_30Rnd_45acp_T"};
	};
	
	class fow_w_g43 : fow_rifle_base {
		magazines[] = {"lib_10Rnd_792x57","fow_10nd_792x57","lib_5Rnd_792x57","fow_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS", "lib_5Rnd_792x57_SMK", "lib_10Rnd_792x57_T", "lib_10Rnd_792x57_T2", "lib_10Rnd_792x57_sS", "lib_10Rnd_792x57_SMK"}; 
	};
	class LIB_G43 : LIB_RIFLE {
		magazines[] = {"lib_10Rnd_792x57","fow_10nd_792x57","lib_5Rnd_792x57","fow_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS", "lib_5Rnd_792x57_SMK", "lib_10Rnd_792x57_T", "lib_10Rnd_792x57_T2", "lib_10Rnd_792x57_sS", "lib_10Rnd_792x57_SMK"}; 
	};

	class fow_w_m1911 : Pistol_Base_F {
		magazines[] = {"LIB_7Rnd_45ACP","fow_7Rnd_45acp"};
	};
	class LIB_Colt_M1911 : LIB_PISTOL {
		magazines[] = {"LIB_7Rnd_45ACP","fow_7Rnd_45acp"};
	};
	
	class fow_w_ppk : Pistol_Base_F {
		magazines[] = {"LIB_7Rnd_9x19","fow_8Rnd_9x19"};
	};
	class LIB_WaltherPPK : LIB_PISTOL {
		magazines[] = {"LIB_7Rnd_9x19","fow_8Rnd_9x19"};
	};
	
	class fow_w_p08 : Pistol_Base_F {
		magazines[] = {"LIB_8Rnd_9x19_P08","fow_8Rnd_9x19"};
	};	
	class LIB_P08 : LIB_P38 {
		magazines[] = {"LIB_8Rnd_9x19_P08","fow_8Rnd_9x19"};
	};	
	
	class fow_w_m1903A1 : fow_rifleBolt_base {
		magazines[] = {"LIB_5Rnd_762x63", "LIB_5Rnd_762x63_t","fow_5Rnd_762x63"};
	};
	class LIB_M1903A3_Springfield : LIB_RIFLE {
		magazines[] = {"LIB_5Rnd_762x63", "LIB_5Rnd_762x63_t","fow_5Rnd_762x63"};
	};

	class fow_w_fg42 : fow_rifle_base {
		magazines[] = {"LIB_20Rnd_792x57","fow_20Rnd_792x57"};
	};
	class LIB_FG42G : LIB_RIFLE {
		magazines[] = {"LIB_20Rnd_792x57","fow_20Rnd_792x57"};
	};

	// Vehicles weapons
	class CannonCore;
	class fow_w_75mm_kwk42 : CannonCore {
		magazineReloadTime = 7;
		reloadTime = 7;
	};
	class fow_w_20mm_kwk38 : CannonCore {
		magazineReloadTime = 7.5;
		reloadTime = 4;
	};
	class fow_w_75mm_M3 : CannonCore {
		magazineReloadTime = 6;
		reloadTime = 6;
	};	
	class fow_w_37mm_M6 : fow_w_75mm_M3 {
		magazineReloadTime = 5;
		reloadTime = 5;
	};	
	class fow_w_75mm_OQF : fow_w_75mm_M3 {
		magazineReloadTime = 6;
		reloadTime = 6;
	};	
};
