#pragma once
#include "Main.h"
#include "SplashScreen.h"
#include <Windows.h>

namespace Planner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Start::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(18, 18);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(450, 462);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создать новый проект\n\n";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Start::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(477, 23);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(450, 462);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Открыть существующий\n\n";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Start::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(936, 23);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(450, 462);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Открыть последний\n\n";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Start::button3_Click);
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1400, 503);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"Start";
			this->Text = L"Pro Planner";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Button^ okButton;
		String^ currentProjectName;
		System::Drawing::Size currentProjectSize;
	private: System::Void Start_Load(System::Object^ sender, System::EventArgs^ e) {
		SplashScreen^ ss = gcnew SplashScreen();
		this->Hide();
		ss->ShowDialog();
		this->Show();
	}
	private: System::Void textBoxCheckDigitInput(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		System::Windows::Forms::TextBox^ tb = static_cast<System::Windows::Forms::TextBox^>(sender);
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			tb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			::MessageBeep(MB_ICONERROR);
			e->Handled = true;
		}
		else tb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	}
	private: System::Void enterPressed(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->Handled = true;
			okButton->PerformClick();
		}
	}
	private: System::Void showCreateProjectDialog() {
		Form^ createProjectDialog = gcnew Form();
		createProjectDialog->Text = L"Создание проекта";
		createProjectDialog->Icon = gcnew System::Drawing::Icon("img/icon.ico");
		createProjectDialog->ClientSize = System::Drawing::Size(680, 123);
		createProjectDialog->MaximizeBox = false;
		createProjectDialog->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
		createProjectDialog->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Start::enterPressed);

		Label^ label1 = gcnew Label();
		label1->Location = System::Drawing::Point(13, 13);
		label1->Size = System::Drawing::Size(149, 20);
		label1->Text = L"Название проекта";

		TextBox^ textBox1 = gcnew TextBox();
		textBox1->Location = System::Drawing::Point(330, 13);
		textBox1->Size = System::Drawing::Size(338, 26);
		textBox1->Text = L"Untitled";

		Label^ label2 = gcnew Label();
		label2->Location = System::Drawing::Point(13, 46);
		label2->Size = System::Drawing::Size(200, 20);
		label2->Text = L"Размер участка (в метрах)";

		TextBox^ textBox2 = gcnew TextBox();
		textBox2->Location = System::Drawing::Point(330, 46);
		textBox2->Size = System::Drawing::Size(139, 26);
		textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Start::textBoxCheckDigitInput);

		Label^ label3 = gcnew Label();
		label3->Location = System::Drawing::Point(489, 52);
		label3->Size = System::Drawing::Size(20, 20);
		label3->Text = L"X";

		TextBox^ textBox3 = gcnew TextBox();
		textBox3->Location = System::Drawing::Point(529, 46);
		textBox3->Size = System::Drawing::Size(139, 26);
		textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Start::textBoxCheckDigitInput);

		okButton = gcnew Button();
		okButton->Text = "OK";
		okButton->DialogResult = System::Windows::Forms::DialogResult::OK;
		okButton->Location = System::Drawing::Point(581, 79);
		createProjectDialog->AcceptButton = okButton;

		createProjectDialog->Controls->Add(label1);
		createProjectDialog->Controls->Add(label2);
		createProjectDialog->Controls->Add(label3);
		createProjectDialog->Controls->Add(textBox1);
		createProjectDialog->Controls->Add(textBox2);
		createProjectDialog->Controls->Add(textBox3);
		createProjectDialog->Controls->Add(okButton);

		System::Windows::Forms::DialogResult result = createProjectDialog->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			if (textBox1->Text == "") {
				MessageBox::Show("Все поля обязательны для заполнения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				showCreateProjectDialog();
				return;
			}
			currentProjectName = textBox1->Text;
			if (textBox2->Text == "" || textBox3->Text == "") {
				MessageBox::Show("Все поля обязательны для заполнения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				showCreateProjectDialog();
				return;
			}
			currentProjectSize = System::Drawing::Size(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
			Main^ window = gcnew Main(currentProjectName, currentProjectSize, "new");
			this->Hide();
			window->ShowDialog();
			this->Show();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		showCreateProjectDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Файлы проекта (*.pplr)|*.pplr|Все файлы (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;
		System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			Main^ window = gcnew Main(openFileDialog1->FileName, "open");
			this->Hide();
			window->ShowDialog();
			this->Show();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		FileStream^ fileStream = gcnew FileStream("lastProject", FileMode::Open);
		StreamReader^ streamReader = gcnew StreamReader(fileStream);
		String^ fileName = streamReader->ReadLine();
		streamReader->Close();
		fileStream->Close();
		Main^ window = gcnew Main(fileName, "open");
		this->Hide();
		window->ShowDialog();
		this->Show();
	}
	};
}
