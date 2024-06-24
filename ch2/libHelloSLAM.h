// library 파일(.a, .so)만 있으면 어떤 함수가 있는지, 호출의 형식이 뭔지 알 수 없다
// library file은 컴파일된 이진 함수가 포함된 압축 패키지일뿐
// 누군가가 library를 사용하기 위해 라이브러리에 무엇이 있는지 설명하는 header 파일이 필요하다
// 라이브러리 사용자는 header와 라이브러리 파일만 있으면 호출 가능

#ifndef LIBHELLOSLAM_H_
#define LIBHELLOSLAM_H_
// 上面的宏定义是为了防止重复引用这个头文件而引起的重定义错误
// 위의 매크로 정의는 이 헤더 파일의 중복 인용으로 인한 재정의 오류를 방지하기 위한 것

// 打印一句hello的函数
// Hello 함수 출력
void printHello();

#endif