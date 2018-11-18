#include <shape.h>
#include <string>
#include <map>


typedef shape* (* CreatorFuntion)(void);
namespace factoryPattern
{
	class ShapeFactory
	{
	public：
		shapeFactory();
		static ShapeFactory& create();
		static bool shapeRegister(const char* str,CreatorFuntion pCreatorFuntion);
		static getShape(string str);
	private:
		static map<string,shape*> shapeMap{};
	}
}
