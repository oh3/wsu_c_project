#include <stdio.h>
// C ǥ�� ���̺귯�� �� �ϳ��� stdio.h ��� 
// ��� ���Ͽ� ����� ������ ����

// ��������
int i = 0;
int a, b, c, d, e, f = 0;
int aw, bw, cw, dw, ew, fw = 0;  // ���� �Ǽ� ���ʷ� , 50,10,1,5 ..
int total = 0;  // �� �ܰ�ݾ�
int start = 0;  // ���� �޴�
int select = 0; // ���� �޴�
int save = 0;	// ���� �޴�
int price = 0;	 // ��ǰ ����
int choice = 0;  // �ι�° �޴� ����
int hap = 0;	// ������ ��ǰ �ݾ� ��
int won50000, won10000, won5000, won1000, won500, won100 = 0;

//stor ����ü
struct stor {
	char *name;
	char *source;
	int price;  //����
	int number; //������ ��ǰ
	int plus;   //â�� �԰�
	int make;	//â�� -> �������
};

//�����Լ�
int main()
{
	struct stor s[5];
	s[0].name = "����";
	s[0].source = "����";
	s[0].price = 1000;
	s[0].number = 0;
	s[0].plus = 0;
	s[0].make = 0;
	s[1].name = "����";
	s[1].source = "����";
	s[1].price = 1500;
	s[1].number = 0;
	s[1].plus = 0;
	s[1].make = 0;
	s[2].name = "���";
	s[2].source = "���";
	s[2].price = 1300;
	s[2].number = 0;
	s[2].plus = 0;
	s[2].make = 0;
	s[3].name = "���ö�";
	s[3].source = "���ö�";
	s[3].price = 1200;
	s[3].number = 0;
	s[3].plus = 0;
	s[3].make = 0;
	s[4].name = "��Ȱ��ǰ";
	s[4].source = "��Ȱ��ǰ";
	s[4].price = 1800;
	s[4].number = 0;
	s[4].plus = 0;
	s[4].make = 0;
	while (start == 0)
	{
		printf("==================================\n");
		printf(" (�ܰ�Ȯ��)50000���� � �ֽ��ϱ�? : ");
		scanf("%d", &a);
		printf(" (�ܰ�Ȯ��)10000���� � �ֽ��ϱ�? : ");
		scanf("%d", &b);
		printf(" (�ܰ�Ȯ��)5000���� � �ֽ��ϱ�? : ");
		scanf("%d", &c);
		printf(" (�ܰ�Ȯ��)1000���� � �ֽ��ϱ�? : ");
		scanf("%d", &d);
		printf(" (�ܰ�Ȯ��)500������ � �ֽ��ϱ�? : ");
		scanf("%d", &e);
		printf(" (�ܰ�Ȯ��)100������ � �ֽ��ϱ�? : ");
		scanf("%d", &f);
		total = (a * 50000) + (b * 10000) + (c * 5000) + (d * 1000) + (e * 500) + (f * 100);
		printf("���� �� %d�� �ֽ��ϴ�.\n", total);
		printf("==================================\n");
		printf("������ �����ص� �ǰڽ��ϱ�? ok = 1, no =0 \n");
		scanf("%d", &start);
		system("cls");
	}

	// ���� ���α׷�
	// ������ ������ �ý��� ����
	while (start == 1)
	{
		printf("==================================\n");
		printf("===      ������ ������       ===\n");
		printf("===         �� �� ��           ===\n");
		printf("==================================\n");
		printf("1.��ǰ����\n");
		printf("2.������ǰ����\n");
		printf("3.â��(����)����\n");
		printf("4.����ϱ�\n");
		printf("5.�ܰ����\n");
		printf("6.�����ϱ�\n");
		printf("7.��ü����\n");
		scanf("%d", &select);
		printf("==================================\n");
		system("cls");
		if (select == 1)
		{
			while (save != 6)
			{
				printf("\n��ǰ�� ����ּ���.\n");
				printf("1.����\n");
				printf("2.����\n");
				printf("3.���\n");
				printf("4.���ö�\n");
				printf("5.��Ȱ��ǰ\n");
				printf("6.�׸����ڽ��ϴ�\n");
				scanf("%d", &save);
				switch (save)
				{
				case 1:
					if (s[0].number <= 0)
					{
						printf("\n�������� ��� �����մϴ�.\n");
						printf("\nâ���� ��ǰ�� �����ּ���\n");
						break;
					}
					price = price + s[0].price;
					s[0].number = s[0].number - 1;
					system("cls");
					printf("==================================\n");
					printf("������ ������ ������ %d�Դϴ�.\n", s[0].number);
					printf("������ ������ ������ %d�Դϴ�.\n", s[0].number);
					printf("==================================\n");
					break;
				case 2:
					if (s[1].number <= 0)
					{
						printf("\n�������� ��� �����մϴ�.\n");
						printf("\nâ���� ��ǰ�� �����ּ���\n");
						break;
					}
					price = price + s[1].price;
					s[1].number = s[1].number - 1;
					system("cls");
					printf("==================================\n");
					printf("������ ������ ������ %d�Դϴ�.\n", s[1].number);
					printf("������ ������ ������ %d�Դϴ�.\n", s[1].number);
					printf("==================================\n");
					break;
				case 3:
					if (s[2].number <= 0)
					{
						printf("\n�������� ��� �����մϴ�.\n");
						printf("\nâ���� ��ǰ�� �����ּ���\n");
						break;
					}
					price = price + s[2].price;
					s[2].number = s[2].number - 1;
					system("cls");
					printf("==================================\n");
					printf("������ ����� ������ %d�Դϴ�.\n", s[2].number);
					printf("������ ����� ������ %d�Դϴ�.\n", s[2].number);
					printf("==================================\n");
					break;
				case 4:
					if (s[3].number <= 0)
					{
						printf("\n�������� ��� �����մϴ�.\n");
						printf("\nâ���� ��ǰ�� �����ּ���\n");
						break;
					}
					price = price + s[3].price;
					s[3].number = s[3].number - 1;
					system("cls");
					printf("==================================\n");
					printf("������ ���ö��� ������ %d�Դϴ�.\n", s[3].number);
					printf("������ ���ö��� ������ %d�Դϴ�.\n", s[3].number);
					printf("==================================\n");
					break;
				case 5:
					if (s[4].number <= 0)
					{
						printf("\n�������� ��� �����մϴ�.\n");
						printf("\nâ���� ��ǰ�� �����ּ���\n");
						break;
					}
					price = price + s[4].price;
					s[4].number = s[4].number - 1;
					system("cls");
					printf("==================================\n");
					printf("������ ��Ȱ��ǰ�� ������ %d�Դϴ�.\n", s[4].number );
					printf("������ ��Ȱ��ǰ�� ������ %d�Դϴ�.\n", s[4].number);
					printf("==================================\n");
					break;
				case 6:
					system("cls");
					break;
				default:
					system("cls");
					printf("�߸��Է��ϼ̽��ϴ�.\n");
					select = 0;
					break;
				}//switch
			}//while
			save = 0;
		}
		// ������ ��ǰ ����
		// â���� ������� ��ǰ�� �̵���Ű�� ���.
		else if (select == 2)
		{
			while (select == 2)
			{
				printf("������ ��ǰ ������ �����մϴ�.\n");
				printf("���ǰ�� ������� �����ðڽ��ϱ�? \n");
				printf("1.����\n");
				printf("2.����\n");
				printf("3.���\n");
				printf("4.���ö�\n");
				printf("5.��Ȱ��ǰ\n");
				printf("6.������ ��ǰ ��������\n");
				scanf("%d", &choice);

				// ������ ��ǰ ���� ����
				// ������ ��ǰ�� ������ ���� �޽��� ���
				if (choice == 1)
				{
					if (s[0].make <= 0)
					{
						printf("\nâ���� ��� �����մϴ�.\n");
						printf("â���� ��ǰ�� �������ּ���\n");
						break;
					}
					// ������ ��ǰ ���� ����
					// ������ ��ǰ�� ���� �Ǿ���, ���� ���� ���
					s[0].make = s[0].make - 1;
					s[0].number = s[0].number + 1;
					system("cls");
					printf("============================\n");
					printf("â���� ���� ������ %d�Դϴ�.\n", s[0].make);
					printf("������ ������ ������ %d�Դϴ�.\n", s[0].number);
					printf("============================\n");
				}
				// ������ ��ǰ ���� ����
				// ������ ��ǰ�� ������ ���� �޽��� ���
				else if (choice == 2)
				{
					if (s[1].make <= 0)
					{
						printf("\nâ���� ��� �����մϴ�.\n");
						printf("â���� ��ǰ�� �������ּ���\n");
						break;
					}
					// ������ ��ǰ ���� ����
					// ������ ��ǰ�� ���� �Ǿ���, ���� ���� ���
					s[1].make = s[1].make - 1;
					s[1].number = s[1].number + 1;
					system("cls");
					printf("============================\n");
					printf("â���� ���� ������ %d�Դϴ�.\n", s[1].make);
					printf("������ ������ ������ %d�Դϴ�.\n", s[1].number);
					printf("============================\n");
				}
				// ������ ��ǰ ���� ����
				// ������ ��ǰ�� ������ ���� �޽��� ���
				else if (choice == 3)
				{
					if (s[2].make <= 0)
					{
						printf("\nâ���� ��� �����մϴ�.\n");
						printf("â���� ��ǰ�� �������ּ���\n");
						break;
					}
					// ������ ��ǰ ���� ����
					// ������ ��ǰ�� ���� �Ǿ���, ���� ���� ���
					s[2].make = s[2].make - 1;
					s[2].number = s[2].number + 1;
					system("cls");
					printf("============================\n");
					printf("â���� ��� ������ %d�Դϴ�.\n", s[2].make);
					printf("������ ����� ������ %d�Դϴ�.\n", s[2].number);
					printf("============================\n");
				}
				// ������ ��ǰ ���� ����
				// ������ ��ǰ�� ������ ���� �޽��� ���
				else if (choice == 4)
				{
					if (s[3].make <= 0)
					{
						printf("\nâ���� ��� �����մϴ�.\n");
						printf("â���� ��ǰ�� �������ּ���\n");
						break;
					}
					// ������ ��ǰ ���� ����
					// ������ ��ǰ�� ���� �Ǿ���, ���� ���� ���
					s[3].make = s[3].make - 1;
					s[3].number = s[3].number + 1;
					system("cls");
					printf("============================\n");
					printf("â���� ���ö� ������ %d�Դϴ�.\n", s[3].make);
					printf("������ ���ö��� ������ %d�Դϴ�.\n", s[3].number);
					printf("============================\n");
				}
				// ������ ��ǰ ���� ����
				// ������ ��ǰ�� ������ ���� �޽��� ���
				else if (choice == 5)
				{
					if (s[4].make <= 0)
					{
						printf("\nâ���� ��� �����մϴ�.\n");
						printf("â���� ��ǰ�� �������ּ���\n");
						break;
					}
					// ������ ��ǰ ���� ����
					// ������ ��ǰ�� ���� �Ǿ���, ���� ���� ���
					s[4].number = s[4].number + 1;
					s[4].make = s[4].make - 1;
					system("cls");
					printf("============================\n");
					printf("â���� ��Ȱ��ǰ ������ %d�Դϴ�.\n", s[4].make);
					printf("������ ��Ȱ��ǰ�� ������ %d�Դϴ�.\n", s[4].number);
					printf("============================\n");
				}
				// ����
				else if (choice == 6)
				{
					system("cls");
					break;
				}
				else
				{
					system("cls");
					printf("�߸��Է��ϼ̽��ϴ�.\n\n");
					break;
				}
			}		// â��(����)�������
		}// â���� ������ �����ϴ� ���
		else if (select == 3)
		{
			printf("��ǰ���ָ� �����մϴ�.\n");
			for (i = 0; i<5; i++)
			{
				printf("%s �� � �߰��Ͻðڽ��ϱ�?: ", s[i].source);
				scanf("%d", &s[i].plus);
				s[i].make = s[i].make + s[i].plus;
			}
			// ���α׷��� ���� ��
			// ȭ�� ����
			system("cls");
		}
		// ����ϱ�
		// ��ǰ���� �� ������ִ� ���
		else if (select == 4)
		{
			printf("����մϴ�.\n");
			printf("�� %d �� �Դϴ�. \n", price);
			printf("50000,10000,5000,1000,500,100������ ���������� �Է��ϼ���.\n");
			printf("==================================\n");
			printf("50000�� �� :");
			scanf(" %d", &aw);
			printf("10000�� �� :");
			scanf("%d", &bw);
			printf("5000�� �� :");
			scanf("%d", &cw);
			printf("1000�� �� :");
			scanf("%d", &dw);
			printf("500�� �� :");
			scanf("%d", &ew);
			printf("100�� �� :");
			scanf("%d", &fw);
			printf("==================================\n");
			hap = 50000 * aw + 10000 * bw + 5000 * cw + 1000 * dw + 500 * ew + 100 * fw;
			printf("==================================\n");
			printf("�� %d�޾ҽ��ϴ�.\n", hap);
			if (hap<price)
			{
				printf("%d�� �� ���ּ���.\n", price - hap);
			}
			if (price <= hap)
			{
				printf("%d �Ž��� �帮�ڽ��ϴ�.\n", hap - price);
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
					printf("\n�ܰ������մϴ�.\n");
					if (a<0)
					{
						printf("\n50000���� ���������մϴ�.\n");
					}
					if (b<0)
					{
						printf("\n10000���� ���������մϴ�.\n");
					}
					if (c<0)
					{
						printf("\n5000���� ���������մϴ�.\n");
					}
					if (d<0)
					{
						printf("\n1000���� ���������մϴ�.\n");
					}
					if (e<0)
					{
						printf("\n500���� ���������մϴ�.\n");
					}
					if (f<0)
					{
						printf("\n100���� ���������մϴ�.\n");
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
					printf("������ ������ �ܵ��� ������ �����ϴ�.\n");
					printf("�������� : %d ��\n", won50000);
					printf("������ : %d ��\n", won10000);
					printf("��õ���� : %d ��\n", won5000);
					printf("õ���� : %d ��\n", won1000);
					printf("����� : %d ��\n", won500);
					printf("��� : %d ��\n", won100);
					price = 0;
				}
			}//if
		}//else if


		// �ܰ����
		// ���� �ܰ� �ִ� ���� ���.
		else if (select == 5)
		{
			printf("�ܰ�����������մϴ�.\n");
			printf("�������� : %d ��\n", a);
			printf("������ : %d ��\n", b);
			printf("��õ���� : %d ��\n", c);
			printf("õ���� : %d ��\n", d);
			printf("����� : %d ��\n", e);
			printf("��� : %d ��\n", f);
		}
		// ���α׷�����
		else if (select == 6)
		{
			printf("���α׷�����.\n");
			start = 0;
			break;
		}
		// ��ü����
		else if (select == 7)
		{
			for (i = 0; i<5; i++)
			{
				printf("==================================\n");
				printf("��ǰ��: %s \n", s[i].name);
				printf("��ǰ����: %d \n", s[i].price);
				printf("������ ��� ����: %d \n", s[i].number);
				printf("â�� ��� ����: %d \n", s[i].make);
				printf("==================================\n");
			}
		}
		else
		{
			printf("�߸��Է��ϼ̽��ϴ�.\n");
		}
	}//while
}//main

//����ü ����
//�ҽ� ����
//�ҽ��ڵ忡 ��������
