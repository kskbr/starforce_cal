#include <iostream>
void print_menu();
void check_menu_number(int select);
void result(int a);
void Armor_Enchant_Info(int Lv);

int main(void) {
	int Lv = 0;
	print_menu();
	return 0;
}


void print_menu() {
	int  select;
	std::cout << "------------------------------------------��Ÿ���� ��ȭ ��ġ ����------------------------------------------" << std::endl;
	std::cout << "���ϴ� �޴��� �����Ͻÿ�(1.���� 2.�� 3.�Ǽ�����): ";
	std::cin >> select;
	std::cout << "" << std::endl;;
	check_menu_number(select);
}

void end_menu() {
	int select_button_end;
	std::cout << "���ϴ� �޴��� �����Ͻÿ�(1.ó������ 2.����): ";
	std::cin >> select_button_end;
	if (select_button_end == 1) {
		system("cls");
		print_menu();
	}
	else {
		std::cout << "����Ǿ����ϴ�." << std::endl;
	}
}

void check_menu_number(int a) {
	if (a < 1 || a>3)
		print_menu();
	else
		result(a);
}

void result(int a) {
	int Lv = 0;
	if (a == 1) {
		system("cls");
		std::cout << "------------------------------------------��Ÿ���� ��ȭ ��ġ ����(����)------------------------------------------" << std::endl;
		std::cout << "��� ������ �Է��Ͻÿ�.(���ڸ� �Է�) : ";
		std::cin >> Lv;;
		Armor_Enchant_Info(Lv);
		end_menu();
	}
	else if (a == 2) {
		system("cls");
		std::cout << "------------------------------------------��Ÿ���� ��ȭ ��ġ ����(��)------------------------------------------" << std::endl;
		std::cout << "��� ������ �Է��Ͻÿ�.(���ڸ� �Է�) : ";
		std::cin >> Lv;;
		Armor_Enchant_Info(Lv);
		end_menu();
	}
	else if (a == 3) {
		system("cls");
		std::cout << "------------------------------------------��Ÿ���� ��ȭ ��ġ ����(�Ǽ�����)------------------------------------------" << std::endl;
		std::cout << "��� ������ �Է��Ͻÿ�.(���ڸ� �Է�) : ";
		std::cin >> Lv;;
		Armor_Enchant_Info(Lv);
		end_menu();

	}
	else {
		std::cout << "����Ǿ����ϴ�." << std::endl;
	}
}

void Armor_Enchant_Info(int Lv) {
	int Equipment_star = 0;		// ��� ��Ÿ���� ��ġ
	int AP = 0;				// ���ݷ�,����
	int ��AP = 0;			// 15~20���� ���ݷ�,���� ������
	int ��AP2 = 0;			// 22~25���� ���ݷ�,���� ������
	int all_stat = 0;			// ����
	std::cout << "��Ÿ���� ��ġ�� �Է��Ͻÿ�.(���ڸ� �Է�) : ";
	std::cin >> Equipment_star;
	if (Equipment_star > 25) {
		std::cout << "�߸��� ��ġ �Դϴ�.";
	}
	else {
		for (int i = 1; i <= Equipment_star; i++) {
			if (i <= 5 && i > 0) {
				all_stat += 2;
				AP += 0;
			}

			else if (i > 5 && i <= 15) {
				if (i <= 5) {
					all_stat += 2;
					AP += 0;
				}
				else {
					all_stat += 3;
					AP += 0;
				}
			}

			else if (i > 15 && i <= 21) {
				if (i <= 5) {
					all_stat += 2;
					AP += 0;
				}
				else if (i > 5 && i <= 15) {
					all_stat += 3;
					AP += 0;
				}
				else {
					for (int j = 0; j < 1; j++) {
						��AP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ��AP);

					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (7 + ��AP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (8 + ��AP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (9 + ��AP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (11 + ��AP);
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
				}
			}

			else if (i > 21 && i <= 22) {
				if (Lv == 130 && i == 20) {
					Equipment_star = 20;
					break;
				}
				else if (Lv == 140) {
					all_stat += 9;
					AP += 15;
				}
				else if (Lv == 150) {
					all_stat += 11;
					AP += 16;
				}
				else if (Lv == 160) {
					all_stat += 13;
					AP += 17;
				}
				else if (Lv == 200) {
					all_stat += 15;
					AP += 19;
				};
			}

			else if (i > 22 && i <= 25) {
				if (Lv == 130 && i == 21) {
					Equipment_star = 20;
					break;
				}
				if (Equipment_star < 5) {
					all_stat += 2;
					AP += 0;
				}
				else if (i > 5 && i <= 15) {
					all_stat += 3;
					AP += 0;
				}
				else if (i > 15 && i <= 21) {
					for (int j = 0; j < 1; j++) {
						��AP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ��AP);
					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (9 + ��AP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (10 + ��AP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (12 + ��AP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (14 + ��AP);
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
				}
				else if (i > 21 && i <= 22) {
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += 15;
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += 16;
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += 17;
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += 19;
					}
				}
				else {
					for (int j = 0; j < 1; j++) {
						��AP2 += 2;
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
					else if (Lv == 140) {
						AP = AP + (15 + ��AP2);
					}
					else if (Lv == 150) {
						AP += (16 + ��AP2);
					}
					else if (Lv == 160) {
						AP += (17 + ��AP2);
					}
					else if (Lv == 200) {
						AP += (19 + ��AP2);
					}
				}
			}
		}
		std::cout << "��Ÿ���� : " << Equipment_star << "��" << std::endl;
		std::cout << "�ý��� : " << "+" << all_stat << std::endl;
		std::cout << "���ݷ� or ���� :" << "+" << AP << std::endl;
	}
}

void Weapon_Type_Info() {

}

void Weapon_Enchant_Info(int Lv) {
	int Equipment_star = 0;		// ��� ��Ÿ���� ��ġ
	int AP = 0;       				// ���ݷ�,����
	int ��AP = 0;			// 15~20���� ���ݷ�,���� ������
	int ��AP2 = 0;			// 22~25���� ���ݷ�,���� ������
	int all_stat = 0;			// ����
	std::cout << "��Ÿ���� ��ġ�� �Է��Ͻÿ�.(���ڸ� �Է�) : ";
	std::cin >> Equipment_star;
	if (Equipment_star > 25) {
		std::cout << "�߸��� ��ġ �Դϴ�.";
	}
	else {
		for (int i = 1; i <= Equipment_star; i++) {
			if (i <= 5 && i > 0) {
				all_stat += 2;
				AP += 0;
			}

			else if (i > 5 && i <= 15) {
				if (i <= 5) {
					all_stat += 2;
					AP += 0;
				}
				else {
					all_stat += 3;
					AP += 0;
				}
			}

			else if (i > 15 && i <= 21) {
				if (i <= 5) {
					all_stat += 2;
					AP += 0;
				}
				else if (i > 5 && i <= 15) {
					all_stat += 3;
					AP += 0;
				}
				else {
					for (int j = 0; j < 1; j++) {
						��AP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ��AP);

					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (7 + ��AP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (8 + ��AP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (9 + ��AP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (11 + ��AP);
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
				}
			}

			else if (i > 21 && i <= 22) {
				if (Lv == 130 && i == 20) {
					Equipment_star = 20;
					break;
				}
				else if (Lv == 140) {
					all_stat += 9;
					AP += 15;
				}
				else if (Lv == 150) {
					all_stat += 11;
					AP += 16;
				}
				else if (Lv == 160) {
					all_stat += 13;
					AP += 17;
				}
				else if (Lv == 200) {
					all_stat += 15;
					AP += 19;
				};
			}

			else if (i > 22 && i <= 25) {
				if (Lv == 130 && i == 21) {
					Equipment_star = 20;
					break;
				}
				if (Equipment_star < 5) {
					all_stat += 2;
					AP += 0;
				}
				else if (i > 5 && i <= 15) {
					all_stat += 3;
					AP += 0;
				}
				else if (i > 15 && i <= 21) {
					for (int j = 0; j < 1; j++) {
						��AP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ��AP);
					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (9 + ��AP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (10 + ��AP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (12 + ��AP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (14 + ��AP);
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
				}
				else if (i > 21 && i <= 22) {
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += 15;
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += 16;
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += 17;
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += 19;
					}
				}
				else {
					for (int j = 0; j < 1; j++) {
						��AP2 += 2;
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
					else if (Lv == 140) {
						AP = AP + (15 + ��AP2);
					}
					else if (Lv == 150) {
						AP += (16 + ��AP2);
					}
					else if (Lv == 160) {
						AP += (17 + ��AP2);
					}
					else if (Lv == 200) {
						AP += (19 + ��AP2);
					}
				}
			}
		}
		std::cout << "��Ÿ���� : " << Equipment_star << "��" << std::endl;
		std::cout << "�ý��� : " << "+" << all_stat << std::endl;
		std::cout << "���ݷ� or ���� :" << "+" << AP << std::endl;
	}
}
