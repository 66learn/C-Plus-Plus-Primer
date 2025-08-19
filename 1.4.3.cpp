#include <iostream>

int main()
{
    int sum = 0, value = 0;
    
    while (std :: cin >> value)//Linux下输入数据后，按Ctrl + D键入文件结束符
        sum += value;
    std :: cout << "Sum is: " << sum << std :: endl;
    return 0;
}
