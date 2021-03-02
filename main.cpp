#include <QApplication>
#include <QPushButton>

4354646
88888888888888888

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	QPushButton button("Hello, World!");
	button.resize(200, 60);
	button.show();

	return app.exec();
}
