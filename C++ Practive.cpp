#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;


//int main() {
//	string foods[5];
//	int size = sizeof(foods) / sizeof(foods[0]);
//	string temp;
//
//	for (int i = 0; i < size; i++) {
//		cout << "Enter a food you like or 'q' to quit #" << i + 1 << ":";
//		getline(cin, temp);
//		if (temp == "q") {
//			break;
//		}
//		else {
//			foods[i] = temp;
//		}
//	}
//
//	cout << "You like the following food :\n";
//
//	for (int i = 0; !foods[i].empty(); i++) {
//		cout << foods[i] << '\n';
//	}
//
//}

//int main() {
//
//	const int SIZE = 100;
//	
//	string foods[SIZE];
//
//	fill(foods, foods + (SIZE/2), "pizza");
//	fill(foods + (SIZE / 2), foods + (SIZE/3)*2, "hamburger");
//	fill(foods + (SIZE / 3) * 2, foods + SIZE, "hotdog");
//
//	for (string food : foods) {
//		cout << food << '\n';
//	}
//
//	return 0;
//}

//void sort(int array[], int size);
//
//int main() {
//	int array[] = { 10, 1, 9, 2, 8, 3, 7, 4, 6, 5 };
//	int size = sizeof(array) / sizeof(array[0]);
//	sort(array, size);
//
//	for (int element : array) {
//		cout << element << " ";
//	}
//}
//
//void sort(int array[], int size) {
//	//冒泡算法
//	int temp;
//	for (int i = 0; i < size - 1; i++) {
//		for (int j = 0; j < size - 1; j++) {
//			if (array[j] > array[j + 1]) {
//				temp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = temp;
//			}
//		}
//	}
//}

//int searchArray(int array[], int size, int element);
//
//int main() {
//
//	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int size = sizeof(numbers) / sizeof(numbers[0]);
//	int index;
//	int myNum;
//
//	cout << "Enter element to search for: " << '\n';
//	cin >> myNum;
//
//	index = searchArray(numbers, size, myNum);
//
//	if (index != -1) {
//		cout << myNum << " is at index " << index;
//	}
//	else {
//		cout << myNum << " is not in the array ";
//	}
//	return 0;
//}
//int searchArray(int array[], int size, int element) {
//
//	for (int i = 0; i < size; i++) {
//		if (array[i] == element) {
//			return i;
//		}
//	}
//	return -1;
//}

//double getTotal(double prices[], int size);
//
//int main() {
//	//数组添加到函数当中
//	//将价格相加起来并输出
//	double prices[] = { 4.99, 15.05, 8.88 };
//	int size = sizeof(prices) / sizeof(prices[0]);//计算数组个数 sizeof（prices）计算的是prices中的总字节数，而sizeof（prices[0]）则是计算单个double的字节数大小
//	double total = getTotal(prices, size);
//
//	cout << "$" << total;
//	
//	return 0;
//}
//
//double getTotal(double prices[], int size) {
//	double total = 0;
//
//	for (int i = 0; i < size; i++) {
//		total += prices[i];
//	}
//	return total;
//}

//int main() {
//
//	char grades[] = { 'A', 'B', 'C', 'D', 'E' };
//	for (char grade : grades) 
//	{
//		cout << grade << '\n';
//	}
//
//	string students[] = { "Spongebob", "Patrick", "Squidward" };
//	for (string student : students) //将数组students中的所有成员添加到student中 并打印出来
//	{
//		cout << student << '\n';
//	}
//	return 0;
//}

//int main() {
//	//迭代
//
//	char grades[] = { 'A', 'B', 'C', 'D', 'E' };
//	for (int j = 0; j < sizeof(grades) / sizeof(char); j++) {
//		cout << grades[j] << '\n';
//	}
//
//	string students[] = { "Spongebob", "Patrick", "Squidward" };
//	
//	for (int i = 0; i < sizeof(students) / sizeof(string); i++) {
//		cout << students[i] << '\n';
//	}
//
//
//	return 0;
//}

//int main() {
//	//sizeof方法
//	
//	string name = "win";
//	double gpa = 2.5;
//	char grade = 'F';
//	bool student = true;
//	char grades[] = { 'A', 'B', 'C', 'D', 'E' };
//	string students[] = { "Spongebob", "Patrick", "Squidward" };
//
//	cout << sizeof(students) << "bytes\n";//显示字符所占用的内存空间是多少
//	cout << sizeof(grades) / sizeof(char) << "elements\n";
//	cout << sizeof(students) / sizeof(string) << "elements\n";//显示数组个数
//
//	return 0;
//}

//int main() {
//	//数组
//	/*string cat[] = {"Corvette", "Mustang", "Camry"};*/
//	string car[3];
//	double prices[] = { 5.03, 7.05, 9.55, 13.00 };
//
//	for (int i = 0; i < sizeof(prices) / sizeof(double); i++) {
//		cout << prices[i] << '\n';
//	}//遍历打印double数组中的值，且如何计算数组个数，使用sizeof方法sizeof（变量名）/sizeof（该变量的变量类型）
//    //也可以定义数组个数 然后再初始化每个数组的值，间接插入到数组当中去
//	car[0] = "Camaro";
//	car[1] = "Camaro";
//	car[2] = "Camaro";
//	cout << car[2];
//
//	return 0;
//}

//简单的剪刀石头布游戏
//char getUseChoice();
//char getComputerChoice();
//void showChoice(char choice);
//void chooseWinner(char player, char computer);
//
////s剪刀 r石头 p布
//int main() {
//	char player;
//	char computer;
//
//	player = getUseChoice();
//	cout << "You choice: ";
//	showChoice(player);
//
//	computer = getComputerChoice();
//	cout << "computer choice:";
//	showChoice(computer);
//	chooseWinner(player, computer);
//
//	return 0;
//}
//
//char getUseChoice() {
//
//	char player;
//	cout << "Rock-Paper-Scissors Game!\n";
//
//	do
//	{
//		cout << "Choose one of the following\n";
//		cout << "*************************\n";
//		cout << "'r' for rock\n";
//		cout << "'p' for paper\n";
//		cout << "'s' for scissors\n";
//		cin >> player;
//	} while (player != 'r' && player != 'p' && player != 's');
//	return player;
//}
//char getComputerChoice(){
//
//	srand(time(0));
//	int num = rand() % 3 + 1;
//
//	switch (num)
//	{
//	case 1:return 'r';
//	case 2:return 'p';
//	case 3:return 's';
//	}
//
//
//	return 0;
//}
//void showChoice(char choice){
//	switch (choice) {
//	case 'r': cout << "Rock\n";
//		break;
//	case 'p': cout << "Paper\n";
//		break;
//	case 's': cout << "Scissors\n";
//		break;
//	}
//}
//void chooseWinner(char player, char computer) {
//	switch (player)
//	{
//	case 'r': if (computer == 'r') {
//		cout << "It is a tie!\n";
//	}
//			else if(computer == 'p')
//	{
//		cout << "You lose!\n";
//	}
//			else {
//		cout << "You win\n";
//	}
//			break;
//	case 'p': if (computer == 'r') {
//		cout << "You win!\n";
//	}
//			else if (computer == 'p')
//	{
//		cout << "It is tie!\n";
//	}
//			else {
//		cout << "You lose!\n";
//	}
//			break;
//	case 's': if (computer == 'r') {
//		cout << "You lose!\n";
//	}
//			else if (computer == 'p')
//	{
//		cout << "You win!\n";
//	}
//			else {
//		cout << "Tt is tie!\n";
//	}
//			break;
//	default:
//		break;
//	}
//}

//void showBalance(double balance);
//double deposit();
//double withdraw(double balance);
//
//int main() {
//
//	double balance = 0;
//	int choice = 0;
//
//	do
//	{
//		cout << "********************\n";
//		cout << "Enter your  choice: \n";
//		cout << "********************\n";
//		cout << "********************\n";
//		cout << "1. Show Balance     \n";
//		cout << "2. Deposit Money    \n";
//		cout << "3. Withdraw Money   \n";
//		cout << "4. Exit\n";
//		cin >> choice;
//
//		cin.clear();
//		fflush(stdin);
//
//		switch (choice) {
//			case 1: showBalance(balance);
//				break;
//			case 2:balance += deposit();
//				showBalance(balance);
//				break;
//			case 3:balance -= withdraw(balance);
//				showBalance(balance);
//				break;
//			case 4:cout << "Thank for you visiting\n";
//				break;
//			default:cout << "Invalid choice\n";
//		}
//	} while (choice != 4);
//	return 0;
//}
//
//void showBalance(double balance) {
//	cout << "You balance is: " << setprecision(2) <<  fixed << balance << '\n';
//}
//
//double deposit() {
//
//	double amount = 0;
//	cout << "Enter amount to be deposited: ";
//	cin >> amount;
//
//	if (amount > 0) {
//		return amount;
//	}
//	else {
//		cout << "You haven`t money!";
//		return 0;
//	}
//	return amount;
//}
//
//double withdraw(double balance) {
//
//	int amount = 0;
//
//	cout << "Enter amount to be withdrawn: ";
//	cin >> amount;
//
//	if (amount > balance) {
//		cout << "insufficient funds\n";
//		return 0;
//	}
//	else if (amount < 0) {
//		cout << "That not a valid amount\n";
//		return 0;
//	}
//	else {
//		return amount;
//	}
//}

//void printNum();
//
//int main() {
//	//尽量减少使用使用全局变量
//	int myNum = 1;
//	printNum();
//	cout << myNum;
//	printNum();
//
//	return 0;
//}
//
//void printNum() {
//	int myNum = 2;
//	cout << myNum;
//}

//int Nums(int d, int e) {
//	return d + e;
//}
//
//int ma() {
//
//	int a = 4;
//	int b = 3;
//	int c = Nums(a, b);
//
//	cout << c;
//	return 0;
//}

//void bakePizza();
//void bakePizza(string topping1);
//void bakePizza(string topping1, string topping2);
//
//int main() {
//	//重载函数
//	bakePizza("pepperoni","hait");
//	return 0;
//}
//
//void bakePizza() {
//	cout << "Here is your Pizza:\n";
//}
//
//void bakePizza(string topping1) {
//	cout << "Here is you " << topping1 << " pizza!\n";
//}
//
//void bakePizza(string topping1, string topping2) {
//	cout << "Here is you " << topping1 << " " << topping2 << " pizza!\n";
//}

//string concatString(string string1, string string2);
//
//int main() {
//
//	string firstName = "Bro";
//	string lastName = "code";
//	string fullName = concatString(firstName, lastName);//按照括号内的顺序 在函数中调用时可以不看名称是否匹配 可直接对应传参
//
//	cout << "Hello " << fullName;
//
//	return 0;
//}
//
//string concatString(string string1, string string2) {
//	return string1 + " " + string2;
//}

//double square(double length);
//double cube(double length);
////计算正方形的面积和正方体的体积
//int main() {
//	double length = 0;//初始化长度
//
//	cout << "Please enter length: ";
//	cin >> length;
//
//	double area = square(length);//面积的函数调用
//	double volume = cube(length);//体积的函数调用
//
//	cout << "Area: " << area << "cm^2\n";
//	cout << "Volume" << volume << "cm^3\n";
//
//	return 0;
//}
//
//double square(double length) {
//	return length * length;
//}
//
//double cube(double length) {
//	return length * length * length;
//}

//void HappyBirthday(string name, int age);//调用函数
//
//int main() {
//
//	string name = "Bro";
//	int age = 10;
//	HappyBirthday(name, age);//调用函数 需要加上补充进去的参数
//	return 0;
//}
//
//void HappyBirthday(string name,int age ) {
//	//函数部分 若是要将main函数中的参数添加到函数中 需要加上对应的参数
//	cout << "Happ Birthday to " << name << '\n';
//	cout << "Happ Birthday to " << name << '\n';
//	cout << "Happ Birthday to " << name << '\n';
//	cout << "Happ Birthday to " << name << '\n';
//	cout << "Happ Birthday to " << name << age <<'\n';
//}

//int main() {
//	
//	int num;//随机的数字
//	int guess;//输入的数字
//	int tries = 0;//尝试的次数，且需要进行初始化
//
//	srand(time(NULL));//随机数初始化
//	num = (rand() % 100) + 1;//计算随机数
//	cout << "++++++++++++++++++++++++++++++++++++++++++++\n";
//	do {
//		cout << "Enter a guess between (1-100):";
//		cin >> guess;//输入猜的数字
//		tries++;//尝试次数自增
//
//		if (guess > num) {
//			cout << "hight\n";
//		}
//		else if (guess < num) {
//			cout << "low\n";
//		}
//		else {
//			cout << "win and you use:" << tries << "tries\n";//成功猜出数字后的尝试次数
//		}
//	} while (guess != num);//当猜的数和随机生成的数不一致时 继续进行循环
//	cout << "++++++++++++++++++++++++++++++++++++++++++\n";
//	return 0;
//}

//int main() {
//
//	srand(time(0));
//	int randNum = rand() % 5 + 1;
//
//	switch (randNum)
//	{
//	case 1: cout << "You win a bumper 1\n";
//		break;
//	case 2: cout << "You win a bumper 2\n";
//		break;
//	case 3: cout << "You win a bumper 3\n";
//		break;
//	case 4: cout << "You win a bumper 4\n";
//		break;
//	case 5: cout << "You win a bumper 5\n";
//		break;
//	}
//	return 0;
//}

//int main() {
//	srand(time(NULL));//初始话随机数发生器
//
//	int num1 = (rand() % 6) + 1;//rand是随机数生成器
//	int num2 = (rand() % 6) + 1;
//	int num3 = (rand() % 6) + 1;
//
//	cout << num1 << '\n';
//	cout << num2 << '\n';
//	cout << num3 << '\n';
//
//	return 0;
//}
//int main() {
//
//	int rows;//行数
//	int columns;//列数
//	char symbol;//使用的图形
//
//	cout << "How many rows:";
//	cin >> rows;//输入行数
//
//	cout << "How many columns:";
//	cin >> columns;//输入列数
//
//	cout << "Enter a symbol to use:";
//	cin >> symbol;//输入输出的字符
//
//	//行数用i来进行循环，row用来限制行的数量
//	//列数用j来进行循环，column用来限制列的数量
//	for (int i = 1; i <= rows; i++) {
//		for (int j = 1; j <= columns; j++) {
//			cout << symbol;//输出循环过行列后的字符
//		}
//		cout << '\n';
//	}
//
//	return 0;
//}

//int main() {
//	//break using
//	for (int i = 1; i <= 20; i++) {
//		if (i == 13) {
//			continue;
//		}
//		cout << i << '\n';
//	}
//
//	return 0;
//}

//int main() {
//	//for loop
//	for (int i = 1; i <= 10; i+=2) {
//		cout << i << '\n';
//	}
//	cout << "Happy new year";
//	return 0;
//}

//int main() {
//	//do while 循环
//	int number;
//	do {
//		cout << "Enter a positive # :";
//		cin >> number;
//	} while (number < 0);
//	cout << "The # is " << number;
//
//
//
//
//	return 0;
//}

//int main() {
//	string name;
//	while (name.empty()) {
//		cout << "Enter your name: ";
//		getline(cin, name);
//	}
//	cout << "Hello " << name;
//	return 0;
//}

//int main() {
//	//string 类 到c++标准库查看
//	string name;
//	cout << "Enter your name:";
//	getline(cin, name);
//
//	name.append("@gamil.com");
//	name.erase(0, 3);
//	cout << name.find(' ');
//	//name.clear();
//
//	//cout << "Hello" << name;
//
//	//if (name.empty()) {
//	//	cout << "You didn`t enter your name";
//	//}
//	//else {
//	//	cout << "Hello" << name;
//	//}
//	//if (name.length() > 12) {
//	//	cout << "Your name can`t be over 12";
//	//}
//	//else {
//	//	cout << "Welcome" << name;
//	//}
//}

//int main() {
//	double temp;
//	char unit;
//
//	cout << "*************************************\n";
//	cout << "F = Fahrenheit\n";
//	cout << "C = Celsius\n";
//	cout << "What unit would you like to convert to:";
//	cin >> unit;
//	if (unit == 'F' || unit == 'f') {
//		cout << "Enter the temp in Celisus:";
//		cin >> temp;
//
//		temp = (1.8 * temp) + 32.0;
//		cout << "Temp is: " << temp << "F\n";
//	}
//	else if (unit == 'C' || unit == 'c') {
//		cout << "Enter the temp in Fahrenheit:";
//		cin >> temp;
//
//		temp = (temp - 32) / 1.8;
//		cout << "Temp is: " << temp << "C\n";
//	}
//	else {
//		cout << "Please Enter true temp";
//	}
//	cout << "*************************************";
//}

//int main() {
//	int temp;
//	cout << "Enter the temp:";
//	cin >> temp;
//
//	if (temp > 0 && temp < 30) {
//		cout << "The temp is good";
//	}
//	else{
//		cout << "The temp is bad";
//	}
//}

//int main() {
//	int number = 9;
//	number % 2 ? cout << "ODD" : cout << "EVEN";
//	//问号代表是否满足条件 中间的冒号代表根据是否满足条件来选择输出的语句
//	bool hungry = false;
//	hungry ? cout << "You are hungry" : cout << "You are full";
//	cout << (hungry ? "You are hungry" : "You are full");
//}

//int main() {
//	char op;
//	double num1;
//	double num2;
//	double result;
//
//	cout << "*******************************************\n";
//	cout << "Enter either (+ - * /)";
//	cin >> op;
//
//	cout << "Enter #1:";
//	cin >> num1;
//
//	cout << "Enter #2:";
//	cin >> num2;
//
//	switch (op)
//	{
//	case '+':
//		result = num1 + num2;
//		cout << "result: " << result << '\n';
//		break;
//	case '-':
//		result = num1 - num2;
//		cout << "result: " << result << '\n';
//		break;
//	case '*':
//		result = num1 * num2;
//		cout << "result: " << result << '\n';
//		break;
//	case '/':
//		result = num1 / num2;
//		cout << "result: " << result << '\n';
//		break;
//	default:
//		cout << "That wasn`t a valid response";
//	}
//	cout << "******************************************************";
//
//	//简单的C++计算器
//}
//int main() {
//	char grade;
//
//	cout << "What letter grade?";
//	cin >> grade;
//
//	switch (grade)
//	{
//	case 'A':
//		cout << "you did great";
//		break;
//	default:
//		cout << "Please only enter is a letter grade (A-F)";
//	}
//}

//int main() {
//	int age;
//	cout << "Enter your age :";
//
//	cin >> age;
//
//	if (age > 18 && age < 100) {
//		cout << "Welcome to the site !";
//	}
//	else if (age < 0) {
//		cout << "Your haven`t been born yet!";
//	}
//	else if (age >= 100) {
//		cout << "You are too old to enter this enter!";
//	}
//	else {
//		cout << "You are not old enough to enter!";
//	}
//}

//int main() {
//	double b;
//	double a;
//	double c;
//
//	cout << "Enter side A: ";
//	cin >> a;
//
//	cout << "Enter side B: ";
//	cin >> b;
//
//	a = pow(a, 2);
//	b = pow(b, 2);
//	c = sqrt(a + b);
//
//	cout << "side C: " << c;
//	//三角形第三边求长
//
//
//	return 0;
//}

//#include <cmath>
//using namespace std;
//
//int main() {
//	double x = 3;
//	double y = 4;
//	double z;
//	
//	z = max(x, y);
//	z = min(x, y);
//	z = pow(2, 4);
//	z = sqrt(9);
//	z = abs(-3);
//	z = round(x);
//	z = ceil(x);
//	z = floor(x);
//
//	cout << z;
//
//	return 0;
//}

//#include <string>
//using namespace std;//getline需要头文件string才能执行
//
//int main() {
//	string name;
//	int age;
//	cout << "What your name";
//	getline(cin >> ws, name);//cin >> ws是忽视所有的空白行；
//
//	cin >> age;
//	cin >> name;
//
//	cout << "Hello" << name;
//	cout << "You are " << age;
//	return 0;
//
//
//}

//using std::cout;
////基本类型转换
//int main() {
//	int correct = 8;
//	int questions = 10;
//	double score = correct / (double)questions * 100;
//
//	cout << score;
//	//double x = (int) 3.14;//浮点类型的数等于3,14的中的整数
//	//char y = 100;
//
//	//cout << x;
//	//cout << y;
//	
//}

//using std::cout;
//
//int main() {
//	int students = 20;
//
//	students = students + 1;//students += 1;students++;减法亦然
//	//students *= 2;
//	//students /= 2;
//
//	int remainder = students % 2;
//
//	cout << remainder;
//
//	cout << students;
//
//	
//}

//#include <vector>
//
//typedef std::vector<std::pair<std::string, int>> pairlist_t;
////typedef std::string text_t;
////typedef int number_t;
//using text_t = std::string;//上下可相互代替定义的变量
//using number_t = int;
//
//
//int main() {
//	pairlist_t pairlist;
//	text_t firstName = "Bro";
//	std::cout << firstName 
//}

//namespace first {
//    int x = 1;
//}
//
//namespace second {
//    int x = 2;
//}
//
//int main()
//{
//    using namespace second;//调用namespacesecond中的x变量
//    using std::cout;
//
//
//    cout << first::x;//强制使用first 中的x变量
////const 固定不变的量
//    return 0;
//}
