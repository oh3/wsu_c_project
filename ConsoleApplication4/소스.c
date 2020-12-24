#include <stdio.h>
// C 표준 라이브러리 중 하나인 stdio.h 라는 
// 헤더 파일에 선언된 내용을 포함

// 변수선언
int i = 0;
int a, b, c, d, e, f = 0;
int aw, bw, cw, dw, ew, fw = 0;  // 지폐 권수 차례로 , 50,10,1,5 ..
int total = 0;  // 총 잔고금액
int start = 0;  // 시작 메뉴
int select = 0; // 선택 메뉴
int save = 0;	// 종료 메뉴
int price = 0;	 // 상품 가격
int choice = 0;  // 두번째 메뉴 선택
int hap = 0;	// 선택한 물품 금액 합
int won50000, won10000, won5000, won1000, won500, won100 = 0;

//stor 구조체
struct stor {
	char *name;
	char *source;
	int price;  //가격
	int number; //진열된 상품
	int plus;   //창고 입고
	int make;	//창고 -> 진열대로
};

//메인함수
int main()
{
	struct stor s[5];
	s[0].name = "음료";
	s[0].source = "음료";
	s[0].price = 1000;
	s[0].number = 0;
	s[0].plus = 0;
	s[0].make = 0;
	s[1].name = "과자";
	s[1].source = "과자";
	s[1].price = 1500;
	s[1].number = 0;
	s[1].plus = 0;
	s[1].make = 0;
	s[2].name = "라면";
	s[2].source = "라면";
	s[2].price = 1300;
	s[2].number = 0;
	s[2].plus = 0;
	s[2].make = 0;
	s[3].name = "도시락";
	s[3].source = "도시락";
	s[3].price = 1200;
	s[3].number = 0;
	s[3].plus = 0;
	s[3].make = 0;
	s[4].name = "생활용품";
	s[4].source = "생활용품";
	s[4].price = 1800;
	s[4].number = 0;
	s[4].plus = 0;
	s[4].make = 0;
	while (start == 0)
	{
		printf("==================================\n");
		printf(" (잔고확인)50000원권 몇개 있습니까? : ");
		scanf("%d", &a);
		printf(" (잔고확인)10000원권 몇개 있습니까? : ");
		scanf("%d", &b);
		printf(" (잔고확인)5000원권 몇개 있습니까? : ");
		scanf("%d", &c);
		printf(" (잔고확인)1000원권 몇개 있습니까? : ");
		scanf("%d", &d);
		printf(" (잔고확인)500원동전 몇개 있습니까? : ");
		scanf("%d", &e);
		printf(" (잔고확인)100원동전 몇개 있습니까? : ");
		scanf("%d", &f);
		total = (a * 50000) + (b * 10000) + (c * 5000) + (d * 1000) + (e * 500) + (f * 100);
		printf("현재 총 %d원 있습니다.\n", total);
		printf("==================================\n");
		printf("영업을 시작해도 되겠습니까? ok = 1, no =0 \n");
		scanf("%d", &start);
		system("cls");
	}

	// 메인 프로그램
	// 편의점 재고관리 시스템 시작
	while (start == 1)
	{
		printf("==================================\n");
		printf("===      편의점 재고관리       ===\n");
		printf("===         시 스 템           ===\n");
		printf("==================================\n");
		printf("1.상품선택\n");
		printf("2.진열상품관리\n");
		printf("3.창고(발주)관리\n");
		printf("4.계산하기\n");
		printf("5.잔고관리\n");
		printf("6.종료하기\n");
		printf("7.전체보기\n");
		scanf("%d", &select);
		printf("==================================\n");
		system("cls");
		if (select == 1)
		{
			while (save != 6)
			{
				printf("\n상품을 골라주세요.\n");
				printf("1.음료\n");
				printf("2.과자\n");
				printf("3.라면\n");
				printf("4.도시락\n");
				printf("5.생활용품\n");
				printf("6.그만고르겠습니다\n");
				scanf("%d", &save);
				switch (save)
				{
				case 1:
					if (s[0].number <= 0)
					{
						printf("\n진열대의 재고가 부족합니다.\n");
						printf("\n창고에서 상품을 꺼내주세요\n");
						break;
					}
					price = price + s[0].price;
					s[0].number = s[0].number - 1;
					system("cls");
					printf("==================================\n");
					printf("선택한 음료의 갯수는 %d입니다.\n", s[0].number);
					printf("진열된 음료의 갯수는 %d입니다.\n", s[0].number);
					printf("==================================\n");
					break;
				case 2:
					if (s[1].number <= 0)
					{
						printf("\n진열대의 재고가 부족합니다.\n");
						printf("\n창고에서 상품을 꺼내주세요\n");
						break;
					}
					price = price + s[1].price;
					s[1].number = s[1].number - 1;
					system("cls");
					printf("==================================\n");
					printf("선택한 과자의 갯수는 %d입니다.\n", s[1].number);
					printf("진열된 과자의 갯수는 %d입니다.\n", s[1].number);
					printf("==================================\n");
					break;
				case 3:
					if (s[2].number <= 0)
					{
						printf("\n진열대의 재고가 부족합니다.\n");
						printf("\n창고에서 상품을 꺼내주세요\n");
						break;
					}
					price = price + s[2].price;
					s[2].number = s[2].number - 1;
					system("cls");
					printf("==================================\n");
					printf("선택한 라면의 갯수는 %d입니다.\n", s[2].number);
					printf("진열된 라면의 갯수는 %d입니다.\n", s[2].number);
					printf("==================================\n");
					break;
				case 4:
					if (s[3].number <= 0)
					{
						printf("\n진열대의 재고가 부족합니다.\n");
						printf("\n창고에서 상품을 꺼내주세요\n");
						break;
					}
					price = price + s[3].price;
					s[3].number = s[3].number - 1;
					system("cls");
					printf("==================================\n");
					printf("선택한 도시락의 갯수는 %d입니다.\n", s[3].number);
					printf("진열된 도시락의 갯수는 %d입니다.\n", s[3].number);
					printf("==================================\n");
					break;
				case 5:
					if (s[4].number <= 0)
					{
						printf("\n진열대의 재고가 부족합니다.\n");
						printf("\n창고에서 상품을 꺼내주세요\n");
						break;
					}
					price = price + s[4].price;
					s[4].number = s[4].number - 1;
					system("cls");
					printf("==================================\n");
					printf("선택한 생활용품의 갯수는 %d입니다.\n", s[4].number );
					printf("진열된 생활용품의 갯수는 %d입니다.\n", s[4].number);
					printf("==================================\n");
					break;
				case 6:
					system("cls");
					break;
				default:
					system("cls");
					printf("잘못입력하셨습니다.\n");
					select = 0;
					break;
				}//switch
			}//while
			save = 0;
		}
		// 진열된 상품 관리
		// 창고에서 진열대로 상품을 이동시키는 기능.
		else if (select == 2)
		{
			while (select == 2)
			{
				printf("진열된 상품 관리를 시작합니다.\n");
				printf("어떤상품을 진열대로 꺼내시겠습니까? \n");
				printf("1.음료\n");
				printf("2.과자\n");
				printf("3.라면\n");
				printf("4.도시락\n");
				printf("5.생활용품\n");
				printf("6.진열된 상품 관리종료\n");
				scanf("%d", &choice);

				// 진열된 상품 선택 실패
				// 진열된 상품이 부족지 발주 메시지 출력
				if (choice == 1)
				{
					if (s[0].make <= 0)
					{
						printf("\n창고의 재고가 부족합니다.\n");
						printf("창고에서 상품을 발주해주세요\n");
						break;
					}
					// 진열된 상품 선택 성공
					// 진열된 상품이 선택 되었고, 남은 갯수 출력
					s[0].make = s[0].make - 1;
					s[0].number = s[0].number + 1;
					system("cls");
					printf("============================\n");
					printf("창고의 음료 갯수는 %d입니다.\n", s[0].make);
					printf("진열된 음료의 갯수는 %d입니다.\n", s[0].number);
					printf("============================\n");
				}
				// 진열된 상품 선택 실패
				// 진열된 상품이 부족지 발주 메시지 출력
				else if (choice == 2)
				{
					if (s[1].make <= 0)
					{
						printf("\n창고의 재고가 부족합니다.\n");
						printf("창고에서 상품을 발주해주세요\n");
						break;
					}
					// 진열된 상품 선택 성공
					// 진열된 상품이 선택 되었고, 남은 갯수 출력
					s[1].make = s[1].make - 1;
					s[1].number = s[1].number + 1;
					system("cls");
					printf("============================\n");
					printf("창고의 과자 갯수는 %d입니다.\n", s[1].make);
					printf("진열된 과자의 갯수는 %d입니다.\n", s[1].number);
					printf("============================\n");
				}
				// 진열된 상품 선택 실패
				// 진열된 상품이 부족지 발주 메시지 출력
				else if (choice == 3)
				{
					if (s[2].make <= 0)
					{
						printf("\n창고의 재고가 부족합니다.\n");
						printf("창고에서 상품을 발주해주세요\n");
						break;
					}
					// 진열된 상품 선택 성공
					// 진열된 상품이 선택 되었고, 남은 갯수 출력
					s[2].make = s[2].make - 1;
					s[2].number = s[2].number + 1;
					system("cls");
					printf("============================\n");
					printf("창고의 라면 갯수는 %d입니다.\n", s[2].make);
					printf("진열된 라면의 갯수는 %d입니다.\n", s[2].number);
					printf("============================\n");
				}
				// 진열된 상품 선택 실패
				// 진열된 상품이 부족지 발주 메시지 출력
				else if (choice == 4)
				{
					if (s[3].make <= 0)
					{
						printf("\n창고의 재고가 부족합니다.\n");
						printf("창고에서 상품을 발주해주세요\n");
						break;
					}
					// 진열된 상품 선택 성공
					// 진열된 상품이 선택 되었고, 남은 갯수 출력
					s[3].make = s[3].make - 1;
					s[3].number = s[3].number + 1;
					system("cls");
					printf("============================\n");
					printf("창고의 도시락 갯수는 %d입니다.\n", s[3].make);
					printf("진열된 도시락의 갯수는 %d입니다.\n", s[3].number);
					printf("============================\n");
				}
				// 진열된 상품 선택 실패
				// 진열된 상품이 부족지 발주 메시지 출력
				else if (choice == 5)
				{
					if (s[4].make <= 0)
					{
						printf("\n창고의 재고가 부족합니다.\n");
						printf("창고에서 상품을 발주해주세요\n");
						break;
					}
					// 진열된 상품 선택 성공
					// 진열된 상품이 선택 되었고, 남은 갯수 출력
					s[4].number = s[4].number + 1;
					s[4].make = s[4].make - 1;
					system("cls");
					printf("============================\n");
					printf("창고의 생활용품 갯수는 %d입니다.\n", s[4].make);
					printf("진열된 생활용품의 갯수는 %d입니다.\n", s[4].number);
					printf("============================\n");
				}
				// 종료
				else if (choice == 6)
				{
					system("cls");
					break;
				}
				else
				{
					system("cls");
					printf("잘못입력하셨습니다.\n\n");
					break;
				}
			}		// 창고(발주)관리기능
		}// 창고에서 물건을 발주하는 기능
		else if (select == 3)
		{
			printf("상품발주를 시작합니다.\n");
			for (i = 0; i<5; i++)
			{
				printf("%s 는 몇개 추가하시겠습니까?: ", s[i].source);
				scanf("%d", &s[i].plus);
				s[i].make = s[i].make + s[i].plus;
			}
			// 프로그램이 끝날 때
			// 화면 지움
			system("cls");
		}
		// 계산하기
		// 상품선택 후 계산해주는 기능
		else if (select == 4)
		{
			printf("계산합니다.\n");
			printf("총 %d 원 입니다. \n", price);
			printf("50000,10000,5000,1000,500,100순으로 받은갯수를 입력하세요.\n");
			printf("==================================\n");
			printf("50000원 권 :");
			scanf(" %d", &aw);
			printf("10000원 권 :");
			scanf("%d", &bw);
			printf("5000원 권 :");
			scanf("%d", &cw);
			printf("1000원 권 :");
			scanf("%d", &dw);
			printf("500원 개 :");
			scanf("%d", &ew);
			printf("100원 개 :");
			scanf("%d", &fw);
			printf("==================================\n");
			hap = 50000 * aw + 10000 * bw + 5000 * cw + 1000 * dw + 500 * ew + 100 * fw;
			printf("==================================\n");
			printf("총 %d받았습니다.\n", hap);
			if (hap<price)
			{
				printf("%d원 더 내주세요.\n", price - hap);
			}
			if (price <= hap)
			{
				printf("%d 거슬러 드리겠습니다.\n", hap - price);
				a = a + aw;
				b = b + bw;
				c = c + cw;
				d = d + dw;
				e = e + ew;
				f = f + fw;
				won50000 = (hap - price) / 50000;
				won10000 = ((hap - price) % 50000) / 10000;
				won5000 = (((hap - price) % 50000) % 10000) / 5000;
				won1000 = ((((hap - price) % 50000) % 10000) % 5000) / 1000;
				won500 = (((((hap - price) % 50000) % 10000) % 5000) % 1000) / 500;
				won100 = ((((((hap - price) % 50000) % 10000) % 5000) % 1000) % 500) / 100;
				a = a - won50000;
				b = b - won10000;
				c = c - won5000;
				d = d - won1000;
				e = e - won500;
				f = f - won100;
				if (a<0 || b<0 || c<0 || d<0 || e<0 || f<0)
				{
					printf("\n잔고가부족합니다.\n");
					if (a<0)
					{
						printf("\n50000원권 갯수부족합니다.\n");
					}
					if (b<0)
					{
						printf("\n10000원권 갯수부족합니다.\n");
					}
					if (c<0)
					{
						printf("\n5000원권 갯수부족합니다.\n");
					}
					if (d<0)
					{
						printf("\n1000원권 갯수부족합니다.\n");
					}
					if (e<0)
					{
						printf("\n500원권 갯수부족합니다.\n");
					}
					if (f<0)
					{
						printf("\n100원권 갯수부족합니다.\n");
					}
					a = a - aw;
					b = b - bw;
					c = c - cw;
					d = d - dw;
					e = e - ew;
					f = f - fw;
					a = a + won50000;
					b = b + won10000;
					c = c + won5000;
					d = d + won1000;
					e = e + won500;
					f = f + won100;
				}//if
				else
				{
					printf("고객에게 내어줄 잔돈은 다음과 같습니다.\n");
					printf("오만원권 : %d 매\n", won50000);
					printf("만원권 : %d 매\n", won10000);
					printf("오천원권 : %d 매\n", won5000);
					printf("천원권 : %d 매\n", won1000);
					printf("오백원 : %d 매\n", won500);
					printf("백원 : %d 매\n", won100);
					price = 0;
				}
			}//if
		}//else if


		// 잔고관리
		// 현재 잔고에 있는 지폐를 출력.
		else if (select == 5)
		{
			printf("잔고관리를시작합니다.\n");
			printf("오만원권 : %d 매\n", a);
			printf("만원권 : %d 매\n", b);
			printf("오천원권 : %d 매\n", c);
			printf("천원권 : %d 매\n", d);
			printf("오백원 : %d 매\n", e);
			printf("백원 : %d 매\n", f);
		}
		// 프로그램종료
		else if (select == 6)
		{
			printf("프로그램종료.\n");
			start = 0;
			break;
		}
		// 전체보기
		else if (select == 7)
		{
			for (i = 0; i<5; i++)
			{
				printf("==================================\n");
				printf("상품명: %s \n", s[i].name);
				printf("상품가격: %d \n", s[i].price);
				printf("진열대 재고 수량: %d \n", s[i].number);
				printf("창고 재고 수량: %d \n", s[i].make);
				printf("==================================\n");
			}
		}
		else
		{
			printf("잘못입력하셨습니다.\n");
		}
	}//while
}//main

//구조체 이해
//소스 이해
//소스코드에 대한이해
