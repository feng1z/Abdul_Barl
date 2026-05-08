#include <iostream>
#include <vector>
#include <limits>
#include <cstdlib>

class SafeArray
{
private:
	std::vector<int> data;
public:
	//用于设置数组容量的函数
	void setCapacity(std::size_t cap)
	{
		data.reserve(cap);
	}

	//用于输入元素 且 判断元素是否有效的函数
	bool readElements(std::size_t n)
	{
		if (n == 0)
			return true;

		std::cout << "输入所有元素（共 " << n << " 个）：\n";
		int val;
		for (std::size_t i = 0; i < n; ++i)
		{
			if (!(std::cin >> val))
			{
				std::cerr << "输入非法，程序终止。\n";
				return false;
			}
			data.push_back(val);
		}
		return true;
	}

	//用于打印数组元素的函数
	void Display() const
	{
		std::cout << "元素是\n";
		for (int v : data)
			std::cout << v << ' ';
		std::cout << "\n";
	}

	//用于返回元素个数的函数
	std::size_t size() const
	{
		return data.size();
	}

	//用于返回数组容量的函数
	std::size_t capacity() const
	{
		return data.capacity();
	}
};





int main()
{
	//数组实例
	SafeArray arr;

	//设置容量
	std::size_t capacity;
	std::cout << "请输入数组的容量： ";
	if (!(std::cin >> capacity))
	{
		std::cerr << "无效的容量输入。\n";
		return EXIT_FAILURE;
	}
	arr.setCapacity(capacity);

	//n表示元素的数量，先获取n的值，判断n的值是否有效
	std::size_t n;
	std::cout << "输入元素的数量: ";
	if (!(std::cin >> n))
	{
		std::cerr << "无效的容量输入。\n";
		return EXIT_FAILURE;
	}
	if (n > capacity)
	{
		std::cout << "警告：元素数量 " << n << " 超过容量 " << capacity << " ,将自动扩展容量。\n";
	}

	//输入n个实际元素，同时判断输入的元素是否有效
	if (!arr.readElements(n))
	{
		return EXIT_FAILURE;
	}

	//显示数组内容
	arr.Display();

	std::cout << "按回车键退出......";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}