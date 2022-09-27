//C++기초

1. 캡슐화(Encapsulation)
    
-데이터와 함수 등 객체 연결
-정보 은닉(Information Hiding)
    
2. 추상화(Abstraction)
인터페이스(Interface)와 구현(Implementation) 분리
C++ 언어는 가상 함수를 통한 클래스의 상속을 통하여 추상화 제공

3. 상속(Inheritance)
기존에 정의된 클래스를 이용하여 새로운 클래스 정의
상위 클래스(Super Class), 기본 클래스(Base Class), 부모 클래스(Parent Class)
하위 클래스(Sub Class), 유도 클래스(Derive Class), 자식 클래스(Child Class)
다중 상속(Multiple Inheritance): 두 개 이상의 부모 클래스로부터 상속받는 것으로 지정한 부모 클래스의 속성을 모두 물려받음.
    
4. 다형성(Polymorphism)
다른 타입에 대해 동일한 방식의 접근하는 동일 인터페이스 제공


//코드시작
// mfc_0908_2week.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 소스파일.cpp

#include <iostream> // iostream에 선언된 표준 출력을 담당
using namespace std; //std는 클래스로 cout함수를 쓸 때 함께 써주어야 한다. (std::cout) 하지만 'using namespace std'를 맨위에 선언해줌으로써, 이를 cout만 적어도 된다.
                     //내가 std를 계속 쓰겠습니다 라고 말하는 것이다.


int main() // int는 return이 있어야한다.
{
    int midscore = 0;
    int finalscore = 0;
    int ucheck = 0;
    int score = 0;
    cout << "중간성적 : ";  //"cout << 값" 형식으로 출력
      cin >> midscore;
    cout << "기말성적: ";
      cin >> finalscore;
    cout << "출석점수 : ";
      cin >> ucheck;

      score = (midscore + finalscore + ucheck) / 3; // 나누기 할 때, 소수점이 필요하다면 float를 쓰도록 한다. 이 때 등호기준 앞뒤에 float이 선언되어야한다. python은 안해도됌.
      if (score >= 90)
          cout << "성적이 90점 이상입니다."; 

      else if (score >= 80)
          cout << "성적이 80점 이상입니다.";

      else if (score >= 70)
          cout << "성적이 70점 이상입니다.";
      else
          cout << "성적을 다시 입력해주세요.";

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
