#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Projecto5 {

	public ref class UsersManager abstract sealed {
	private:
		static Dictionary<String^, String^>^ users = nullptr;
		static void EnsureInit() {
			if (users == nullptr) {
				users = gcnew Dictionary<String^, String^>();
				// usuario por defecto para pruebas
				users->Add("admin", "admin123");
			}
		}
	public:
		static bool Validate(String^ user, String^ pass) {
			EnsureInit();
			String^ stored;
			if (users->TryGetValue(user, stored)) {
				return stored->Equals(pass);
			}
			return false;
		}
		static bool Register(String^ user, String^ pass) {
			EnsureInit();
			if (users->ContainsKey(user)) return false;
			users->Add(user, pass);
			return true;
		}
	};
}
