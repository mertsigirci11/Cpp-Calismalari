#pragma once
#include <iostream>
#include "Private_Sinifi.h"
#include "Protected_Sinifi.h"
#include "Public_Sinifi.h"

using namespace std;

class Miras_Alacak_Sinif : public Private_Sinifi, public Public_Sinifi, public Protected_Sinifi
{
	

};

