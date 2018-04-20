#pragma once
#include <string>

namespace Global {
	static std::string toString(System::String^ str = "") {
		using namespace System;
		using namespace Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToCoTaskMemAnsi(str)).ToPointer();
		return std::string(ptr);
	}

	static System::String^ toFormString(std::string str = "") {
		using namespace System;
		return gcnew String(str.c_str());
	}
};
