#include <shape.h>
#include <string>
#include <map>


namespace factoryPattern
{
	typedef shape* (* CreatorFuntion)(void);
	class ShapeFactory
	{
	public：
		shapeFactory();
		~shapeFactory();
		static ShapeFactory& init();
		static bool shapeRegister(const char* str,CreatorFuntion pCreatorFuntion);
		static getShape(const char* str);
	private:
		static map<string,shape*> shapeMap{};
		static map<string,CreatorFuntion>  objMap{};
	};
}
