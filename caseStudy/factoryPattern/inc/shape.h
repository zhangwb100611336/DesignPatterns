namespace factoryPattern
{
	class shape
	{
	pubilic:
		virtual shape();
		virtual void draw()=0;
		virtual sharp* creator(void) = 0 ;
	};
}
