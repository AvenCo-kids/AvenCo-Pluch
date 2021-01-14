#ifndef IINPUT_HPP_
#define IINPUT_HPP_

namespace Input {

	class IInput {
	public:
		virtual bool isTrigger() const = 0;
	};

}

#endif // !IINPUT_HPP_