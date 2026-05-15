#pragma once

namespace Projecto5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de dashboardForm
	/// </summary>
	public ref class dashboardForm : public System::Windows::Forms::Form
	{
	public:
		dashboardForm(String^ user)
		{
			InitializeComponent();
			this->lblWelcome->Text = String::Format("Bienvenido, {0}", user);
		}

	protected:
		~dashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblWelcome;
	private: System::ComponentModel::Container ^components;

			#pragma region Windows Form Designer generated code
			void InitializeComponent(void)
			{
				this->lblWelcome = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// lblWelcome
				// 
				this->lblWelcome->AutoSize = true;
				this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblWelcome->Location = System::Drawing::Point(200, 50);
				this->lblWelcome->Name = L"lblWelcome";
				this->lblWelcome->Size = System::Drawing::Size(300, 40);
				this->lblWelcome->TabIndex = 0;
				this->lblWelcome->Text = L"Bienvenido";
				// 
				// dashboardForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(800, 450);
				this->Controls->Add(this->lblWelcome);
				this->Name = L"dashboardForm";
				this->Text = L"Dashboard";
				this->ResumeLayout(false);
				this->PerformLayout();
			}
			#pragma endregion
	};
}
