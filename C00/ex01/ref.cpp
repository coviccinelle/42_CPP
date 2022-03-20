#include <iostream>
typedef std::string str;
void	fn(str& src)
{
	std::cout << "ref address: "<< &src << std::endl;
}
void	fn2(str* src)
{
	std::cout << "ptr address: "<< &src << std::endl;
}
int	main(void)
{
	str name = "tao";
	std::cout << &name << std::endl;
	fn(name);
	fn2(name);
}
