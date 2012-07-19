#ifndef _PRIVATE_HPP_
#define _PRIVATE_HPP_

#include <pthread.h>
#include <sys/time.h>

#define SHARED_MEMORY_KEY 8374

namespace Private
{
	struct SharedMemory
	{
		pthread_mutex_t mutex;
		
		timeval timestamp;
		unsigned long updates;
		
		bool motorDirty : 1;
		
		unsigned char servoDirty; // lower nibble used
		unsigned short servoPositions[4];
		
		unsigned short rawBatteryVoltage;
	};
}

#endif
