
class cfgWeapons {
	// IF
	class LIB_SMG;
	class LIB_MP40: LIB_SMG {
		magazines[] = {"LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
	};
	class LIB_M1A1_Thompson: LIB_SMG {
		magazines[] = {"LIB_30Rnd_45ACP","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
	};
	class LIB_RIFLE;
	class LIB_K98: LIB_RIFLE {
		magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","fow_5Rnd_792x57"};
	};
	class LIB_M1_Garand: LIB_RIFLE {
		magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
	};
	class LIB_M1_Carbine: LIB_RIFLE {
		magazines[] = {"LIB_15Rnd_762x33","fow_15Rnd_762x33"};
	};
	class LIB_LMG;
	class LIB_MG42: LIB_LMG {
		magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","fow_50Rnd_792x57"};
	};
	class LIB_M1918A2_BAR: LIB_LMG {
		magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
	};

	// FOW
	class fow_rifle_base;
	class fow_w_k98 : fow_rifle_base {
		magazines[] = {"fow_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK"};
	};	
	class fow_w_mg42 : fow_rifle_base {		
		magazines[] = {"fow_50Rnd_792x57","lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS"};
	};
	class fow_w_mp40 : fow_rifle_base {
		magazines[] = {"fow_32Rnd_9x19_mp40","LIB_32Rnd_9x19"};
	};
	class fow_w_m1918a2 : fow_rifle_base {		
		magazines[] = {"fow_20Rnd_762x63","LIB_20Rnd_762x63"};
	};
	class fow_w_m1_garand : fow_rifle_base {
		magazines[] = {"fow_8Rnd_762x63","LIB_8Rnd_762x63"};
	};	
	class fow_w_m1_carbine : fow_rifle_base {
		magazines[] = {"fow_15Rnd_762x33","LIB_15Rnd_762x33"};
	};	
	class fow_w_m1a1_thompson : fow_rifle_base {
		magazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp_T","LIB_30Rnd_45ACP"};
	};
};