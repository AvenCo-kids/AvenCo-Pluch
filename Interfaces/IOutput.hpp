#ifndef IOutput_HPP_
#define IOutput_HPP_

namespace Output {

	class IOutput {
	public:
		virtual bool doOutput(void *data) = 0;
		virtual bool isDone(void) = 0;
	};

}

#endif // !IOutput_HPP_
