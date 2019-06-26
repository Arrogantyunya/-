char abc[] = {'a','b','c'};
float flt[] = {0.1,0.2,0.3};
float *ptrF = NULL;
ptrF = flt;//可以简写为：float *ptrF = flt;

Serial.println(abc);		//abc
Serial.println(abc[0]);		//a
Serial.println(abc[1]);		//b
Serial.println(abc[2]);		//c
Serial,println(*abc);		//a
Serial,println(*(abc+1));	//b
Serial,println(*(abc+2));	//c

Serial.println((long)abc);//读取在内存中的地址，数组本身就是首元素的地址
Serial.println((long)&abc[0]);//取其他元素的地址
Serial.println((long)&abc[1]);
Serial.println((long)&abc[2]);

Serial.println(*ptrF);		//输出元素0
Serial.println(*(ptrF+1));	//输出元素1
Serial.println(*(ptrF+2));	//输出元素2