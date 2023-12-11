#include <queue>					// queue library
using namespace std;				//		???
enum class WeatherDataType			// enum
{
	Temperature, Wind
};
struct TempData
{
	int StationId;
	time_t time;			// time_t
	double current;
	double max;
	double min;
};
struct WindData
{
	int StationId;
	time_t time;
	int speed;
	short direction;
};
struct Input
{
	WeatherDataType type;
	union			// union inside struct technique
	{
		TempData temp;
		WindData wind;
	};
};
// Functions that are specific to data types
void Process_Temp(TempData t) {}
void Process_Wind(WindData w) {}
void Initialize(std::queue<Input>& inputs)		// std:: stuff			Input
{
	Input first;
	first.type = WeatherDataType::Temperature;
	first.temp = { 101,14188556644,91.8,108.5,67.2 };
	inputs.push(first);

	Input second;
	second.type = WeatherDataType::Wind;
	first.wind = { 204,1418859354,14,27 };
	inputs.push(second);
}
int main(int argc, char* argv[])
{
	// container for all the data records
	queue<Input> inputs;			// queue
	Initialize(inputs);
	while (!inputs.empty())				// what ! mean			what empty mean
	{
		Input const i = inputs.front();
		switch (i.type)
		{
		case WeatherDataType::Temperature:
			Process_Temp(i.temp);
			break;
		case WeatherDataType::Wind:
			Process_Wind(i.wind);
			break;
		defautl:
			break;
		}
		inputs.pop();
	}
	return 0;
}