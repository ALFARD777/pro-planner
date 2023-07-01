#pragma once
#include <windows.h>
#include <math.h>
#include <regex>
#include <stack>
#include <cliext/list>
#pragma warning(disable: 4244)
#using <system.windows.forms.dll>
#using <system.drawing.dll>
#using <Microsoft.VisualBasic.dll>
#using <System.dll>
#define sdSize System::Drawing::Size

namespace Planner {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Text::RegularExpressions;
	using namespace System::Drawing::Imaging;
	using namespace cliext;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form {
	public:
		Main(String^ currentProjectName, System::Drawing::Size currentProjectSize, String^ type) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->currentProjectName = currentProjectName;
			this->currentProjectSize = currentProjectSize;
			this->type = type;
		}
		Main(String^ fileName, String^ type) {
			InitializeComponent();
			this->fileName = fileName;
			this->type = type;
		}
		Main() {
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Main() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ библиотекаToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ открытьБиблиотекуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ новыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ экспортToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьПоложениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ клонироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьОриентациюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьПолеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьПоследнийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ списокОбъектовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ToolStripMenuItem^ выбратьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;

	private: System::Windows::Forms::Button^ button8;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экспортToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->библиотекаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьБиблиотекуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьПолеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьПоследнийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->списокОбъектовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->выбратьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьПоложениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьОриентациюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->клонироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->библиотекаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1446, 33);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->новыйToolStripMenuItem,
					this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem, this->экспортToolStripMenuItem, this->настройкиToolStripMenuItem,
					this->закрытьToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// новыйToolStripMenuItem
			// 
			this->новыйToolStripMenuItem->Name = L"новыйToolStripMenuItem";
			this->новыйToolStripMenuItem->Size = System::Drawing::Size(352, 34);
			this->новыйToolStripMenuItem->Text = L"Новый";
			this->новыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::новыйToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(352, 34);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + S";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(352, 34);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::сохранитьToolStripMenuItem_Click);
			// 
			// экспортToolStripMenuItem
			// 
			this->экспортToolStripMenuItem->Name = L"экспортToolStripMenuItem";
			this->экспортToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + Alt + S";
			this->экспортToolStripMenuItem->Size = System::Drawing::Size(352, 34);
			this->экспортToolStripMenuItem->Text = L"Экспорт в .png";
			this->экспортToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::экспортToolStripMenuItem_Click);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(352, 34);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::настройкиToolStripMenuItem_Click);
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->ShortcutKeyDisplayString = L"Alt + F4";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(352, 34);
			this->закрытьToolStripMenuItem->Text = L"Закрыть";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::закрытьToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->ShortcutKeyDisplayString = L"F1";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(352, 34);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::справкаToolStripMenuItem_Click);
			// 
			// библиотекаToolStripMenuItem
			// 
			this->библиотекаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->открытьБиблиотекуToolStripMenuItem,
					this->очиститьПолеToolStripMenuItem, this->удалитьПоследнийToolStripMenuItem, this->списокОбъектовToolStripMenuItem
			});
			this->библиотекаToolStripMenuItem->Name = L"библиотекаToolStripMenuItem";
			this->библиотекаToolStripMenuItem->Size = System::Drawing::Size(149, 29);
			this->библиотекаToolStripMenuItem->Text = L"Редактировать";
			// 
			// открытьБиблиотекуToolStripMenuItem
			// 
			this->открытьБиблиотекуToolStripMenuItem->Name = L"открытьБиблиотекуToolStripMenuItem";
			this->открытьБиблиотекуToolStripMenuItem->Size = System::Drawing::Size(283, 34);
			this->открытьБиблиотекуToolStripMenuItem->Text = L"Открыть библиотеку";
			this->открытьБиблиотекуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::открытьБиблиотекуToolStripMenuItem_Click);
			// 
			// очиститьПолеToolStripMenuItem
			// 
			this->очиститьПолеToolStripMenuItem->Name = L"очиститьПолеToolStripMenuItem";
			this->очиститьПолеToolStripMenuItem->Size = System::Drawing::Size(283, 34);
			this->очиститьПолеToolStripMenuItem->Text = L"Очистить поле";
			this->очиститьПолеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::очиститьПолеToolStripMenuItem_Click);
			// 
			// удалитьПоследнийToolStripMenuItem
			// 
			this->удалитьПоследнийToolStripMenuItem->Name = L"удалитьПоследнийToolStripMenuItem";
			this->удалитьПоследнийToolStripMenuItem->Size = System::Drawing::Size(283, 34);
			this->удалитьПоследнийToolStripMenuItem->Text = L"Удалить последний";
			this->удалитьПоследнийToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::удалитьПоследнийToolStripMenuItem_Click);
			// 
			// списокОбъектовToolStripMenuItem
			// 
			this->списокОбъектовToolStripMenuItem->Name = L"списокОбъектовToolStripMenuItem";
			this->списокОбъектовToolStripMenuItem->Size = System::Drawing::Size(283, 34);
			this->списокОбъектовToolStripMenuItem->Text = L"Список объектов";
			this->списокОбъектовToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::списокОбъектовToolStripMenuItem_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(1222, 597);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(212, 364);
			this->listBox1->TabIndex = 2;
			this->listBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::listBox1_MouseDoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1222, 554);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 37);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Выбор объекта";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(16, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1200, 923);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->выбратьToolStripMenuItem,
					this->редактироватьToolStripMenuItem, this->редактироватьПоложениеToolStripMenuItem, this->изменитьОриентациюToolStripMenuItem,
					this->удалитьToolStripMenuItem, this->клонироватьToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(303, 196);
			// 
			// выбратьToolStripMenuItem
			// 
			this->выбратьToolStripMenuItem->Name = L"выбратьToolStripMenuItem";
			this->выбратьToolStripMenuItem->Size = System::Drawing::Size(302, 32);
			this->выбратьToolStripMenuItem->Text = L"Выделить";
			this->выбратьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::выбратьToolStripMenuItem_Click);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(302, 32);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать размер";
			this->редактироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::редактироватьРазмерToolStripMenuItem_Click);
			// 
			// редактироватьПоложениеToolStripMenuItem
			// 
			this->редактироватьПоложениеToolStripMenuItem->Name = L"редактироватьПоложениеToolStripMenuItem";
			this->редактироватьПоложениеToolStripMenuItem->Size = System::Drawing::Size(302, 32);
			this->редактироватьПоложениеToolStripMenuItem->Text = L"Редактировать положение";
			this->редактироватьПоложениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::редактироватьПоложениеToolStripMenuItem_Click);
			// 
			// изменитьОриентациюToolStripMenuItem
			// 
			this->изменитьОриентациюToolStripMenuItem->Name = L"изменитьОриентациюToolStripMenuItem";
			this->изменитьОриентациюToolStripMenuItem->Size = System::Drawing::Size(302, 32);
			this->изменитьОриентациюToolStripMenuItem->Text = L"Изменить ориентацию";
			this->изменитьОриентациюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::изменитьОриентациюToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(302, 32);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::удалитьToolStripMenuItem_Click);
			// 
			// клонироватьToolStripMenuItem
			// 
			this->клонироватьToolStripMenuItem->Name = L"клонироватьToolStripMenuItem";
			this->клонироватьToolStripMenuItem->Size = System::Drawing::Size(302, 32);
			this->клонироватьToolStripMenuItem->Text = L"Клонировать";
			this->клонироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::клонироватьToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1224, 42);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 35);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Показать участки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1224, 86);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 35);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Добавить участок";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"C:\\Users\\alfar\\OneDrive\\Документы\\KBP\\OAIP\\_Planner\\_Planner\\help.chm";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1224, 257);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 58);
			this->button4->TabIndex = 7;
			this->button4->Text = L"↓";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1224, 194);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 54);
			this->button5->TabIndex = 8;
			this->button5->Text = L"←";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1335, 194);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 54);
			this->button6->TabIndex = 9;
			this->button6->Text = L"→";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1224, 131);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(213, 54);
			this->button7->TabIndex = 10;
			this->button7->Text = L"↑";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1224, 325);
			this->button8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(213, 35);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Снять выделение";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1446, 983);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->helpProvider1->SetHelpKeyword(this, L"F1");
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->helpProvider1->SetShowHelp(this, true);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pro planner";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_FormClosing);
			this->Shown += gcnew System::EventHandler(this, &Main::Main_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::Main_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int tmp;
		bool movedLib = false, isOpened = false, magnet = true, zoneVisibility = false, isSaved = false, exportVisibleSetting = false;
		double currentProjectScaleWidth, currentProjectScaleHeight;
		sdSize currentProjectSize;
		Button^ okButton;
		String^ currentProjectName, ^ type, ^ fileName;
		PictureBox^ movingPictureBox, ^ objectToEdit, ^ selectedPictureBox;
		Point lastCursorPos, oldLocation;
		ListBox^ libraryListBox1, ^ libraryListBox2, ^ objectListBox;
		List<PictureBox^>^ objects, ^ zones;
		List<Label^>^ zoneNames;
		String^ currentFilePath, ^ stmp;
		Form^ libraryDialog, ^ settingsDialog;
	private: System::Boolean checkDigitInput(String^ s) {
		for (int i = 0; i < s->Length; i++) if (s[i] < '0' || s[i] > '9') return false;
		return true;
	}
	private: System::Void textBoxCheckDigitInput(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		System::Windows::Forms::TextBox^ tb = static_cast<System::Windows::Forms::TextBox^>(sender);
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			tb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			MessageBeep(MB_ICONERROR);
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
	private: System::Boolean IsShiftPressed() {
		return Control::ModifierKeys == Keys::Shift;
	}
	private: System::Void notOpenedProjectMessage() {
		MessageBox::Show("Для начала создайте новый или откройте сохранённый проект!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void notDigitError() {
		MessageBox::Show("Значение должно быть целочисленным!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void notCorrectSize() {
		MessageBox::Show("Введенное значение больше размера участка", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void showCreateProjectDialog() {
		Form^ createProjectDialog = gcnew Form();
		createProjectDialog->Text = L"Создание проекта";
		createProjectDialog->ClientSize = sdSize(680, 123);
		createProjectDialog->Icon = gcnew System::Drawing::Icon("img/icon.ico");
		createProjectDialog->MaximizeBox = false;
		createProjectDialog->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
		createProjectDialog->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::enterPressed);

		Label^ label1 = gcnew Label();
		label1->Location = System::Drawing::Point(13, 13);
		label1->Size = sdSize(149, 20);
		label1->Text = L"Название проекта";

		TextBox^ textBox1 = gcnew TextBox();
		textBox1->Location = System::Drawing::Point(330, 13);
		textBox1->Size = sdSize(338, 26);
		textBox1->Text = L"Untitled";

		Label^ label2 = gcnew Label();
		label2->Location = System::Drawing::Point(13, 46);
		label2->Size = sdSize(128, 20);
		label2->Text = L"Размер участка (в метрах)";

		TextBox^ textBox2 = gcnew TextBox();
		textBox2->Location = System::Drawing::Point(330, 46);
		textBox2->Size = sdSize(139, 26);
		textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::textBoxCheckDigitInput);

		Label^ label3 = gcnew Label();
		label3->Location = System::Drawing::Point(489, 52);
		label3->Size = sdSize(20, 20);
		label3->Text = L"X";

		TextBox^ textBox3 = gcnew TextBox();
		textBox3->Location = System::Drawing::Point(529, 46);
		textBox3->Size = sdSize(139, 26);
		textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::textBoxCheckDigitInput);

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

		if (createProjectDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			currentProjectName = textBox1->Text;
			currentProjectSize = sdSize(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
			currentProjectScaleWidth = 800 / Convert::ToDouble(textBox2->Text);
			currentProjectScaleHeight = 600 / Convert::ToDouble(textBox3->Text);
		}
	}
	private: System::Void showLocationDialog(System::Windows::Forms::PictureBox^ pb) {
		Form^ locationDialog = gcnew Form();
		locationDialog->Text = "Изменение положения";
		locationDialog->Icon = gcnew System::Drawing::Icon("img/icon.ico");
		locationDialog->ClientSize = sdSize(370, 94);
		locationDialog->MaximizeBox = false;
		locationDialog->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
		locationDialog->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::enterPressed);

		TextBox^ textBox1 = gcnew TextBox;
		textBox1->Location = System::Drawing::Point(60, 10);
		textBox1->Size = sdSize(100, 20);
		textBox1->Text = Convert::ToString((pb->Location.X / currentProjectScaleWidth) - 10);

		Label^ x = gcnew Label;
		x->AutoSize = true;
		x->Location = System::Drawing::Point(167, 18);
		x->Size = sdSize(15, 20);
		x->Text = L"X";

		TextBox^ textBox2 = gcnew TextBox;
		textBox2->Location = System::Drawing::Point(190, 10);
		textBox2->Size = sdSize(100, 20);
		textBox2->Text = Convert::ToString((pb->Location.Y / currentProjectScaleHeight) - 16);

		okButton = gcnew Button();
		okButton->Text = "OK";
		okButton->DialogResult = System::Windows::Forms::DialogResult::OK;
		okButton->Location = System::Drawing::Point(283, 50);

		locationDialog->AcceptButton = okButton;

		locationDialog->Controls->Add(textBox1);
		locationDialog->Controls->Add(x);
		locationDialog->Controls->Add(textBox2);
		locationDialog->Controls->Add(okButton);

		if (locationDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pb->Location = System::Drawing::Point((Convert::ToInt32(textBox1->Text) * currentProjectScaleWidth) + 10, (Convert::ToInt32(textBox2->Text) * currentProjectScaleHeight) + 16);
			isSaved = false;
		}
	}
	private: System::Void showLibraryDialog() {
		libraryDialog = gcnew Form();
		libraryDialog->Text = "Библиотека объектов";
		libraryDialog->Icon = gcnew System::Drawing::Icon("img/icon.ico");
		libraryDialog->ClientSize = sdSize(800, 421);
		libraryDialog->MaximizeBox = false;
		libraryDialog->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
		libraryDialog->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::enterPressed);

		libraryListBox1 = gcnew ListBox;
		libraryListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
			L"Забор", L"Дерево", L"Грядка", L"Клумба", L"Тропинка", L"Дорожка"
		});
		libraryListBox1->Location = System::Drawing::Point(8, 8);
		libraryListBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		libraryListBox1->Size = sdSize(367, 381);
		libraryListBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::libraryListBox1_MouseDoubleClick);

		libraryListBox2 = gcnew ListBox;
		libraryListBox2->Location = System::Drawing::Point(427, 8);
		libraryListBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		libraryListBox2->Size = sdSize(367, 381);
		libraryListBox2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::libraryListBox2_MouseDoubleClick);

		Button^ moveButton = gcnew Button;
		moveButton->Location = System::Drawing::Point(377, 195);
		moveButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		moveButton->Size = sdSize(45, 23);
		moveButton->Text = L"<>";
		moveButton->Click += gcnew System::EventHandler(this, &Main::moveButton_Click);

		okButton = gcnew Button();
		okButton->Location = System::Drawing::Point(643, 391);
		okButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		okButton->Size = sdSize(73, 21);
		okButton->Text = L"OK";
		okButton->DialogResult = System::Windows::Forms::DialogResult::OK;
		libraryDialog->AcceptButton = okButton;

		Button^ cancelButton = gcnew Button;
		cancelButton->Location = System::Drawing::Point(719, 391);
		cancelButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		cancelButton->Size = sdSize(73, 21);
		cancelButton->Text = L"Отмена";
		cancelButton->Click += gcnew System::EventHandler(this, &Main::cancelButton_Click);

		libraryDialog->Controls->Add(cancelButton);
		libraryDialog->Controls->Add(moveButton);
		libraryDialog->Controls->Add(okButton);
		libraryDialog->Controls->Add(libraryListBox2);
		libraryDialog->Controls->Add(libraryListBox1);

		if (libraryDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				if (libraryListBox2->Items->Count == 0) throw 1;
				for (int i = 0; i < libraryListBox2->Items->Count; i++) listBox1->Items->Add(libraryListBox2->Items[i]->ToString());
				movedLib = true;
				showControls();
			}
			catch (...) { MessageBox::Show("Вы не перенесли ни одного элемента!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error); }
		}
	}
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		libraryDialog->Close();
	}
	private: System::Void moveItems(bool isAllItems, System::Windows::Forms::ListBox^ fromListBox, System::Windows::Forms::ListBox^ toListBox) {
		if (isAllItems) {
			for (int i = 0; i < fromListBox->Items->Count; i++) toListBox->Items->Add(fromListBox->Items[i]);
			fromListBox->Items->Clear();
		}
		else {
			toListBox->Items->Add(fromListBox->SelectedItem->ToString());
			fromListBox->Items->RemoveAt(fromListBox->SelectedIndex);
			if (fromListBox->Items->Count != 0) fromListBox->SetSelected(0, true);
		}
	}
	private: System::Void moveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (IsShiftPressed()) {
			if (libraryListBox1->Items->Count == 0) {
				moveItems(true, libraryListBox2, libraryListBox1);
			}
			else {
				moveItems(true, libraryListBox1, libraryListBox2);
			}
		}
		else {
			if (libraryListBox1->SelectedItem != nullptr) {
				moveItems(false, libraryListBox1, libraryListBox2);
			}
			else if (libraryListBox2->SelectedItem != nullptr) {
				moveItems(false, libraryListBox2, libraryListBox1);
			}
			else MessageBox::Show("Вы не выбрали ни одного элемента!");
		}
	}
	private: System::Void libraryListBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int index = libraryListBox1->IndexFromPoint(e->Location);
		if (index != System::Windows::Forms::ListBox::NoMatches) {
			if (IsShiftPressed()) {
				moveItems(true, libraryListBox1, libraryListBox2);
			}
			else {
				moveItems(false, libraryListBox1, libraryListBox2);
			}
		}
	}
	private: System::Void libraryListBox2_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int index = libraryListBox2->IndexFromPoint(e->Location);
		if (index != System::Windows::Forms::ListBox::NoMatches) {
			if (IsShiftPressed()) {
				moveItems(true, libraryListBox2, libraryListBox1);
			}
			else {
				moveItems(false, libraryListBox2, libraryListBox1);
			}
		}
	}
	private: System::Void showSettingsDialog() {
		settingsDialog = gcnew Form();
		settingsDialog->ClientSize = sdSize(550, 513);
		settingsDialog->MaximizeBox = false;
		settingsDialog->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
		settingsDialog->Icon = gcnew System::Drawing::Icon("img/icon.ico");
		settingsDialog->MaximizeBox = false;
		settingsDialog->Text = "Настройки";
		settingsDialog->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
		settingsDialog->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::enterPressed);

		okButton = gcnew Button();
		okButton->Location = System::Drawing::Point(463, 478);
		okButton->Size = sdSize(75, 23);
		okButton->Text = "OK";
		okButton->DialogResult = System::Windows::Forms::DialogResult::OK;
		settingsDialog->AcceptButton = okButton;

		Button^ cancelButton = gcnew Button();
		cancelButton->Location = System::Drawing::Point(382, 478);
		cancelButton->Size = sdSize(75, 23);
		cancelButton->Text = L"Отмена";
		cancelButton->Click += gcnew System::EventHandler(this, &Main::settingsClose);

		CheckBox^ checkBox1 = gcnew CheckBox();
		checkBox1->AutoSize = true;
		if (pictureBox1->Visible) {
			checkBox1->Checked = true;
			checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
		}
		checkBox1->Location = System::Drawing::Point(12, 12);
		checkBox1->Size = sdSize(127, 17);
		checkBox1->Text = L"Отображение сетки";
		checkBox1->UseVisualStyleBackColor = true;

		CheckBox^ checkBox2 = gcnew CheckBox();
		checkBox2->AutoSize = true;
		if (magnet) {
			checkBox2->Checked = true;
			checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
		}
		checkBox2->Location = System::Drawing::Point(12, 35);
		checkBox2->Size = sdSize(174, 17);
		checkBox2->Text = L"Привязка объектов по сетке";
		checkBox2->UseVisualStyleBackColor = true;

		CheckBox^ checkBox3 = gcnew CheckBox();
		checkBox3->AutoSize = true;
		if (exportVisibleSetting) {
			checkBox3->Checked = true;
			checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
		}
		checkBox3->Location = System::Drawing::Point(12, 58);
		checkBox3->Size = sdSize(174, 17);
		checkBox3->Text = L"Экспорт невидимых объектов";
		checkBox3->UseVisualStyleBackColor = true;

		settingsDialog->Controls->Add(okButton);
		settingsDialog->Controls->Add(cancelButton);
		settingsDialog->Controls->Add(checkBox1);
		settingsDialog->Controls->Add(checkBox2);
		settingsDialog->Controls->Add(checkBox3);

		if (settingsDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if (!checkBox1->Checked) pictureBox1->Hide();
			else pictureBox1->Show();
			if (checkBox2->Checked) magnet = true;
			else magnet = false;
			if (checkBox3->Checked) exportVisibleSetting = true;
			else exportVisibleSetting = false;
		}
	}
	private: System::Void settingsClose(System::Object^ sender, System::EventArgs^ e) {
		settingsDialog->Close();
	}
	private: System::Void showObjectListDialog() {
		Form^ objectListDialog = gcnew Form();
		objectListDialog->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		objectListDialog->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		objectListDialog->ClientSize = sdSize(326, 488);
		objectListDialog->Text = L"Список объектов";
		objectListDialog->Icon = gcnew System::Drawing::Icon("img/icon.ico");

		objectListBox = gcnew ListBox();
		objectListBox->Location = System::Drawing::Point(12, 12);
		objectListBox->Size = sdSize(302, 433);
		objectListBox->Items->AddRange(gcnew cli::array<System::Object^>(0));
		for (int i = 0, fence = 1, tree = 1, farmland = 1, flowerbed = 1, pathway = 1, path = 1; i < objects->Count; i++) {
			String^ res;
			if (objects[i]->Name == "Fence") {
				res = "Забор #" + fence;
				fence++;
			}
			else if (objects[i]->Name == "Tree") {
				res = "Дерево #" + tree;
				tree++;
			}
			else if (objects[i]->Name == "Farmland") {
				res = "Грядка #" + farmland;
				farmland++;
			}
			else if (objects[i]->Name == "Flowerbed") {
				res = "Клумба #" + flowerbed;
				flowerbed++;
			}
			else if (objects[i]->Name == "Pathway") {
				res = "Дорожка #" + pathway;
				pathway++;
			}
			else if (objects[i]->Name == "Path") {
				res = "Тропинка #" + path;
				path++;
			}
			objectListBox->Items->Add(res);
		}

		Button^ button1 = gcnew Button();
		button1->Location = System::Drawing::Point(239, 453);
		button1->Size = sdSize(75, 23);
		button1->Text = L"Закрыть";
		button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		button1->UseVisualStyleBackColor = true;

		Button^ button2 = gcnew Button();
		button2->Location = System::Drawing::Point(141, 453);
		button2->Size = sdSize(92, 23);
		button2->Text = L"Редактировать";
		button2->UseVisualStyleBackColor = true;
		button2->Click += gcnew System::EventHandler(this, &Main::showEditMenu);

		objectListDialog->AcceptButton = button1;
		objectListDialog->Controls->Add(objectListBox);
		objectListDialog->Controls->Add(button1);
		objectListDialog->Controls->Add(button2);
		objectListDialog->ShowDialog();
	}
	private: System::Void showEditMenu(System::Object^ sender, System::EventArgs^ e) {
		if (objectListBox->SelectedItem == nullptr) {
			MessageBox::Show("Для начала, выберите элемент для редактирования!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else {
			objectToEdit = objects[objectListBox->SelectedIndex];
		}
		Form^ editMenu = gcnew Form();
		editMenu->Icon = gcnew System::Drawing::Icon("img/icon.ico");
		editMenu->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		editMenu->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		editMenu->ClientSize = sdSize(357, 160);

		Button^ button1 = gcnew Button();
		button1->Location = System::Drawing::Point(12, 12);
		button1->Size = sdSize(333, 23);
		button1->Text = L"Редактировать размер";
		button1->Click += gcnew System::EventHandler(this, &Main::editMenuButton1_Click);

		Button^ button2 = gcnew Button();
		button2->Location = System::Drawing::Point(12, 41);
		button2->Size = sdSize(333, 23);
		button2->Text = L"Редактировать положение";
		button1->Click += gcnew System::EventHandler(this, &Main::editMenuButton2_Click);

		Button^ button3 = gcnew Button();
		button3->Location = System::Drawing::Point(12, 70);
		button3->Size = sdSize(333, 23);
		button3->Text = L"Изменить ориентацию";
		button1->Click += gcnew System::EventHandler(this, &Main::editMenuButton3_Click);

		Button^ button4 = gcnew Button();
		button4->Location = System::Drawing::Point(12, 99);
		button4->Size = sdSize(333, 23);
		button4->Text = L"Удалить";
		button1->Click += gcnew System::EventHandler(this, &Main::editMenuButton4_Click);

		Button^ button5 = gcnew Button();
		button5->Location = System::Drawing::Point(12, 128);
		button5->Size = sdSize(333, 23);
		button5->Text = L"Клонировать";
		button1->Click += gcnew System::EventHandler(this, &Main::editMenuButton5_Click);

		editMenu->Controls->Add(button5);
		editMenu->Controls->Add(button4);
		editMenu->Controls->Add(button3);
		editMenu->Controls->Add(button2);
		editMenu->Controls->Add(button1);
		editMenu->ShowDialog();
	}
	private: System::Void editMenuButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		editObjectSize();
	}
	private: System::Void editMenuButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		showLocationDialog(objectToEdit);
	}
	private: System::Void editMenuButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		changeOrientation();
	}
	private: System::Void editMenuButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteObject();
	}
	private: System::Void editMenuButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		cloneObject();
	}
	private: System::Void listBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (listBox1->IndexFromPoint(e->Location) != System::Windows::Forms::ListBox::NoMatches) {
			callObject(listBox1->SelectedItem->ToString());
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!movedLib) {
			MessageBox::Show("Вы не перенесли элементы из библиотеки в проект!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (listBox1->SelectedItem != nullptr) {
			callObject(listBox1->SelectedItem->ToString());
		}
		else {
			MessageBox::Show("Вы не выбрали ни одного объекта!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void callObject(String^ name) {
		if (name == "Забор") {
			int width;
			System::Windows::Forms::DialogResult orientation = MessageBox::Show("Вы желаете использовать горизонтальную ориентацию?", "Ориентация", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			do {
				stmp = Microsoft::VisualBasic::Interaction::InputBox(L"Введите длину забора", L"Длина забора", L"", 200, 200);
				if (stmp == "") return;
				if (!checkDigitInput(stmp)) notDigitError();
				else {
					width = Convert::ToInt32(stmp);
					if ((orientation == System::Windows::Forms::DialogResult::Yes && width > currentProjectSize.Width) ||
						(orientation == System::Windows::Forms::DialogResult::No && width > currentProjectSize.Height)) notCorrectSize();
					else break;
				}
			} while (true);
			drawFence(width, orientation);
		}
		else if (name == "Дерево") {
			int d;
			do {
				stmp = Microsoft::VisualBasic::Interaction::InputBox(L"Введите диаметр ствола дерева", L"Диаметр ствола", L"", 200, 200);
				if (stmp == "") return;
				if (!checkDigitInput(stmp)) notDigitError();
				else {
					d = Convert::ToInt32(stmp);
					if (d > currentProjectSize.Width || d > currentProjectSize.Width) notCorrectSize();
					else break;
				}
			} while (true);
			drawTree(d);
		}
		else if (name == "Грядка") {
			double length;
			System::Windows::Forms::DialogResult orientation = MessageBox::Show("Вы желаете использовать горизонтальную ориентацию?", "Ориентация", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			do {
				stmp = Microsoft::VisualBasic::Interaction::InputBox(L"Введите размер ячейки грядки (###:###)", L"Размер ячейки", L"", 200, 200);
				if (stmp == "") return;
				if (!checkDigitInput(stmp)) notDigitError();
				else {
					length = Convert::ToDouble(stmp);
					if (length > currentProjectSize.Width || length > currentProjectSize.Width) notCorrectSize();
					else break;
				}
			} while (true);
			drawFarmland(length, orientation);
		}
		else if (name == "Клумба") {
			double size;
			do {
				stmp = Microsoft::VisualBasic::Interaction::InputBox(L"Введите диагональ клумбы", L"Размер клумбы", L"", 200, 200);
				if (stmp == "") return;
				if (!checkDigitInput(stmp)) notDigitError();
				else {
					size = Convert::ToDouble(stmp);
					if (size > currentProjectSize.Width || size > currentProjectSize.Width) notCorrectSize();
					else break;
				}
			} while (true);
			drawFlowerbed(size);
		}
		else if (name == "Тропинка") {
			double size;
			do {
				stmp = Microsoft::VisualBasic::Interaction::InputBox(L"Введите размер ячейки тропинки (###::###)", L"Размер ячейки", L"", 200, 200);
				if (stmp == "") return;
				if (!checkDigitInput(stmp)) notDigitError();
				else {
					size = Convert::ToDouble(stmp);
					if (size > currentProjectSize.Width || size > currentProjectSize.Height) notCorrectSize();
					else break;
				}
			} while (true);
			drawPath(size);
		}
		else if (name == "Дорожка") {
			double size;
			do {
				stmp = Microsoft::VisualBasic::Interaction::InputBox(L"Введите размер ячейки дорожки (###:###)", L"Размер ячейки", L"", 200, 200);
				if (!checkDigitInput(stmp)) notDigitError();
				if (stmp == "") return;
				else {
					size = Convert::ToDouble(stmp);
					if (size > currentProjectSize.Width || size > currentProjectSize.Height) notCorrectSize();
					else break;
				}
			} while (true);
			drawPathway(size);
		}
	}
	private: System::Void drawFence(double width, System::Windows::Forms::DialogResult orientation) {
		PictureBox^ pb = gcnew System::Windows::Forms::PictureBox();
		pb->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y);
		pb->BackgroundImage = System::Drawing::Image::FromFile("img/fence.png");
		pb->BackgroundImageLayout = ImageLayout::Tile;
		pb->SizeMode = PictureBoxSizeMode::AutoSize;
		pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
		pb->Name = "Fence";
		auto height = 5.0;
		if (orientation == System::Windows::Forms::DialogResult::No) {
			height *= currentProjectScaleHeight;
			std::swap(height, width);
		}
		else width *= currentProjectScaleWidth;
		pb->Size = sdSize(width * currentProjectScaleWidth, height);
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		objects->Add(pb);
		isSaved = false;
	}
	private: System::Void drawTree(int d) {
		PictureBox^ pb = gcnew System::Windows::Forms::PictureBox();
		pb->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y);
		pb->BackgroundImage = System::Drawing::Image::FromFile("img/tree.png");
		pb->BackgroundImageLayout = ImageLayout::Stretch;
		pb->SizeMode = PictureBoxSizeMode::AutoSize;
		pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
		pb->Name = "Tree";
		int width = d * currentProjectScaleWidth, height = d * currentProjectScaleHeight;
		pb->Size = sdSize(width, height);
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		objects->Add(pb);
		isSaved = false;
	}
	private: System::Void drawFarmland(double length, System::Windows::Forms::DialogResult orientation) {
		PictureBox^ pb = gcnew System::Windows::Forms::PictureBox();
		pb->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y);
		pb->BackgroundImageLayout = ImageLayout::Stretch;
		pb->SizeMode = PictureBoxSizeMode::AutoSize;
		pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
		pb->Name = "Farmland";
		orientation == System::Windows::Forms::DialogResult::No ? pb->BackgroundImage = System::Drawing::Image::FromFile("img/farmland-v.jpg") : pb->BackgroundImage = System::Drawing::Image::FromFile("img/farmland-h.jpg");
		pb->Size = sdSize(length * currentProjectScaleWidth, length * currentProjectScaleHeight);
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		objects->Add(pb);
		isSaved = false;
	}
	private: System::Void drawFlowerbed(double size) {
		PictureBox^ pb = gcnew System::Windows::Forms::PictureBox();
		pb->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y);
		pb->BackgroundImageLayout = ImageLayout::Stretch;
		pb->SizeMode = PictureBoxSizeMode::AutoSize;
		pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
		pb->Name = "Flowerbed";
		pb->BackgroundImage = System::Drawing::Image::FromFile("img/flowerbed.png");
		pb->Size = sdSize(size * currentProjectScaleWidth, size * currentProjectScaleHeight);
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		objects->Add(pb);
		isSaved = false;
	}
	private: System::Void drawPath(double size) {
		PictureBox^ pb = gcnew System::Windows::Forms::PictureBox();
		pb->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y);
		pb->BackgroundImageLayout = ImageLayout::Stretch;
		pb->SizeMode = PictureBoxSizeMode::AutoSize;
		pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
		pb->Name == "Path";
		pb->BackgroundImage = System::Drawing::Image::FromFile("img/path.jpg");
		pb->Size = sdSize(size * currentProjectScaleWidth, size * currentProjectScaleHeight);
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		objects->Add(pb);
		isSaved = false;
	}
	private: System::Void drawPathway(double size) {
		PictureBox^ pb = gcnew System::Windows::Forms::PictureBox();
		pb->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y);
		pb->BackgroundImageLayout = ImageLayout::Stretch;
		pb->SizeMode = PictureBoxSizeMode::AutoSize;
		pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
		pb->Name = "Pathway";
		pb->BackgroundImage = System::Drawing::Image::FromFile("img/pathway.jpg");
		pb->Size = sdSize(size * currentProjectScaleWidth, size * currentProjectScaleHeight);
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		objects->Add(pb);
		isSaved = false;
	}
	private: System::Void objectMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		movingPictureBox = safe_cast<System::Windows::Forms::PictureBox^>(sender);
		oldLocation = movingPictureBox->Location;
		lastCursorPos = Control::MousePosition;
		movingPictureBox->BringToFront();
		if (movingPictureBox->Name == "Zone") {
			zoneNames[zones->IndexOf(movingPictureBox)]->BringToFront();
		}
	}
	private: System::Void objectMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (movingPictureBox != nullptr) {
			System::Drawing::Point currentCursorPos = Control::MousePosition;
			System::Drawing::Point offset(currentCursorPos.X - lastCursorPos.X, currentCursorPos.Y - lastCursorPos.Y);
			System::Drawing::Point newLocation(movingPictureBox->Location.X + offset.X, movingPictureBox->Location.Y + offset.Y);
			if (pictureBox1->ClientRectangle.Contains(movingPictureBox->Bounds)) {
				movingPictureBox->Location = newLocation;
			}
			lastCursorPos = currentCursorPos;
		}
	}
	private: System::Void objectMouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (magnet) {
			movingPictureBox->Location = Point(movingPictureBox->Location.X - movingPictureBox->Location.X % 10 + 1, movingPictureBox->Location.Y - movingPictureBox->Location.Y % 10 + 5);
		}
		if (movingPictureBox->Name != "Zone") {
			for each (auto obj in objects) {
				if (obj == movingPictureBox) continue;
				if (CheckIntersection(movingPictureBox, obj)) {
					movingPictureBox->Location = oldLocation;
					MessageBox::Show("Наложение одного объекта на другой невозможно!\nПеремещение отменено.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		movingPictureBox = nullptr;
		isSaved = false;
	}
	private: System::Boolean CheckIntersection(PictureBox^ pictureBox1, PictureBox^ pictureBox2) {
		System::Drawing::Rectangle bounds1 = pictureBox1->Bounds;
		System::Drawing::Rectangle bounds2 = pictureBox2->Bounds;

		return bounds1.IntersectsWith(bounds2);
	}
	private: System::Void openContextMenu(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			objectToEdit = safe_cast<System::Windows::Forms::PictureBox^>(sender);
			if (objectToEdit->Name == "Zone") {
				System::Windows::Forms::ToolStripMenuItem^ изменитьИмяToolStripMenuItem = gcnew System::Windows::Forms::ToolStripMenuItem();
				изменитьИмяToolStripMenuItem->Name = L"изменитьИмяToolStripMenuItem";
				изменитьИмяToolStripMenuItem->Size = sdSize(220, 22);
				изменитьИмяToolStripMenuItem->Text = L"Изменить название поля";
				изменитьИмяToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::изменитьИмяToolStripMenuItem_Click);
				if (this->contextMenuStrip1->Items->Count != 7) {
					this->contextMenuStrip1->Items->Add(изменитьИмяToolStripMenuItem);
				}
			}
			else {
				if (this->contextMenuStrip1->Items->Count == 7) {
					this->contextMenuStrip1->Items->RemoveAt(6);
				}
			}
			POINT pt;
			GetCursorPos(&pt);
			this->contextMenuStrip1->Show(pt.x, pt.y);
		}
	}
	private: System::Void выбратьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedPictureBox = objectToEdit;
		this->button4->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
	}
	private: System::Void изменитьИмяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новое имя участка", L"Имя участка", zoneNames[zones->IndexOf(objectToEdit)]->Text, 200, 200);
		if (name == "") return;
		zoneNames[zones->IndexOf(objectToEdit)]->Text = name;
		isSaved = false;
	}
	private: System::Void editObjectSize() {
		if (objectToEdit->Name == "Fence") {
			String^ height, ^ width;
			bool currentOrientation;
			objectToEdit->Size.Height > objectToEdit->Size.Width ? currentOrientation = false : currentOrientation = true;
			do {
				height = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новую длину забора", L"Длина забора", currentOrientation ? Convert::ToString(objectToEdit->Size.Height / currentProjectScaleHeight) : Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth), 200, 200);
				if (!checkDigitInput(height)) {
					notDigitError();
				}
				else {
					if (Convert::ToInt32(height) > currentProjectSize.Height) {
						notCorrectSize();
					}
					else {
						width = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новую ширину забора", L"Ширина забора", currentOrientation ? Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth) : Convert::ToString(objectToEdit->Size.Height / currentProjectScaleHeight), 200, 200);
						if (!checkDigitInput(width)) {
							notDigitError();
						}
						else {
							break;
						}
					}
				}
			} while (true);
			if (height == "" || width == "") return;
			objectToEdit->Size = currentOrientation ? sdSize(Convert::ToInt32(height), Convert::ToInt32(width)) : sdSize(Convert::ToInt32(width), Convert::ToInt32(height));
		}
		else if (objectToEdit->Name == "Tree") {
			String^ d;
			do {
				d = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новый диаметр ствола дерева", L"Диаметр ствола", Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth), 200, 200);
				if (!checkDigitInput(d)) {
					notDigitError();
				}
				else {
					if (Convert::ToInt32(d) > currentProjectSize.Width || Convert::ToInt32(d) > currentProjectSize.Width) {
						notCorrectSize();
					}
					else {
						break;
					}
				}
			} while (true);
			if (d == "") return;
			objectToEdit->Size = sdSize(Convert::ToInt32(d) * currentProjectScaleWidth, Convert::ToInt32(d) * currentProjectScaleHeight);
		}
		else if (objectToEdit->Name == "Farmland") {
			String^ length, ^ width;
			bool currentOrientation;
			objectToEdit->Size.Height > objectToEdit->Size.Width ? currentOrientation = true : currentOrientation = false;
			do {
				length = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новую длину грядки", L"Длина грядки", currentOrientation ? Convert::ToString(objectToEdit->Size.Height / currentProjectScaleHeight) : Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth), 200, 200);
				if (!checkDigitInput(length)) {
					notDigitError();
				}
				else {
					if (Convert::ToInt32(length) > currentProjectSize.Width) {
						notCorrectSize();
					}
					else {
						width = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новую ширину грядки", L"Ширина грядки", currentOrientation ? Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth) : Convert::ToString(objectToEdit->Size.Height / currentProjectScaleHeight), 200, 200);
						if (!checkDigitInput(width)) {
							notDigitError();
						}
						else {
							break;
						}
					}
				}
			} while (true);
			if (length == "" || width == "") return;
			objectToEdit->Size = currentOrientation ? sdSize(Convert::ToInt32(length), Convert::ToInt32(width)) : sdSize(Convert::ToInt32(width), Convert::ToInt32(length));
		}
		else if (objectToEdit->Name == "Flowerbed") {
			String^ size;
			do {
				size = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новый диаметр клумбы", L"Диаметр клумбы", Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth), 200, 200);
				if (!checkDigitInput(size)) {
					notDigitError();
				}
				else {
					if (Convert::ToInt32(size) > currentProjectSize.Width || Convert::ToInt32(size) > currentProjectSize.Width) {
						notCorrectSize();
					}
					else {
						break;
					}
				}
			} while (true);
			if (size == "") return;
			objectToEdit->Size = sdSize(Convert::ToInt32(size) * currentProjectScaleWidth, Convert::ToInt32(size) * currentProjectScaleHeight);
		}
		else if (objectToEdit->Name == "Path") {
			String^ size;
			do {
				size = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новый размер ячейки тропинки", L"Диаметр тропинки", Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth), 200, 200);
				if (!checkDigitInput(size)) {
					notDigitError();
				}
				else if (Convert::ToInt32(size) > currentProjectSize.Width || Convert::ToInt32(size) > currentProjectSize.Height) {
					notCorrectSize();
				}
				else break;
			} while (true);
			if (size == "") return;
			objectToEdit->Size = sdSize(Convert::ToInt32(size) * currentProjectScaleWidth, Convert::ToInt32(size) * currentProjectScaleHeight);
		}
		else if (objectToEdit->Name == "Pathway") {
			String^ size;
			do {
				size = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новый размер ячейки дорожки", L"Диаметр дорожки", Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth), 200, 200);
				if (!checkDigitInput(size)) {
					notDigitError();
				}
				else {
					if (Convert::ToInt32(size) > currentProjectSize.Width || Convert::ToInt32(size) > currentProjectSize.Height) {
						notCorrectSize();
					}
					else {
						break;
					}
				}
			} while (true);
			if (size == "") return;
			objectToEdit->Size = sdSize(Convert::ToInt32(size) * currentProjectScaleWidth, Convert::ToInt32(size) * currentProjectScaleHeight);
		}
		else if (objectToEdit->Name == "Zone") {
			String^ width, ^ height;
			do {
				width = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новую длину забора", L"Длина забора", Convert::ToString(objectToEdit->Size.Height / currentProjectScaleHeight), 200, 200);
				if (!checkDigitInput(width)) {
					notDigitError();
				}
				else {
					if (Convert::ToInt32(width) > currentProjectSize.Height) {
						notCorrectSize();
					}
					else {
						height = Microsoft::VisualBasic::Interaction::InputBox(L"Введите новую ширину забора", L"Ширина забора", Convert::ToString(objectToEdit->Size.Width / currentProjectScaleWidth), 200, 200);
						if (!checkDigitInput(height)) {
							notDigitError();
						}
						else {
							break;
						}
					}
				}
			} while (true);
			if (width == "" || height == "") return;
			objectToEdit->Size = sdSize(Convert::ToDouble(width) * currentProjectScaleWidth, Convert::ToDouble(height) * currentProjectScaleHeight);
		}
		isSaved = false;
	}
	private: System::Void редактироватьРазмерToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		editObjectSize();
	}
	private: System::Void редактироватьПоложениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		showLocationDialog(objectToEdit);
	}
	private: System::Void changeOrientation() {
		if (objectToEdit->Name == "Tree" || objectToEdit->Name == "FLowerbed" || objectToEdit->Name == "Pathway" || objectToEdit->Name == "Path" || objectToEdit->Name == "Zone") {
			MessageBox::Show("Ориентацию этого объекта невозможно изменить!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (objectToEdit->Name == "Farmland") {
			if (objectToEdit->BackgroundImage == System::Drawing::Image::FromFile("img/farmland-v.jpg")) objectToEdit->BackgroundImage = System::Drawing::Image::FromFile("img/farmland-h.jpg");
			else objectToEdit->BackgroundImage = System::Drawing::Image::FromFile("img/farmland-v.jpg");
		}
		auto tmp = objectToEdit->Width;
		objectToEdit->Width = objectToEdit->Height;
		objectToEdit->Height = tmp;
		isSaved = false;
	}
	private: System::Void изменитьОриентациюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		changeOrientation();
	}
	private: System::Void deleteObject() {
		System::Windows::Forms::DialogResult result = MessageBox::Show(L"Вы уверены, что хотите удалить этот объект? Это действие необратимо!", L"Удалить?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes && objectToEdit->Name != "Zone") {
			if (objectToEdit == selectedPictureBox) clearSelection();
			this->Controls->Remove(objectToEdit);
			objects->Remove(objectToEdit);
		}
		else if (result == System::Windows::Forms::DialogResult::Yes && objectToEdit->Name == "Zone") {
			if (objectToEdit == selectedPictureBox) clearSelection();
			this->Controls->Remove(zoneNames[zones->IndexOf(objectToEdit)]);
			zoneNames->Remove(zoneNames[zones->IndexOf(objectToEdit)]);
			this->Controls->Remove(objectToEdit);
			zones->Remove(objectToEdit);
		}
		isSaved = false;
	}
	private: System::Void удалитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteObject();
	}
	private: System::Void cloneObject() {
		PictureBox^ pb = gcnew System::Windows::Forms::PictureBox();
		pb->Location = System::Drawing::Point(objectToEdit->Location.X + 10, objectToEdit->Location.Y + 10);
		pb->BackgroundImageLayout = objectToEdit->BackgroundImageLayout;
		pb->SizeMode = pb->SizeMode;
		pb->BorderStyle = objectToEdit->BorderStyle;
		pb->Name = objectToEdit->Name;
		pb->BackgroundImage = objectToEdit->BackgroundImage;
		pb->Size = objectToEdit->Size;
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		objects->Add(pb);
		isSaved = false;
	}
	private: System::Void клонироватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		cloneObject();
	}
	private: System::Void openProject(String^ filePath) {
		currentProjectName = getFileName(filePath);
		currentFilePath = filePath;
		StreamReader^ reader;
		try {
			reader = gcnew StreamReader(filePath);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			return;
		}
		currentProjectSize.Width = Convert::ToInt32(reader->ReadLine());
		currentProjectSize.Height = Convert::ToInt32(reader->ReadLine());
		currentProjectScaleWidth = Convert::ToDouble(reader->ReadLine());
		currentProjectScaleHeight = Convert::ToDouble(reader->ReadLine());

		int objectCount = Convert::ToInt32(reader->ReadLine());
		for (int i = 0; i < objectCount; i++) {
			String^ name = reader->ReadLine();
			int x = Convert::ToInt32(reader->ReadLine());
			int y = Convert::ToInt32(reader->ReadLine());
			String^ backgroundImageLayoutString = reader->ReadLine();
			String^ sizeModeString = reader->ReadLine();
			String^ borderStyleString = reader->ReadLine();
			int width = Convert::ToInt32(reader->ReadLine());
			int height = Convert::ToInt32(reader->ReadLine());
			PictureBox^ pb = gcnew PictureBox();
			pb->Name = name;
			pb->Location = Point(x, y);
			if (pb->Name == "Fence") pb->BackgroundImage = System::Drawing::Image::FromFile("img/fence.png");
			else if (pb->Name == "Tree") pb->BackgroundImage = System::Drawing::Image::FromFile("img/tree.png");
			else if (pb->Name == "Flowerbed") pb->BackgroundImage = System::Drawing::Image::FromFile("img/flowerbed.png");
			else if (pb->Name == "Pathway") pb->BackgroundImage = System::Drawing::Image::FromFile("img/pathway.jpg");
			else if (pb->Name == "Path") pb->BackgroundImage = System::Drawing::Image::FromFile("img/path.jpg");
			else if (pb->Name == "Farmland") pb->BackgroundImage = System::Drawing::Image::FromFile("img/farmland-h.jpg");
			pb->BackgroundImageLayout = static_cast<ImageLayout>(Enum::Parse(ImageLayout::typeid, backgroundImageLayoutString));
			pb->SizeMode = static_cast<PictureBoxSizeMode>(Enum::Parse(PictureBoxSizeMode::typeid, sizeModeString));
			pb->BorderStyle = static_cast<BorderStyle>(Enum::Parse(BorderStyle::typeid, borderStyleString));
			pb->Size = sdSize(width, height);
			pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
			pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
			pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
			pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
			pb->Parent = this;
			this->Controls->Add(pb);
			pb->BringToFront();
			objects->Add(pb);
		}

		int zoneCount = Convert::ToInt32(reader->ReadLine());
		for (int i = 0; i < zoneCount; i++) {
			String^ name = reader->ReadLine();
			int x = Convert::ToInt32(reader->ReadLine());
			int y = Convert::ToInt32(reader->ReadLine());
			int width = Convert::ToInt32(reader->ReadLine());
			int height = Convert::ToInt32(reader->ReadLine());

			PictureBox^ pb = gcnew PictureBox();
			pb->Name = name;
			pb->Location = Point(x, y);
			Random^ rand = gcnew Random();
			Color color = Color::FromArgb(rand->Next(256), rand->Next(256), rand->Next(256));
			Bitmap^ bmp = gcnew Bitmap(1, 1);
			bmp->SetPixel(0, 0, color);
			pb->BackgroundImage = bmp;
			pb->BackgroundImageLayout = ImageLayout::Tile;
			pb->SizeMode = PictureBoxSizeMode::AutoSize;
			pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			pb->Size = sdSize(width, height);
			pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
			pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
			pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
			pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
			pb->Parent = this;
			this->Controls->Add(pb);
			pb->BringToFront();
			zones->Add(pb);
		}

		int zoneNameCount = Convert::ToInt32(reader->ReadLine());
		for (int i = 0; i < zoneNameCount; i++) {
			String^ name = reader->ReadLine();
			String^ text = reader->ReadLine();
			Label^ lb = gcnew Label();
			lb->Name = name;
			lb->Text = text;
			lb->Location = zones[i]->Location;
			lb->AutoSize = true;
			lb->Parent = this;
			this->Controls->Add(lb);
			lb->BringToFront();
			zoneNames->Add(lb);
		}
		reader->Close();
		this->button2->Text = "Скрыть участки";
		this->button3->Show();
		isSaved = true;
	}
	private: System::Void saveProject() {
		System::Windows::Forms::SaveFileDialog^ saveFileDialog1 = gcnew System::Windows::Forms::SaveFileDialog;
		saveFileDialog1->FileName = currentProjectName;
		saveFileDialog1->Filter = "Файлы проекта (*.pplr)|*.pplr|Все файлы (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;
		System::Windows::Forms::DialogResult result = saveFileDialog1->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			saveData(saveFileDialog1->FileName);
		}
	}
	private: System::Void saveData(String^ filePath) {
		StreamWriter^ streamWriter = gcnew StreamWriter("lastProject");
		streamWriter->WriteLine(filePath);
		streamWriter->Close();
		currentFilePath = filePath;
		StreamWriter^ writer = gcnew StreamWriter(filePath);

		writer->WriteLine(currentProjectSize.Width);
		writer->WriteLine(currentProjectSize.Height);

		writer->WriteLine(currentProjectScaleWidth);
		writer->WriteLine(currentProjectScaleHeight);

		writer->WriteLine(objects->Count);
		for each (PictureBox ^ pb in objects) {
			writer->WriteLine(pb->Name);
			writer->WriteLine(pb->Location.X);
			writer->WriteLine(pb->Location.Y);
			writer->WriteLine(pb->BackgroundImageLayout.ToString());
			writer->WriteLine(pb->SizeMode.ToString());
			writer->WriteLine(pb->BorderStyle.ToString());
			writer->WriteLine(pb->Size.Width);
			writer->WriteLine(pb->Size.Height);
		}

		writer->WriteLine(zones->Count);
		for each (PictureBox ^ pb in zones) {
			writer->WriteLine(pb->Name);
			writer->WriteLine(pb->Location.X);
			writer->WriteLine(pb->Location.Y);
			writer->WriteLine(pb->Size.Width);
			writer->WriteLine(pb->Size.Height);
		}

		writer->WriteLine(zoneNames->Count);
		for each (Label ^ lb in zoneNames) {
			writer->WriteLine(lb->Name);
			writer->WriteLine(lb->Text);
		}
		writer->Close();
		isSaved = true;
	}
	private: System::Void новыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		hideControls();
		showCreateProjectDialog();
		doOpen();
	}
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Файлы проекта (*.pplr)|*.pplr|Все файлы (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;
		System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();

		if (result == System::Windows::Forms::DialogResult::OK) {
			doOpen();
			openProject(openFileDialog1->FileName);
		}
	}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isOpened) {
			notOpenedProjectMessage();
			return;
		}
		saveProject();
	}
	private: System::Void экспортToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::SaveFileDialog^ saveFileDialog1 = gcnew System::Windows::Forms::SaveFileDialog;
		saveFileDialog1->FileName = currentProjectName;
		saveFileDialog1->Filter = "Изображение PNG (*.png)|*.png|Все файлы (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;
		System::Windows::Forms::DialogResult result = saveFileDialog1->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK) {

			Bitmap^ resultImage = gcnew Bitmap(800, 600);
			Graphics^ graphics = Graphics::FromImage(resultImage);
			List<PictureBox^>^ visiblePictureBoxes = gcnew List<PictureBox^>();

			for (int i = 0; i < objects->Count; i++) {
				if (!exportVisibleSetting) {
					if (objects[i]->Visible && objects[i] != nullptr) {
						PictureBox^ pictureBox = objects[i];
						Point pictureBoxLocation = pictureBox->Location;
						graphics->DrawImage(pictureBox->BackgroundImage, System::Drawing::Rectangle(pictureBoxLocation, pictureBox->Size));
					}
				}
				else if (objects[i] != nullptr) {
					PictureBox^ pictureBox = objects[i];
					Point pictureBoxLocation = pictureBox->Location;

					graphics->DrawImage(pictureBox->BackgroundImage, System::Drawing::Rectangle(pictureBoxLocation, pictureBox->Size));
				}
			}
			for (int i = 0; i < zones->Count; i++) {
				if (!exportVisibleSetting) {
					if (zones[i]->Visible && zones[i] != nullptr) {
						PictureBox^ pictureBox = zones[i];
						Label^ label = zoneNames[i];
						Point pictureBoxLocation = pictureBox->Location;

						graphics->DrawImage(pictureBox->BackgroundImage, System::Drawing::Rectangle(pictureBoxLocation, pictureBox->Size));
						graphics->DrawString(label->Text, label->Font, gcnew SolidBrush(label->ForeColor), pictureBoxLocation);
					}
				}
				else if (zones[i] != nullptr) {
					PictureBox^ pictureBox = zones[i];
					Label^ label = zoneNames[i];
					Point pictureBoxLocation = pictureBox->Location;

					graphics->DrawImage(pictureBox->BackgroundImage, System::Drawing::Rectangle(pictureBoxLocation, pictureBox->Size));
					graphics->DrawString(label->Text, label->Font, gcnew SolidBrush(label->ForeColor), pictureBoxLocation);
				}
			}

			resultImage->Save(saveFileDialog1->FileName, ImageFormat::Png);
			delete graphics;
			delete resultImage;
		}
	}
	private: System::Void настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		showSettingsDialog();
	}
	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		INPUT input{};
		input.type = INPUT_KEYBOARD;
		input.ki.wVk = VK_F1;
		input.ki.dwFlags = 0;
		SendInput(1, &input, sizeof(INPUT));
		input.ki.dwFlags = KEYEVENTF_KEYUP;
		SendInput(1, &input, sizeof(INPUT));
	}
	private: System::Void закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isOpened && objects->Count != 0 && isSaved == false) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Сохранить проект перед выходом?\nЕсли Вы откажитесь, все данные будут удалены без возможности восстановления.", "Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				saveProject();
			}
		}
		this->Close();
	}
	private: System::Void открытьБиблиотекуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isOpened) {
			notOpenedProjectMessage();
			return;
		}
		listBox1->Items->Clear();
		showLibraryDialog();
	}
	private: System::Void очиститьПолеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isOpened) {
			notOpenedProjectMessage();
			return;
		}
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Вы действительно хотите продолжить?\nЭто действие необратимо!", "Предупреждение", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Warning);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			doOpen();
		}
	}
	private: System::Void удалитьПоследнийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (objects->Count != 0) {
			if (MessageBox::Show("Вы уверены? Это действие необратимо", "Уверены?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				auto obj = objects[objects->Count - 1];
				if (obj == selectedPictureBox) clearSelection();
				this->Controls->Remove(obj);
				objects->Remove(obj);
			}
		}
		else MessageBox::Show("У Вас не создано ни одного объекта!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		isSaved = false;
	}
	private: System::Void списокОбъектовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		showObjectListDialog();
	}
	private: System::String^ getFileName(String^ fileName) {
		Regex^ rgx = gcnew Regex("[^\\\\/]*(?=\\.[^\\.\\\\/]*$)");
		Match^ match = rgx->Match(fileName);
		if (match->Success) {
			return match->Value;
		}
		return "";
	}
	private: System::Void Main_Shown(System::Object^ sender, System::EventArgs^ e) {
		this->objects = gcnew System::Collections::Generic::List<PictureBox^>(0);
		this->zones = gcnew System::Collections::Generic::List<PictureBox^>(0);
		this->zoneNames = gcnew System::Collections::Generic::List<Label^>(0);
		currentFilePath = "";
		this->pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("img/background-grid.jpg");
		this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
		type = this->type;
		if (type == "new") {
			currentProjectName = this->currentProjectName;
			currentProjectSize = this->currentProjectSize;
			currentProjectScaleWidth = 800.0 / currentProjectSize.Width;
			currentProjectScaleHeight = 600.0 / currentProjectSize.Height;
		}
		if (type == "open") {
			fileName = this->fileName;
			openProject(fileName);
		}
		doOpen();
	}
	private: System::Void Main_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (isOpened && objects->Count != 0 && isSaved == false) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Сохранить проект перед выходом?\nЕсли Вы откажитесь, все данные будут удалены без возможности восстановления.", "Выход", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				saveProject();
			}
			else if (result == System::Windows::Forms::DialogResult::Cancel) {
				e->Cancel = true;
			}
		}
	}
	private: System::Void doOpen() {
		hideControls();
		isOpened = true;
		this->Text = L"Pro planner: " + currentProjectName;
		for each (Control ^ ctr in Controls) if (dynamic_cast<PictureBox^>(ctr) && ctr != pictureBox1) this->Controls->Remove(ctr);
		for each (auto lb in zoneNames) this->Controls->Remove(lb);
		objects->Clear();
		zones->Clear();
		zoneNames->Clear();
		listBox1->Items->Clear();
		currentFilePath = "";
		clearSelection();
	}
	private: System::Void hideControls() {
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->listBox1->Enabled = false;
		this->button4->Enabled = false;
		this->button5->Enabled = false;
		this->button6->Enabled = false;
		this->button7->Enabled = false;
		this->button8->Enabled = false;
	}
	private: System::Void showControls() {
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->listBox1->Enabled = true;
		if (zoneVisibility) this->button3->Enabled = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (zoneVisibility) { // СКРЫВАТЬ
			zoneVisibility = false;
			button2->Text = "Показать участки";
			this->button3->Enabled = false;
			for (int i = 0; i < zones->Count; i++) {
				zoneNames[i]->Hide();
				zones[i]->Hide();
			}
		}
		else { // ПОКАЗЫВАТЬ
			zoneVisibility = true;
			this->button2->Text = "Скрыть участки";
			this->button3->Enabled = true;
			for (int i = 0; i < zones->Count; i++) {
				zoneNames[i]->Show();
				zones[i]->Show();
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ width, ^ height, ^ name;
		do {
			width = Microsoft::VisualBasic::Interaction::InputBox(L"Введите длину участка", L"Длина участка", L"", 200, 200);
			if (width == "") return;
			if (!checkDigitInput(width)) {
				notDigitError();
			}
			else {
				if (Convert::ToInt32(width) > currentProjectSize.Width) {
					notCorrectSize();
				}
				else {
					height = Microsoft::VisualBasic::Interaction::InputBox(L"Введите ширину участка", L"Длина участка", L"", 200, 200);
					if (height == "") return;
					if (!checkDigitInput(height)) {
						notDigitError();
					}
					else {
						if (Convert::ToInt32(height) > currentProjectSize.Height) {
							notCorrectSize();
						}
						else {
							name = Microsoft::VisualBasic::Interaction::InputBox(L"Введите название участка", L"Название", L"", 200, 200);
							if (name == "") return;
							else break;
						}
					}
				}
			}
		} while (true);
		auto iwidth = Convert::ToDouble(width), iheight = Convert::ToDouble(height);
		Random^ rand = gcnew Random();
		PictureBox^ pb = gcnew PictureBox();
		pb->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y);
		Color color = Color::FromArgb(rand->Next(256), rand->Next(256), rand->Next(256));
		Bitmap^ bmp = gcnew Bitmap(1, 1);
		bmp->SetPixel(0, 0, color);
		pb->BackgroundImage = bmp;
		pb->BackgroundImageLayout = ImageLayout::Tile;
		pb->SizeMode = PictureBoxSizeMode::AutoSize;
		pb->BorderStyle = System::Windows::Forms::BorderStyle::None;
		pb->Name = "Zone";
		pb->Size = sdSize(iwidth * currentProjectScaleWidth, iheight * currentProjectScaleHeight);
		pb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseDown);
		pb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseMove);
		pb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::objectMouseUp);
		pb->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::openContextMenu);
		this->Controls->Add(pb);
		pb->Parent = this;
		pb->BringToFront();
		zones->Add(pb);
		Label^ lb = gcnew Label();
		lb->Location = pb->Location;
		lb->AutoSize = true;
		lb->Name = "ZoneName";
		lb->Text = name;
		this->Controls->Add(lb);
		lb->Parent = this;
		lb->BringToFront();
		zoneNames->Add(lb);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->button2->Text == "Скрыть участки") {
			for (int i = 0; i < zones->Count; i++) {
				zoneNames[i]->Location = zones[i]->Location;
			}
		}
	}
	private: System::Void Main_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->Control && e->KeyCode.Equals(Keys::S)) {
			if (File::Exists(currentFilePath)) {
				saveData(currentFilePath);
			}
			else {
				saveProject();
			}
			e->SuppressKeyPress = true;
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedPictureBox == nullptr) {
			MessageBox::Show("Вы не выбрали объект!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		selectedPictureBox->Location = Point(selectedPictureBox->Location.X, selectedPictureBox->Location.Y - 5);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedPictureBox == nullptr) {
			MessageBox::Show("Вы не выбрали объект!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		selectedPictureBox->Location = Point(selectedPictureBox->Location.X - 5, selectedPictureBox->Location.Y);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedPictureBox == nullptr) {
			MessageBox::Show("Вы не выбрали объект!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		selectedPictureBox->Location = Point(selectedPictureBox->Location.X + 5, selectedPictureBox->Location.Y);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedPictureBox == nullptr) {
			MessageBox::Show("Вы не выбрали объект!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		selectedPictureBox->Location = Point(selectedPictureBox->Location.X, selectedPictureBox->Location.Y + 5);
	}
	private: System::Void clearSelection() {
		selectedPictureBox = nullptr;
		this->button4->Enabled = false;
		this->button5->Enabled = false;
		this->button6->Enabled = false;
		this->button7->Enabled = false;
		this->button8->Enabled = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		clearSelection();
	}
	};
}