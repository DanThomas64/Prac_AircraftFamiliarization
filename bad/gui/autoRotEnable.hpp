#define LINESPACING 1

#include "CustomControlClasses.hpp"
//Auto rotation activation menu. 
class autoRotEnable
{
	idd = 996;
	movingEnable = true;
	enableSimulation = true;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.33222223;
			w = safeZoneW * 0.1425;
			h = safeZoneH * 0.12444445;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.25};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class _enableDisable : MenuItem 
		{
			type = 1;
			idc = 11;
			x = safeZoneX + safeZoneW * 0.44875;
			y = safeZoneY + safeZoneH * 0.34111112;
			w = safeZoneW * 0.1325;
			h = safeZoneH * 0.05;
			text = "Enable/Disable";
			onButtonClick = "[1] call bad_fnc_autoRot";
			
		};
		class _soloEnable : MenuItem 
		{
			type = 1;
			idc = 12;
			x = safeZoneX + safeZoneW * 0.44875;
			y = safeZoneY + safeZoneH * 0.40111112;
			w = safeZoneW * 0.1325;
			h = safeZoneH * 0.05;
			text = "Enable/Disable Solo";
			onButtonClick = "[5] call bad_fnc_autoRot";
			
		};
		
	};
	
};