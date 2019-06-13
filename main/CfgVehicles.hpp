class CfgVehicles 
{
	class StaticWeapon;
	class Tank;
	class Car;
	class Tank_F : Tank {class EventHandlers;};
	class Car_F : Car {class EventHandlers;};
	class Wheeled_APC_F : Car_F {};
	class Truck_F : Car_F {};
		
	class fow_w_6Pounder;
	class fow_w_6Pounder_uk : fow_w_6Pounder {
		LIB_isTowable = 1;
		LIB_Towing_OffsetX = 180;
		LIB_Towing_OffsetY = 180;
		LIB_Towing_OffsetZ = 1.5;
		LIB_Towing_Wheels = "[""wheel_1_1"",""wheel_2_1""]";
		LIB_Towing_DetachDirection = 180;
		lib_attach_pos[] = {0,0,0};
		
		class EventHandlers  {
			class LIB_StaticWeapons {
				init = "_this call LIB_System_Tanks_EH_Tank_init; (_this select 0) spawn LIB_System_Artillery_Zis3_init";
				fired = "_this call EH_LIB_tank_Fired";
				handleDamage = "_this call EH_LIB_arty_handleDamage";
			};
		};		
	};
	
	// òàíêîâ
	class fow_v_cromwell : Tank_F {
		armor = 400;
		armorStructural = 100;		
	};
	class fow_v_m4a2 : Tank_F {
		armor = 400;
		armorStructural = 100;		
	};
	class fow_v_m5a1 : Tank_F {
		armor = 200;
		armorStructural = 100;		
	};
	class fow_v_panther : Tank_F {
		armor = 700;
		armorStructural = 100;		
	};
	class fow_v_type95_HaGo : Tank_F {
		armor = 200;
		armorStructural = 100;		
	};
	
	// ËÅÃÊÈÅ ÌÀØÈÍÛ
	class fow_v_universalCarrier : Tank_F {
		armor = 150;

		LIB_Towing_Distance = 1.7;
		LIB_Towing_OffsetX_LIB_61k = 0;
		LIB_Towing_OffsetY_LIB_61k = 0;
		LIB_Towing_OffsetX_LIB_Pak40 = 0;
		LIB_Towing_OffsetY_LIB_Pak40 = 0;
		
		class UserActions {
			class Towing {
				displayName = $STR_LIB_ARTY_TOWING;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\pritsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Attach_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Attach_Trucks;";
			};
			
			class Drop {
				displayName = $STR_LIB_ARTY_DROP;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\otsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Drop_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Drop_Trucks;";
			};
		};		
	};
	class fow_v_lvta2 : Tank_F {
		armor = 150;
	};
	class fow_v_sdkfz_250_base : Tank_F {
		armor = 150;
		
		LIB_Towing_Distance = 1.5;
		LIB_Towing_OffsetX_LIB_61k = 0;
		LIB_Towing_OffsetY_LIB_61k = 0;
		LIB_Towing_OffsetX_LIB_Pak40 = 0;
		LIB_Towing_OffsetY_LIB_Pak40 = 0;
		
		class UserActions {
			class Towing {
				displayName = $STR_LIB_ARTY_TOWING;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\pritsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Attach_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Attach_Trucks;";
			};
			
			class Drop {
				displayName = $STR_LIB_ARTY_DROP;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\otsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Drop_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Drop_Trucks;";
			};
		};		
	};
	class fow_v_sdkfz_251 : Tank_F {
		armor = 150;

		LIB_Towing_Distance = 1.4;
		LIB_Towing_OffsetX_LIB_61k = 0;
		LIB_Towing_OffsetY_LIB_61k = 0;
		LIB_Towing_OffsetX_LIB_Pak40 = 0;
		LIB_Towing_OffsetY_LIB_Pak40 = 0;
		
		class UserActions {
			class Towing {
				displayName = $STR_LIB_ARTY_TOWING;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\pritsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Attach_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Attach_Trucks;";
			};
			
			class Drop {
				displayName = $STR_LIB_ARTY_DROP;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\otsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Drop_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Drop_Trucks;";
			};
		};		
	};
	
	// ÌÀØÈÍÛ

	class fow_v_gmc;
	class fow_v_gmc_usa : fow_v_gmc {
		
		LIB_Towing_Distance = 1.4;
		LIB_Towing_OffsetX_LIB_61k = 0;
		LIB_Towing_OffsetY_LIB_61k = 0;
		LIB_Towing_OffsetX_LIB_Pak40 = 0;
		LIB_Towing_OffsetY_LIB_Pak40 = 0;
		
		class UserActions {
			class Towing {
				displayName = $STR_LIB_ARTY_TOWING;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\pritsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Attach_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Attach_Trucks;";
			};
			
			class Drop {
				displayName = $STR_LIB_ARTY_DROP;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\otsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Drop_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Drop_Trucks;";
			};
		};		
	};
	class fow_v_type97_truck_ija : Truck_F {

		LIB_Towing_Distance = 1.4;
		LIB_Towing_OffsetX_LIB_61k = 0;
		LIB_Towing_OffsetY_LIB_61k = 0;
		LIB_Towing_OffsetX_LIB_Pak40 = 0;
		LIB_Towing_OffsetY_LIB_Pak40 = 0;
		
		class UserActions {
			class Towing {
				displayName = $STR_LIB_ARTY_TOWING;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\pritsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Attach_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Attach_Trucks;";
			};
			
			class Drop {
				displayName = $STR_LIB_ARTY_DROP;
				displayNameDefault = "<img image='WW2\Assets_t\Vehicles\Misc_t\otsep.paa' size='3' shadow='false' />";
				position = "zamerny";
				radius = 6;
				onlyForplayer = 0;
				condition = "[this] call LIB_System_Artillery_Towing_Condition_Drop_Trucks";
				statement = "[this] spawn LIB_System_Artillery_Towing_Statement_Drop_Trucks;";
			};
		};	
	};
};
