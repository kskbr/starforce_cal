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
	std::cout << "------------------------------------------스타포스 강화 수치 계산기------------------------------------------" << std::endl;
	std::cout << "원하는 메뉴를 선택하시오(1.무기 2.방어구 3.악세서리): ";
	std::cin >> select;
	std::cout << "" << std::endl;;
	check_menu_number(select);
}

void end_menu() {
	int select_button_end;
	std::cout << "원하는 메뉴를 선택하시오(1.처음으로 2.종료): ";
	std::cin >> select_button_end;
	if (select_button_end == 1) {
		system("cls");
		print_menu();
	}
	else {
		std::cout << "종료되었습니다." << std::endl;
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
		std::cout << "------------------------------------------스타포스 강화 수치 계산기(무기)------------------------------------------" << std::endl;
		std::cout << "장비 레벨을 입력하시오.(숫자만 입력) : ";
		std::cin >> Lv;;
		Armor_Enchant_Info(Lv);
		end_menu();
	}
	else if (a == 2) {
		system("cls");
		std::cout << "------------------------------------------스타포스 강화 수치 계산기(방어구)------------------------------------------" << std::endl;
		std::cout << "장비 레벨을 입력하시오.(숫자만 입력) : ";
		std::cin >> Lv;;
		Armor_Enchant_Info(Lv);
		end_menu();
	}
	else if (a == 3) {
		system("cls");
		std::cout << "------------------------------------------스타포스 강화 수치 계산기(악세서리)------------------------------------------" << std::endl;
		std::cout << "장비 레벨을 입력하시오.(숫자만 입력) : ";
		std::cin >> Lv;;
		Armor_Enchant_Info(Lv);
		end_menu();

	}
	else {
		std::cout << "종료되었습니다." << std::endl;
	}
}

void Armor_Enchant_Info(int Lv) {
	int Equipment_star = 0;		// 장비 스타포스 수치
	int AP = 0;				// 공격력,마력
	int ΔAP = 0;			// 15~20성의 공격력,마력 증가량
	int ΔAP2 = 0;			// 22~25성의 공격력,마력 증가량
	int all_stat = 0;			// 스텟
	std::cout << "스타포스 수치를 입력하시오.(숫자만 입력) : ";
	std::cin >> Equipment_star;
	if (Equipment_star > 25) {
		std::cout << "잘못된 수치 입니다.";
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
						ΔAP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ΔAP);

					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (7 + ΔAP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (8 + ΔAP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (9 + ΔAP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (11 + ΔAP);
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
						ΔAP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ΔAP);
					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (9 + ΔAP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (10 + ΔAP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (12 + ΔAP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (14 + ΔAP);
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
						ΔAP2 += 2;
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
					else if (Lv == 140) {
						AP = AP + (15 + ΔAP2);
					}
					else if (Lv == 150) {
						AP += (16 + ΔAP2);
					}
					else if (Lv == 160) {
						AP += (17 + ΔAP2);
					}
					else if (Lv == 200) {
						AP += (19 + ΔAP2);
					}
				}
			}
		}
		std::cout << "스타포스 : " << Equipment_star << "성" << std::endl;
		std::cout << "올스텟 : " << "+" << all_stat << std::endl;
		std::cout << "공격력 or 마력 :" << "+" << AP << std::endl;
	}
}

void Weapon_Type_Info() {

}

void Weapon_Enchant_Info(int Lv) {
	int Equipment_star = 0;		// 장비 스타포스 수치
	int AP = 0;       				// 공격력,마력
	int ΔAP = 0;			// 15~20성의 공격력,마력 증가량
	int ΔAP2 = 0;			// 22~25성의 공격력,마력 증가량
	int all_stat = 0;			// 스텟
	std::cout << "스타포스 수치를 입력하시오.(숫자만 입력) : ";
	std::cin >> Equipment_star;
	if (Equipment_star > 25) {
		std::cout << "잘못된 수치 입니다.";
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
						ΔAP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ΔAP);

					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (7 + ΔAP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (8 + ΔAP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (9 + ΔAP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (11 + ΔAP);
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
						ΔAP++;
					}
					if (Lv == 130) {
						all_stat += 7;
						AP = AP + (6 + ΔAP);
					}
					else if (Lv == 140) {
						all_stat += 9;
						AP += (9 + ΔAP);
					}
					else if (Lv == 150) {
						all_stat += 11;
						AP += (10 + ΔAP);
					}
					else if (Lv == 160) {
						all_stat += 13;
						AP += (12 + ΔAP);
					}
					else if (Lv == 200) {
						all_stat += 15;
						AP += (14 + ΔAP);
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
						ΔAP2 += 2;
					}
					if (Lv == 130 && i == 20) {
						Equipment_star = 20;
						break;
					}
					else if (Lv == 140) {
						AP = AP + (15 + ΔAP2);
					}
					else if (Lv == 150) {
						AP += (16 + ΔAP2);
					}
					else if (Lv == 160) {
						AP += (17 + ΔAP2);
					}
					else if (Lv == 200) {
						AP += (19 + ΔAP2);
					}
				}
			}
		}
		std::cout << "스타포스 : " << Equipment_star << "성" << std::endl;
		std::cout << "올스텟 : " << "+" << all_stat << std::endl;
		std::cout << "공격력 or 마력 :" << "+" << AP << std::endl;
	}
}
