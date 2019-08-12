boolean 1字节
int		2字节
float	4字节
sizeof() 返回 字节Byte

// 指针储存的是占用内存的地址，这个地址占用的空间大小都是2字节
*取值运算符
&取地址符

//指针数组首先是一个数组，含有的元素是指针
char *c[] = {"Hello","World"};//指针数组

//数组指针首先是一个指针，指向的是一个数组
char (*e)[4];//数组指针
char d[][4] = {"Say","hi"};
e = d;
sreial.println(*e);//输出Say
e++;
serial.println(*e);//输出hi



char abc[] = {'a','b','c'};
float flt[] = {0.1,0.2,0.3};
float *ptrF = NULL;
*ptrF = flt;//可以简写为：float *ptrF = flt;

Serial.println(abc);		//abc
Serial.println(abc[0]);		//a
Serial.println(abc[1]);		//b
Serial.println(abc[2]);		//c
Serial.println(*abc);		//a
Serial.println(*(abc+1));	//b
Serial.println(*(abc+2));	//c

Serial.println((long)abc);//读取在内存中的地址，数组本身就是首元素的地址
Serial.println((long)&abc[0]);//取其他元素的地址
Serial.println((long)&abc[1]);
Serial.println((long)&abc[2]);

Serial.println(*ptrF);		//输出元素0
Serial.println(*(ptrF+1));	//输出元素1
Serial.println(*(ptrF+2));	//输出元素2