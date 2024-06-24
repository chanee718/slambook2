#include <iostream>   //standard IO stream library (cout, cin, cerr 등의 객체 정의)
using namespace std;  //using standard namespace(std) - std::cout 대신 cout 사용 가능

int main(int argc, char **argv) {   //argc: 명령줄 인자 개수  argv: 명령줄 인자의 문자열 포인터 배열 (argv[0] = 실제 프로그램, argv[1] 부터 명령어)
  cout << "Hello SLAM!" << endl; 
  //cout: stream insert (출력할 내용을 cout stream에 insert)
  //endl: newline 출력 + 출력 stream flush
  return 0;
}
