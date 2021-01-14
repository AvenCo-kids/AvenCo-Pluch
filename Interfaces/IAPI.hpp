
#ifndef IAPI_HPP_
#define IAPI_HPP_

namespace API {

	typedef void(*startStoryCallback)(const std::string &story_id);
	typedef void(*stopStoryCallback)(void);

	class IAPI {
	public:
		virtual const story_t *getStory(const std::string &story_id) = 0;
		virtual const void *getSound(const std::string &story_id) = 0;

		virtual inline void setOnStartStory(startStoryCallback *callback) = 0;
		virtual inline void setOnStopStory(stopStoryCallback *callback) = 0;
	};

}

#endif // !IAPI_HPP_
