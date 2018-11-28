/**
 *	You should have recived a copy of the GNU general Public License
 *	along with OST. if not,see <http://www.gun.org/licenses/>.
 *	
 *	@file       shapeFactory.h
 *	@brief      Function implementation
 *	@author     Wenbing.Zhang
 *	@version    0.1
 *	@date       2018.11.20
 **/

#include <shape.h>
#include <string>
#include <map>

/**
 *	@brief factory pattern namespace
 */
namespace factoryPattern
{
	typedef shape* (* CreatorFuntion)(void);
	/**
	 *	@brief class of shape factory \n
	 *	The class is use to register shape and create shape instance
	 */
	class ShapeFactory
	{
	public：
		shapeFactory();
		~shapeFactory();
		/**
		 *	@brief init 
		 */
		void init();
		static bool shapeRegister(std::string str,CreatorFuntion pCreatorFuntion);
		static sharp* getShape(std::string str);
	private:
		static map<std::string,shape*> shapeMap{};
		static map<std::string,CreatorFuntion>  creatorMap{};
	};
}
