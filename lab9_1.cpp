#include <iostream>
#include "integer_priority_queue.hpp"

int main()
{
	IntegerPriorityQueue * pQueue = IntegerPriorityQueueCreate();
	double number;

	while (std::cin)
	{
		std::cin >> number;
		
		if (number != 0.0)
			IntegerPriorityQueueInsert(*pQueue, number);

		if (number == 0.0)
		{
			if (!IntegerPriorityQueueIsEmpty(*pQueue))
				IntegerPriorityQueueDeleteMax(*pQueue);

			if (IntegerPriorityQueueIsEmpty(*pQueue))
				std::cout << "NOTHING IN QUEUE" << std::endl;
			else
				std::cout << "MAX : " << IntegerPriorityQueueMax(*pQueue) << std::endl;
		}
		else
			std::cout << "MAX : " << IntegerPriorityQueueMax(*pQueue) << std::endl;
	}

	IntegerPriorityQueueDestroy(pQueue);
	return 0;
}
