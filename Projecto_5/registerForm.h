#pragma once

#include "UsersManager.h"

namespace Projecto5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class registerForm : public System::Windows::Forms::Form {
	public:
		registerForm(void) {
			InitializeComponent();
		}
	protected:
		~registerForm() {
			if (components) delete components;
		}
	private:
		System::Windows::Forms::Label^ lblUser;
		System::Windows::Forms::TextBox^ txtUser;
		System::Windows::Forms::Label^ lblPass;
		System::Windows::Forms::TextBox^ txtPass;
		System::Windows::Forms::Label^ lblPass2;
		System::Windows::Forms::TextBox^ txtPass2;
		System::Windows::Forms::Button^ btnRegister;
		System::Windows::Forms::Button^ btnClose;
		System::ComponentModel::Container ^components;

		#pragma region Designer
		void InitializeComponent(void) {
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->lblPass2 = (gcnew System::Windows::Forms::Label());
			this->txtPass2 = (gcnew System::Windows::Forms::TextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// lblUser
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(30, 20);
			this->lblUser->Text = L"Usuario:";
			// txtUser
			this->txtUser->Location = System::Drawing::Point(120, 15);
			this->txtUser->Size = System::Drawing::Size(200, 22);
			// lblPass
			this->lblPass->AutoSize = true;
			this->lblPass->Location = System::Drawing::Point(30, 60);
			this->lblPass->Text = L"Contraseña:";
			// txtPass
			this->txtPass->Location = System::Drawing::Point(120, 55);
			this->txtPass->Size = System::Drawing::Size(200, 22);
			this->txtPass->UseSystemPasswordChar = true;
			// lblPass2
			this->lblPass2->AutoSize = true;
			this->lblPass2->Location = System::Drawing::Point(30, 100);
			this->lblPass2->Text = L"Confirmar:";
			// txtPass2
			this->txtPass2->Location = System::Drawing::Point(120, 95);
			this->txtPass2->Size = System::Drawing::Size(200, 22);
			this->txtPass2->UseSystemPasswordChar = true;
			// btnRegister
			this->btnRegister->Location = System::Drawing::Point(40, 140);
			this->btnRegister->Size = System::Drawing::Size(120, 35);
			this->btnRegister->Text = L"Registrar";
			this->btnRegister->Click += gcnew System::EventHandler(this, &registerForm::btnRegister_Click);
			// btnClose
			this->btnClose->Location = System::Drawing::Point(200, 140);
			this->btnClose->Size = System::Drawing::Size(120, 35);
			this->btnClose->Text = L"Cerrar";
			this->btnClose->Click += gcnew System::EventHandler(this, &registerForm::btnClose_Click);
			// registerForm
			this->ClientSize = System::Drawing::Size(360, 200);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->lblPass);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->lblPass2);
			this->Controls->Add(this->txtPass2);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnClose);
			this->Text = L"Registro";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		#pragma endregion

		private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->txtUser->Text->Length == 0 || this->txtPass->Text->Length == 0 || this->txtPass2->Text->Length == 0) {
				MessageBox::Show("Complete todos los campos.", "Datos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			if (this->txtPass->Text != this->txtPass2->Text) {
				MessageBox::Show("Las contraseñas no coinciden.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (!UsersManager::Register(this->txtUser->Text, this->txtPass->Text)) {
				MessageBox::Show("El usuario ya existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			MessageBox::Show("Registro exitoso.", "OK", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}

		private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	};
}
