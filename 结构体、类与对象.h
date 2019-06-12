//analogReference	修改参考电压值
analogReference(type);

//pulseln(pin,value,[timeout])	读取一个引脚的脉冲（HIGH或LOW）持续时间
// 引脚，高低状态，超时时间		超时时间为可选参数，单位是μs，范围10μs-3min
unsigned pulseln(pin,value,timeout);



//结构声明与定义
struct People
{
	char *name;
	int age;
	float height;
}ztz1,ztz2;
People ztz3,ztz4;

//使用结构
ztz1.age = 18;
ztz1.name = "hewei";
ztz1.height = 167.9;

//联合/关联	unio结构的特点允许我们用不同的数据类型来操作同一段数据
union Myunion
{
	int ui;
	float uf;
}；

//使用union结构拆分数据
union MyUnion
{
	float f;
	byte b[4];
};
Myunion mu;

mu.f = 1.6;

EEPROM.write(0,mu.f[0]);
EEPROM.write(1,mu.f[1]);
EEPROM.write(2,mu.f[2]);
EEPROM.write(3,mu.f[3]);

union YouUnion
{
	float f;
	byte b[4];
};
YouUnion yu;

yu.b[0] = EEPROM.read(0);
yu.b[1] = EEPROM.read(1);
yu.b[2] = EEPROM.read(2);
yu.b[3] = EEPROM.read(3);

Serial.println(yu.f);


// 读写多种数据类型
//EEPROM.put(地址,数据)		EEPROM.get(地址)

// 类
class people	//class是类的关键字，people是类的名字
{
	private:			//私有,代码只能在类的内部调用，外部程序不能使用
		String _name;			//私有成员属性
	
	public:				//公有,外部可以调用
		void setName(String);	//成员方法
		String getName(); 
};

void people::setName(String na)//::为域操作符
{
	if(na.length()>3)
	{
		this->_name = na;//本对象的成员属性_name
	}
	else
	{
		this->_name = "";
	}
}

String People::getName()
{
	return this->_name;
}

people xh;
people xb;

xh.setName("xiaohong");
xb.setName("xiaobai");

Serial.println(xh,getName());//输出

// 对象



































