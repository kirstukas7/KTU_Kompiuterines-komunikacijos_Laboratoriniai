#pragma once

namespace GUI {
	using namespace System;

	public delegate void SimpleHandler();
	public ref class AppData {
	public:
		array<String^>^ d = nullptr;
	};
}
