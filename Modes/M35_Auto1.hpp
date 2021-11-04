#pragma once

#include "Modes.hpp"

class M35_Auto1:public Mode_Base 
{
	private:
		
	public:
		M35_Auto1();
		virtual ModeResult main_func( void* param1, uint32_t param2 );
};
bool Get_Guided_Mode_Enabled(void);
bool Get_POS_Control_Enabled(void);
void Set_POS_Control_Enabled(bool value);