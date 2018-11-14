#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "QueueA.h"
#include <vector>
#include "Exception.h"

template <typename Type>
class Scheduler
{
private:
	int priorityLevels;
	int tasks;
	std::vector<QueueA<Type>> scheduleArray(priorityLevels);
public:
	Scheduler(int p = 4) :priorityLevels = p, tasks = 0
	{
	}
	void push(int priorityLevel, const Type& value)
	{
		//check range
		scheduleArray.at(priorityLevel).push(value);
	}
	Type top()
	{
		if (empty())
		{
			throw Exception();
		}
		int i = 0;
		for (; scheduleArray.at(i).empty(); ++i)
		{
		}
		return scheduleArray.at(i).pop();
	}
	bool empty()
	{
		bool emptySchedule = true;
		for (int i = 0; emptySchedule = scheduleArray.at(i).empty(); ++i)
		{
		}
		return emptySchedule;
	}
};



#endif // !SCHEDULER_H
