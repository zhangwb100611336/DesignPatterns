/**
 *	You should have recived a copy of the GNU general Public License
 *	along with OST. if not,see <http://www.gun.org/licenses/>.
 *	
 *	@file       shapeFactory.cc
 *	@brief      Function implementation
 *	@author     Wenbing.Zhang
 *	@version    0.1
 *	@date       2018.11.20
 **/

#include "shapeFactory.h"
#include <iostream>
using namespace std;

namespace factoryPattern
{
		shapeFactory::shapeFactory()
		{
		}

		shapeFactory::~shapeFactory()
		{
		}


		bool shapeFactory::shapeRegister(string str,CreatorFuntion pCreatorFuntion)
		{
				map<std::string,CreatorFuntion*>::iterator it ;
				it= creatorMap.find(str);
				if(it!=creatorMap.end())
				{
						cout << "shape "<< str << "have alrady registered" << endl;
						return true;
				}
				creatorMap.insert(std::pair<std::string,CreatorFuntion> (str,pCreatorFuntion));
				return true;
		}
}
