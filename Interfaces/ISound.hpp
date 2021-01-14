#ifndef ISOUND_HPP_
#define ISOUND_HPP_

#include <string>

namespace Sound {

	enum soundStatus_e {
		IDLE,
		PLAYING,
		END,
		BAD_LOAD,
		UNKNOWN_ERROR,
	};

	typedef soundStatus_e (*trackEndCallback)(void);

	class ISound {
	public:
		virtual const soundStatus_e getStatus(void) const = 0;

		virtual inline void setCallback(trackEndCallback *callback) = 0;

		virtual void start(const std::string &path) = 0;
		virtual bool stop(void) = 0;
	};

}

#endif // !ISOUND_HPP_