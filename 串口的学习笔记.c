//从串口缓冲区返回第一个有效的int类型的数据
n = Serial.parseInt()
//从串口缓冲区返回第一个有效的float类型的数据
n = Serial.parseFloat()
//从串口缓冲区得到某个特定的数据，例如FE、0D
//从串口缓冲区读取数据，直到读取到指定的字符串。
Serial.find("FE");
Serial.find("0D");
