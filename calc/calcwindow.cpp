#include <iostream>
#include "calcwindow.h"

ExampleWindow::ExampleWindow()
: m_button_1("+"),
  m_button_2("-"),
  m_button_3("*"),
  m_button_4("/")
{
  set_title("Basic Calculator");
  set_border_width(25);

  add(m_grid);

  m_grid.add(m_button_1);
  m_grid.add(m_button_2);
  m_grid.add(m_button_3);
  m_grid.add(m_button_4);

  m_button_1.signal_clicked().connect(
    sigc::bind<Glib::ustring>( sigc::mem_fun(*this,
      &ExampleWindow::on_button_numbered), "+") );
  m_button_2.signal_clicked().connect(
    sigc::bind<Glib::ustring>( sigc::mem_fun(*this,
      &ExampleWindow::on_button_numbered), "-") );
  m_button_3.signal_clicked().connect(
    sigc::bind<Glib::ustring>( sigc::mem_fun(*this,
      &ExampleWindow::on_button_numbered), "*") );
  m_button_4.signal_clicked().connect(
    sigc::bind<Glib::ustring>( sigc::mem_fun(*this,
      &ExampleWindow::on_button_numbered), "/") );      

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_numbered(const Glib::ustring& data)
{
    int num1,num2;
    float result;
    char ch;    //to store operator choice
    
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%d",&num1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%d",&num2);
     
    if (data==("+")) ch='+';
    if (data==("-")) ch='-';
    if (data==("*")) ch='*';
    if (data==("/")) ch='/';
    
    result=0;
    switch(ch)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
}