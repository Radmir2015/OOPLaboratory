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

	static unsigned int toInt(System::String^ str = "") {
		return System::Convert::ToInt16(str);
	}

	static int toUnixTime(System::DateTime date) {
		return (int)(date - System::DateTime(1970, 1, 1)).TotalSeconds;
	}

	static System::DateTime toSystemDate(int unixtime) {
		return System::DateTime(1970, 1, 1, 0, 0, 0, 0).AddSeconds(unixtime);
	}
};
