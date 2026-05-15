#pragma once

#include "dashboardForm.h"
#include "UsersManager.h"
#include "registerForm.h"

namespace Projecto5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuForm
	/// </summary>
	public ref class menuForm : public System::Windows::Forms::Form
	{
	public:
		menuForm(void)
		{
			InitializeComponent();
			// mostrar opciones iniciales
			ShowOptions();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~menuForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnOptionRegister;
	private: System::Windows::Forms::Button^ btnOptionLogin;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOptionRegister = (gcnew System::Windows::Forms::Button());
			this->btnOptionLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(626, 183);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(540, 48);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Bienvenido - Seleccione una opción";
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(669, 426);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(57, 16);
			this->lblUser->TabIndex = 3;
			this->lblUser->Text = L"Usuario:";
			this->lblUser->Visible = false;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(732, 420);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(300, 22);
			this->txtUser->TabIndex = 4;
			this->txtUser->Visible = false;
			// 
			// lblPass
			// 
			this->lblPass->AutoSize = true;
			this->lblPass->Location = System::Drawing::Point(647, 497);
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(79, 16);
			this->lblPass->TabIndex = 5;
			this->lblPass->Text = L"Contraseña:";
			this->lblPass->Visible = false;
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(732, 494);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(300, 22);
			this->txtPass->TabIndex = 6;
			this->txtPass->UseSystemPasswordChar = true;
			this->txtPass->Visible = false;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(672, 588);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(120, 40);
			this->btnLogin->TabIndex = 7;
			this->btnLogin->Text = L"Entrar";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Visible = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &menuForm::btnLogin_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(965, 588);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(120, 40);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"Volver";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Visible = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &menuForm::btnCancel_Click);
			// 
			// btnOptionRegister
			// 
			this->btnOptionRegister->Location = System::Drawing::Point(634, 270);
			this->btnOptionRegister->Name = L"btnOptionRegister";
			this->btnOptionRegister->Size = System::Drawing::Size(200, 60);
			this->btnOptionRegister->TabIndex = 1;
			this->btnOptionRegister->Text = L"Registrarse";
			this->btnOptionRegister->UseVisualStyleBackColor = true;
			this->btnOptionRegister->Click += gcnew System::EventHandler(this, &menuForm::btnOptionRegister_Click);
			// 
			// btnOptionLogin
			// 
			this->btnOptionLogin->Location = System::Drawing::Point(926, 265);
			this->btnOptionLogin->Name = L"btnOptionLogin";
			this->btnOptionLogin->Size = System::Drawing::Size(200, 60);
			this->btnOptionLogin->TabIndex = 2;
			this->btnOptionLogin->Text = L"Iniciar sesión";
			this->btnOptionLogin->UseVisualStyleBackColor = true;
			this->btnOptionLogin->Click += gcnew System::EventHandler(this, &menuForm::btnOptionLogin_Click);
			// 
			// menuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1705, 883);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->lblPass);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->btnOptionLogin);
			this->Controls->Add(this->btnOptionRegister);
			this->Controls->Add(this->lblTitle);
			this->Name = L"menuForm";
			this->Text = L"Menu - Inicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void ShowOptions() {
		this->lblTitle->Text = L"Bienvenido - Seleccione una opción";
		this->btnOptionLogin->Visible = true;
		this->btnOptionRegister->Visible = true;
		this->lblUser->Visible = false;
		this->txtUser->Visible = false;
		this->lblPass->Visible = false;
		this->txtPass->Visible = false;
		this->btnLogin->Visible = false;
		this->btnCancel->Visible = false;
	}

	private: System::Void btnOptionLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblTitle->Text = L"Iniciar sesión";
		this->btnOptionLogin->Visible = false;
		this->btnOptionRegister->Visible = false;
		this->lblUser->Visible = true;
		this->txtUser->Visible = true;
		this->lblPass->Visible = true;
		this->txtPass->Visible = true;
		this->btnLogin->Visible = true;
		this->btnCancel->Visible = true;
	}

	private: System::Void btnOptionRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		registerForm^ reg = gcnew registerForm();
		// mostrar modal para registrar
		reg->ShowDialog();
	}

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->txtUser->Text->Length == 0 || this->txtPass->Text->Length == 0) {
			MessageBox::Show("Por favor ingrese usuario y contraseña.", "Datos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (!UsersManager::Validate(this->txtUser->Text, this->txtPass->Text)) {
			MessageBox::Show("Usuario o contraseña incorrectos.", "Error de autenticación", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		dashboardForm^ dash = gcnew dashboardForm(this->txtUser->Text);
		dash->Show();
		this->Hide();
	}

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		// volver a opciones
		this->txtUser->Text = "";
		this->txtPass->Text = "";
		ShowOptions();
	}
	};
}
