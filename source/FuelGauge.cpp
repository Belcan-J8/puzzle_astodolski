#include "FuelGauge.h"
#include "termcolor-c.h"

FuelGauge::FuelGauge()
	: fuelLevel(5)
	, logger(new Logger())
{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		text_red(stdout);
		logger->Log("Low fuel!");
		reset_colors(stdout);
	}
}
