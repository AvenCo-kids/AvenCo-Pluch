
#ifndef ISTORAGE_HPP_
#define ISTORAGE_HPP_

#include <string>

namespace Storage {

	class IStorage {
	public:
		virtual const bool isStoryStored(const std::string &story_id) const = 0;

		virtual const story_t *getStory(const std::string &story_id) const = 0;
		virtual const std::string getSoundPath(const std::string &story_id, const std::string &path) const = 0;
		virtual const std::string getProgress(const std::string &story_id) const = 0;

		virtual const story_t *saveStory(const story_t *story) = 0;
		virtual const bool saveSound(const void *soundZip) = 0;
		virtual const bool saveProgress(const std::string &story_id, const std::string &path) = 0;
		
		virtual const bool deleteStory(const std::string &story_id) = 0;
		virtual const bool deleteSound(const std::string &story_id) = 0;
		virtual const bool deleteProgress(const std::string &story_id) = 0;
	};

}

#endif // !ISTORAGE_HPP_
